#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;
    while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
        i++;
    if (nptr[i] == '-')
        sign = -1;
    if (nptr[i] == '-' || nptr[i] == '+')
        i++;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        res = res * 10 + (nptr[i] - '0');
        i++;
    }
    return (res * sign);
}

int main(void)
{
    // Test para comprobar uso de ft_atoi
    char str[] = "   -123456789";
    printf("Test1: %d\n", ft_atoi(str));

    // Test para comprobar uso de atoi
    char str2[] = "   123456789";
    printf("Test2: %d\n", atoi(str2));

    // Test para comprobar uso de atoi
    char str3[] = "abceder";
    printf("Test3: %d\n", atoi(str3));
}