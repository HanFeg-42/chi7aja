#include <unistd.h>
#include <stdlib.h>
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

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

char *ft_strcat(char *s1, char *s2)
{
    int i = 0;
    int s1_len = ft_strlen(s1);
    int s2_len = ft_strlen(s2);
    int size = s1_len + s2_len;
    s1 = (char *)malloc(sizeof(char) * (size + 1));
    if (s1 == NULL)
        return NULL;
    while (s1_len < size)
    {
        s1[s1_len + i] = s2[i];
        i++;
    }
    s1[s1_len + i] = '\0';
    return (s1);
}

int max_len(char **s)
{
    int i = 0;
    int j;
    int count = 0;
    while (s[i])
    {
        j = 0;
        while (s[i][j])
        {
            j++;
            count++;
        }
        i++;
    }
    return count;
}


char **ft(int ac, char **av)
{
    int i = 0;
    int c = max_len(av);
    char strs[ac / 2 + 1][200];
    int a = 0;
    while (i < ac)
    {
        strs[a] = ft_strcat(av[i], av[i+1]);
        a++;
        i += 2;
    }
    return strs;
}

int main(int ac, char **av)
{
    char s[][] = ft(ac,av);
    int i = 0;
    while (s[i])
        ft_putstr(s[i++]);
}