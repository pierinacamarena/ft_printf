#include "ft_printf.h"

int		ft_treat_hexa_sizet(size_t i, char c)
{
	char	hexadec[100];
	int		n;
	int		j;
	int		count_char;

	n = 0;
	count_char = 0;
	while (i != 0)
	{
		int temp;

		temp = 0;
		temp = i % 16;
		if (temp < 10)
		{
			hexadec[n] = temp + 48;
			n++;
		}
		else
		{
			hexadec[n] = temp + 55;
			n++;
		}
		i = i /16;
	}
	j = n - 1;
	if (c == 'x')
	{
		while (hexadec[count_char] != '\0')
		{
			hexadec[count_char] = ft_tolower(hexadec[count_char]);
		count_char++;
		}
	}
	count_char = 0;
	
	while (j >= 0)
	{
		ft_putchar(hexadec[j]);
		count_char++;
		j--;
	}
	return count_char;
}
