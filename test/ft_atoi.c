#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	x;

	i = 0;
	result = 0;
	x =1;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v'))
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			x = -x;
		i++;
	}
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (x * result);
}

int main()
{
	char str[] = " ---+--+1234ab567";
	printf("%d", ft_atoi(str));
}
