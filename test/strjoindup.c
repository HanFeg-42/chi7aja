#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		result_size;
	int		counter;
	int		i;
	int		j;
	int		k;
	int		c;

	if (size == 0)
		return (0);
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
	result_size = (size - 1) * i + counter;
	result = malloc(sizeof(char) * result_size);
	c = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[c] = strs[i][j];
			j++;
			c++;
		}
		k = 0;
		while (sep[k] && i < size - 1)
		{
			result[c] = sep[k];
			c++;
			k++;
		}
		i++;
	}
	result[c] = '\0';
	return (result);
}

int main()
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
