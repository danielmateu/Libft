#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    if (size != 0)
    {
        dst[i] = '\0';
    }
    return (ft_strlen(src));
}
/*
int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main()
{
    char *src = "Hello World";
    char dst[5];
    printf("%zu\n", ft_strlcpy(dst, src, 5));
    printf("%s\n", dst);
    return (0);
}

*/