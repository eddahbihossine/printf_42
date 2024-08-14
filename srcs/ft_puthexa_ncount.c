#include "ft_printf.h"
int ft_puthexa_count(unsigned int n, int *count)
{
	char *base = "0123456789abcdef";

	if (n >= 16)
	{
		ft_putnbr_count(n / 16, count);
		ft_putnbr_count(n % 16, count);
	}
	else
	{
		ft_putchar_count(base[n], count);
	}
	return(0);
}

int ft_puthexaX_count(unsigned int n, int *count)
{
	char *base = "0123456789ABCDEF";

	if (n >= 16)
	{
		ft_putnbr_count(n / 16, count);
		ft_putnbr_count(n % 16, count);
	}
	else
	{
		ft_putchar_count(base[n], count);
	}
	return(0);
}