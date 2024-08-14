#include <stdio.h>

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0' && base[1] != '\0')
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] != base[j] && base[j] != '+' && base[j] != '-')
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	is_str_valid(char *c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c[0] == base[i])
			return 1;
		i++;
	}
	return 0;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_power(char *str, char *base)
{
	int	power;
	int	i;
	int	c;

	power = 1;
	i = 0;
	c = 0;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && str[i])
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i])
		i++;
	while (str[i] && is_str_valid(&str[i], base))
	{
		i++;
		c++;
	}
	i = 0;
	while (i < c - 1)
	{
		power = power * ft_strlen(base);
		i++;
	}
	return (power);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	power;
	int	x;
	int	i;
	int	j;

	if (is_base_valid(base) )
	{
		power = ft_power(str, base);
		result = 0;
		x = 1;
		i = 0;
		while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && str[i])
			i++;
		while ((str[i] == '-' || str[i] == '+') && str[i])
			if (str[i++] == '-')
				x = -x;
		while (str[i] && is_str_valid(&str[i], base))
		{
			j = 0;
			while (base[j])
			{
				if (str[i] == base[j])
				{
					result = result + j * power;
					power /= ft_strlen(base);
				}
				j++;
			}
			i++;
		}
		return (result * x);
	}
	return (0);
}

int	main()
{
	char	str[] = "    ---+155";
	char	base[] = "01234567";
	printf("%d",ft_atoi_base(str, base));
}
