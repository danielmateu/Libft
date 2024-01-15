#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;

    str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return (str + i);
        i++;
    }
    return (NULL);
}

int main(void)
{
    char str[] = "Hello World";
    char *ptr;
    ptr = ft_memchr(str, 'H', 11);
    printf("%s\n", ptr);
    return (0);
}