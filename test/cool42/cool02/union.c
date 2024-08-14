#include <unistd.h>

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

int main(int argc, char **argv)
{
    int i;
    int k;
    int size = ft_strlen(argv[1]) + ft_strlen(argv[2]) + 1;
    char tmp[size];

    if (argc == 3)
    {
        k = 0;
        i = 0;
        while (argv[1][i])
        {
            if (deja_vu(tmp, argv[1][i]) == 0)
                {
                    tmp[k] = argv[1][i];
                    k++;
                }
            i++;
        }
        i = 0;
        while (argv[2][i])
        {
            if (deja_vu(tmp, argv[2][i]) == 0)
                {
                    tmp[k] = argv[2][i];
                    k++;
                }
            i++;
        }
        int j = 0;
        while (tmp[j])
            ft_putchar(tmp[j++]);
    }
    ft_putchar('\n');
} 