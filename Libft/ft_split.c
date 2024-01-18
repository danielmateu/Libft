/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:05:56 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/18 16:08:14 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

// my_strncpy
char *my_strncpy(char * dst, const char * src, size_t len)
{
    size_t i;

    i = 0;
    while (i < len && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    while (i < len)
        dst[i++] = '\0';
    return (dst);
}


char	*allocate_word(const char *s, int word_len)
{
	char	*word;

	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (NULL);
	my_strncpy(word, s, word_len);
	word[word_len] = '\0';
	return (word);
}

int	next_word(char const *s, char c, int *i, int *word_len)
{
	while (s[*i] != '\0' && s[*i] == c)
		(*i)++;
	if (s[*i] == '\0')
		return (0);
	*word_len = 0;
	while (s[*i + *word_len] != '\0' && s[*i + *word_len] != c)
		(*word_len)++;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		word_len;

	strs = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	i = 0;
	j = 0;
	word_len = 0;
	if (!strs)
		return (NULL);
	while (next_word(s, c, &i, &word_len))
	{
		strs[j++] = allocate_word(s + i, word_len);
		if (!strs)
			return (NULL);
		i += word_len;
	}
	strs[j] = NULL;
	return (strs);
}
/*
int main(void)
{
	char	**strs;
	int		i;

	strs = ft_split("Menudo dolor de tarro", ' ');
	i = 0;
	while(strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	return (0);
}
*/