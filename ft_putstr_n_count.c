#include "ft_printf.h"
int	ft_putstr_count(char *s, int *count)
{
	int	index;

	index = 0;
	while (s[index])
	{
		ft_putchar_count(s[index], count);
		index++;
	}
	return(0);
}