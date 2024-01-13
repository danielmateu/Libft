/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:41:23 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/11 17:35:17 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_strlen(const char *str);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
//char	*ft_strrchr(const char *s, int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memmove(void *dst, void const *src, size_t n);
int		ft_strncmp(const char *str, const char *str2, size_t n);
void    ft_bzero(void *s, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);

#endif
