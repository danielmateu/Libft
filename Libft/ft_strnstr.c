#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (ft_strlen(needle) > len)
		return (NULL);
	if (haystack[0] == '\0')
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
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