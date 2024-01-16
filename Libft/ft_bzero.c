

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    // memset(s, 0, n);
    // sin usar memset
    unsigned char *str;

    str = (unsigned char *)s;
    while (n--)
        *str++ = 0;
}
/*
int main()
{
    char str[] = "Hello world!";
    ft_bzero (str, 0);
    // puts -> imprime el string
    puts (str);
    return 0;
}
*/
