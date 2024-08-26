#include <stdio.h>

int        max(int* tab, unsigned int len)
{
    if (len == 0)
        return  0;
    int i = 0;
    int max = tab[0];
    while (tab[i])
    {
        if (tab[i + 1] > tab[i])
            max = tab[i + 1];
        i++;
    }
    return max;
}

int main()
{
    char tab[10];
    tab = {12,64,96,05,85};
    printf("%d",max(tab, 5));
}