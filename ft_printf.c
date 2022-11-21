
#include "ft_printf.h"

static void	calc_size(va_list primary,char flag, int *count)
{	
	if(flag == 'c')
		ft_putchar_count(va_arg(primary,int),count);
	if(flag == 's')
		ft_putstr_count(va_arg(primary,char *),count);
	if(flag == 'd' || flag == 'i')
		ft_putnbr_count(va_arg(primary,int),count);
	if(flag == 'x')
		ft_puthexa_count(va_arg(primary,unsigned int),count);
	if(flag == 'X')
		ft_puthexaX_count(va_arg(primary,unsigned int),count);
	if(flag == 'u')
		ft_putunsigned_number(va_arg(primary,unsigned int ),count);
	if (flag == 'p')
	{
		ft_putstr_count("0x",count);
		ft_puthexa_count(va_arg(primary,unsigned int),count);
	}
	if (flag == '%')
		ft_putchar_count('%',count);

}
 int ft_printf(const char *hi, ...)
 {
	int	index;
	int	size;
	
	va_list primary;
	va_start(primary,hi);

	index = 0;
	size = 0;
	while (hi[index])
	{
		if (hi[index] == '%')
		{
			index++;
			calc_size(primary,hi[index],&size);
		}
		else
			ft_putchar_count(hi[index],&size);
		index++;
	}
	va_end(primary);
	return(size);
}