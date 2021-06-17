#include "ft_printf.h"

int		ft_treat_u(unsigned int u)
{
	int		count_char;

	count_char = 0;
	count_char += ft_putnbr(u);
//	printf("count_char is %d", count_char);
	return (count_char);
}
