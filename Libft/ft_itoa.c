#include "libft.h"
/*
** Allocates (with malloc(3)) and returns a string representing the integer received as an argument.
** Negative numbers must be handled.
** Return value: The string representing the integer. NULL if the allocation fails.

** Parameters: #1. The integer to convert.
** External functs: malloc
*/

char    *ft_itoa(int n)
{
    long    num;
    int     len;
    int     sign;
    char    *str;

    sign = (n < 0) ? -1 : 1;
    num = (long)n * sign;
    len = (n <= 0) ? 1 : 0;
    while (n)
    {
        n /= 10;
        len++;
    }
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    while (len--)
    {
        str[len] = num % 10 + '0';
        num /= 10;
    }
    if (sign == -1)
        str[0] = '-';
    return (str);
}