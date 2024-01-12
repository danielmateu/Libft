#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *last;

    last = NULL;
    c = (unsigned char)c;
    while (*s)
    {
        if (*s == c)
            last = (char *)s;
        s++;
    }
    if (c == '\0')
        last = (char *)s;
    return (last);
}
/*
int main()
{
    char str[] = "Hello World";
    char *ret;

    ret = ft_strrchr(str, 'l');
    printf("String after |%c| is - |%s|\n", 'l', ret);

    return (0);
}
*/