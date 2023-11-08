#ifndef LIBFT_H
#define LBTF_H

#include <stddef.h>

size_t	ft_strlen(const char *s);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
#endif