#include <stdio.h>
#include <stdlib.h>
int		ft_atoi(const char *str)
{
	int i = 0;
    int x = 1;
    int result = 0;
    while ((str[i] >= 9 && str[i] <=13) || str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
        if (str[i] == '-')
        {
            x = -x;
            i++;
        }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * x);
}

int main()
{
    const char   str[] = "   -0";
    printf("\n\n\t\tft_atoi de %s gives : %d\n\n", str, ft_atoi(str));
    printf("\t\tatoi de %s gives : %d\n\n", str, atoi(str));

}