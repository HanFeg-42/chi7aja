/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:01:30 by hfegrach          #+#    #+#             */
/*   Updated: 2024/08/03 17:10:18 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (str[j] <= 'Z' && str[j] >= 'A')
			str[j] = str[j] + 32;
		j++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] < 'z')
		str[0] = str[0] - 32;
	while (str[i + 1])
	{
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			if (str[i + 1] >= 'a' && str[i + 1] < 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s\n",str);
	return 0;
}
