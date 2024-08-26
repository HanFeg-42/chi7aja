#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    int pos;
    
    if(ac == 2)
    {
        while (av[1][i])
        {
            if(av[1][i] == ' ' || av[1][i] == '\t')
                j = 1;
            else if (j == 1 && !(av[1][i] == ' ' || av[1][i] == '\t'))
            {
                pos = i;
                while (!(av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
                    i++;
                i--;
                j = 0;
            }
            i++;
        }
        while (av[1][pos] && !(av[1][pos] == ' ' || av[1][pos] == '\t'))
        {
            ft_putchar(av[1][pos++]);
        }
    } 
    ft_putchar('\n');   
}