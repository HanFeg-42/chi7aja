#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
    {
        while (argv[1][i])
        { 
            if (argv[1][i] == argv[2][0])
                argv[1][i] = argv[3][0];
            ft_putchar(argv[1][i]);
            i++;
        }
        ft_putchar('\n'); 
    }
    else
        ft_putchar('\n');
    return 0;
}
