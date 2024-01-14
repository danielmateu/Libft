#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (little[0] == '\0')
        return ((char *)big);
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while (big[i + j] == little[j] && i + j < len)
        {
            if (little[j + 1] == '\0')
                return ((char *)big + i);
            j++;
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    // Test para comprobar uso de ft_strnstr
    char str1[] = "Hello";
    char str2[] = "llo";
    printf("Test1: %s\n", ft_strnstr(str1, str2, 11));
}