/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:05:30 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/04 18:23:04 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>

int		ft_isascii(int s);
int		ft_atoi(const char *str);
int		ft_isalpha(int s);
int		ft_isdigit(int s);
int		ft_isprint(int c);
int		ft_isalnum(int s);
void	*ft_memcpy(void *dst, const void *src, int n);
char	*ft_strchr(char *str, char c);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, int n);
char	*ft_strrchr(const char *str, char c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memset(void *b, int c, int len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strnstr(const char *str, const char *find, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);

#endif