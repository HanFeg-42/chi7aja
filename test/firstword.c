#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (!(argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i])
        { 
            ft_putchar(argv[1][i]);
            i++;
        }
        ft_putchar('\n');
    }
    else
        ft_putchar('\n');
}
