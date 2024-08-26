#include <stdio.h>

char    *ft_strrev(char *str)
{
    char tmp;
    int i = 0, j;
    while(str[i])
        i++;
    int l = i - 1;
    j = 0;
    while(j <= l/2)
    {
        tmp = str[j];
        str[j] = str[i-1];
        str[i-1] = tmp;
        j++;
        i--;
    }
    return str;
}

int main()
{
    char s[] = "hcaw";
    char *l = ft_strrev(s);
    int i = 0;
    while (s[i])
        printf("%c",l[i++]);
}