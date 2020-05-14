/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:34:09 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/14 14:30:44 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H__
# define __LIBFT_H__
# include <string.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *arr, int c, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
int	ft_memcmp(const void *arr1, const void *arr2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *d, const char *l, size_t len);
int	ft_toupper (int c);
int	ft_tolower(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int digit);
int	ft_isalnum(int num);
int	ft_isascii(int num);
int	ft_isprint(int num);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int num);
int	ft_atoi(const char *str);

#endif
