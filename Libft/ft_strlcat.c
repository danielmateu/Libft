#include "libft.h"
#include <stddef.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dst_len;
    size_t src_len;

    i = 0;
    j = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (size <= dst_len)
        return (src_len + size);
    while (dst[i] && i < size - 1)
        i++;
    while (src[j] && i < size - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst_len + src_len);
}
/*
int main(void)
{
    char *src = "Hello";
    char dst[11] = "World";
    printf("%zu\n", ft_strlcat(dst, src, 11));
    printf("%s\n", dst);
    return (0);
}
*/