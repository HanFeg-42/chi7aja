/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:49:56 by hfegrach          #+#    #+#             */
/*   Updated: 2024/08/10 14:08:38 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	result_size(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		counter = counter + j;
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	return ((size - 1) * i + counter);
}

void	concatenate(int size, char **strs, char *sep, char **result)
{
	int	i;
	int	j;
	int	c;

	c = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			(*result)[c] = (strs)[i][j];
			j++;
			c++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			(*result)[c] = (sep)[j];
			c++;
			j++;
		}
		i++;
	}
	(*result)[c] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	if (size == 0)
		return (NULL);
	result = malloc(sizeof(char) * result_size(size, strs, sep));
	if (!result)
		return (NULL);
	concatenate(size, strs, sep, &result);
	return (result);
}

int	main()
{
	char	*s[] = {"hello","my","name","is","hanane"};
	char	sep[] = ", ";
	char	*str = ft_strjoin(5, s, sep );
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
