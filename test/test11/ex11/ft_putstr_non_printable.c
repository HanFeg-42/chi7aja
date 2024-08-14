/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:50:00 by hfegrach          #+#    #+#             */
/*   Updated: 2024/08/03 17:20:03 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dectohex(int x)
{
	int	div;
	int	mod;

	div = (unsigned char) x / 16;
	mod = (unsigned char) x % 16;
	if (div <= 9)
		ft_putchar(div + '0');
	else
		ft_putchar(div + 87);
	if (mod <= 9)
		ft_putchar(mod + '0');
	else
		ft_putchar(mod + 87);
}

void	ft_putstr_non_printable(char *str)
{
	char	c;
	int		i;

	i = 0 ;
	c = '\\';
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar(c);
			ft_dectohex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return 0;
}
