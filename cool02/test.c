#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

int ft_countword(char *str)
{
    int i = 0;
    int j = 1;
    int count = 0;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            j = 1;
        else if (j == 1 && str[i])
        {
            count++;
            j = 0;
        }
        i++;
    }
    return count;
}

char *ft_strdup(char *src)
{
    char *dup;
    dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (!dup)
        return NULL;
    int i = 0;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }    
    dup[i] = '\0';
    return (dup);
}

char **ft_split(char *str)
{
    char **result;
    char *word =malloc(ft_strlen(str));// ghalat 3arfa
    int a = 0, b, j=1, i = 0;
    printf("%d\n",ft_countword(str));
    result = (char **)malloc(sizeof(char *) * ft_countword(str) + 1);
    if (!result)
        return NULL;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            j = 1;
        else if (j == 1 && str[i])
        {
            b = 0;
            while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
                word[b++] = str[i++];
            word[b] = '\0';   
            result[a] = ft_strdup(word);
            a++;
            j = 0;
            i--;
        }
        i++;
    }
    return result;   
}

int main()
{
    char s[] = "    hello my name\tis hanane\nbye!   ";
    char **alo = ft_split(s);
    int i = 0;
    while (alo[i])
    {
        printf("%s\n",alo[i++]);
    } 
}


