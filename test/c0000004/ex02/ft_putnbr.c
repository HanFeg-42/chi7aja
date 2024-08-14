/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:23:59 by hfegrach          #+#    #+#             */
/*   Updated: 2024/08/06 08:34:46 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;
	long	d;

	n = nb;
	d = 1;
	if (n <= 2147483647 && n >= -2147483648)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		while (d < n)
			d = d * 10;
		d = d / 10;
		if (d == 0)
			d = 1;
		if (d > 0)
		{
			ft_putchar(n / d + '0');
			if (n % d == 0)
				return ;
			ft_putnbr(n % d);
		}
	}
}

/*int	main()
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(235);
	return (0);
}*/
