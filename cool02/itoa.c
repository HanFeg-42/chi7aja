#include <stdlib.h>
#include <stdio.h>

char    *ft_itoa(int nbr)
{
    int i = 0;
    long n = nbr;
    long d = 1;
    char *s = malloc(sizeof(char));
    if (!s)
        return (NULL);
    if (n < 0)
    {
        s[i] = '-';
        i++;
        n = -n;
    }
    while (d <= n)
        d *= 10;
    d /= 10;
    if (d == 0)
        d = 1;
    while (n >= 0 && d > 0)
    {
        s[i++] = n / d + '0';
        n = n % d;
        d /= 10; 
    }
    return s;
}


int main()
{


    printf("%s\n", ft_itoa(-2147483648));
    return 0;
}