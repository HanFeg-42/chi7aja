#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int  deja_vu(char *tmp, char c)
{
    int i = 0;
    while (tmp[i])
    {
        if (tmp[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

int main(int ac, char **av)
{
    int i;
    int j;
    int k;
   
    if (ac == 3)
    {
        int size = ft_strlen(av[1]) + ft_strlen(av[2]) + 1;
        char tmp[size];
        i = 0;
        k = 0;
        while (av[1][i])
        {
            j = 0;
            while(av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    if (deja_vu(tmp, av[1][i]) == 0)
                    {
                        tmp[k] = av[1][i];
                        k++;
                    }      
                }
                j++;
            }
            i++;
        }
        tmp[k] = '\0';
        k = 0;
        while (tmp[k])
            ft_putchar(tmp[k++]);
    }
    ft_putchar('\n'); 
}