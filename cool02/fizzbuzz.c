#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
        ft_putchar(s[i++]);
}

void ft_putnbr(int nb)
{
    long n = nb;
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n > 9)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}
int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            ft_putstr("fizzbuzz");
            ft_putchar('\n');
        }
        else if (i % 3 == 0)
        {
            ft_putstr("fizz");
            ft_putchar('\n');
        }  
        else if (i % 5 == 0)
        {
            ft_putstr("buzz");
            ft_putchar('\n'); 
        }   
        else
        {
            ft_putnbr(i);
            ft_putchar('\n');
        }
        i++;
    }
}