#ifndef FT_PRINTF_H
#define FT_PRINTF_H


#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_printf(const char *format, ...);
int	ft_putchar_count(char c, int *count);
int ft_puthexa_count(unsigned int n, int *count);
int	ft_putnbr_count(int n, int *count);
int	ft_putstr_count(char *s, int *count);
int ft_putunsigned_number(unsigned int n , int *count);
int ft_puthexaX_count(unsigned int n, int *count);

#endif