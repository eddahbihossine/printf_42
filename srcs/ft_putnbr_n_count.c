#include "ft_printf.h"
int	ft_putnbr_count(int n, int *count)
{
	if (n < 0)
	{
		ft_putchar_count('-',count);
		n = -n;
		ft_putnbr_count(n, count);
	}
	else if (n >= 10)
	{
		ft_putnbr_count(n / 10, count);
		ft_putnbr_count(n % 10, count);
	}
	else
	{
		ft_putchar_count(n + 48, count);
	}
	return(0);
}

