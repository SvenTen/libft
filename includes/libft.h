#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

// String functions
int ft_strlen(const char *str);

// char functions
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

// memory functions
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);

#endif
