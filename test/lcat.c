#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
		unsigned int	dest_len;
		unsigned int	src_len;
		unsigned int	i;
		unsigned int	j;

		dest_len = ft_strlen(dest);
		src_len = ft_strlen(src);
		i = 0;
		j = 0;
		if (size <= dest_len)
		{
			return (size + src_len);
		}
		while (dest[i] && i < size - 1)
			i++;
		while (src[j] && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (dest_len + src_len);
}

int main()
{
	char	dest[14]="1234567";
	char	dest1[14]="1234567";
	char	src[]="fteuj";

	printf("%d\t%s\n",ft_strlcat(dest, src, 9), dest);
	printf("%ld\t%s\n",strlcat(dest1, src, 9), dest1);
}
