#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}





int is_separator(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return 0;
}

int count_word(char *str)
{
    int counter = 0;
    int i = 0;

    while(str[i])
    {
        while(str[i] && is_separator(str[i]) == 1)
        i++;
        if (str[i] != 0)
            counter++;
        while(str[i] && is_separator(str[i]) == 0)
        i++;
    }
    return counter;
}


int len_word(char *str)
{
    int i = 0;
    while(str[i] && is_separator(str[i]) == 0)
    i++;

    return i;
}


char *save_word(char *str)
{
    int i = 0;
    int len_word = len_word(str);
    char *word = malloc(sizeof(char) *(len_word + 1));
    while(str[i] && is_separator(str[i]) == 0)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = 0;
    return word;
}


/// "      djkdfjkdf jkdsjkdjk  "

char **ft_split(char *str)
{
    
}

int main()
{
    char s[] = "hello my name\tis hanane\nbye!";
    char **alo = ft_split(s);
    int i = 0;
    while (alo[i])
    {
        printf("%s\n",alo[i++]);
    } 
}
// this is not a code this is a tkhrbi9