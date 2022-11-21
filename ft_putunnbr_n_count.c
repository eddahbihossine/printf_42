#include "ft_printf.h"
int ft_putunsigned_number(unsigned int n , int *count)
{
 	if (n >= 10)
	{
		ft_putunsigned_number(n / 10, count);
		ft_putunsigned_number(n % 10, count);
	}
	else
	{
		ft_putchar_count(n + 48, count);
	}
	return(0);
}