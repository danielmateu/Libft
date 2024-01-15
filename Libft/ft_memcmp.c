
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = -1;
    if (n == 0)
        return (0);
    while (++i < n)
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
    return (0);
}

int main(void)
{
    // Test1
    char str1[] = "Hel";
    char str2[] = "Hello";
    printf("Test1: %d\n", ft_memcmp(str1, str2, 11));
}