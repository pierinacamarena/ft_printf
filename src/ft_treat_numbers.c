/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 17:30:51 by pcamaren          #+#    #+#             */
/*   Updated: 2021/09/08 18:25:50 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_intsize(unsigned int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

int	ft_putnbr(unsigned int i)
{
	int	char_count;

	char_count = ft_intsize(i);
	if (i / 10 != 0)
	{
		ft_putnbr(i / 10);
	}
	ft_putchar((i % 10) + '0');
	return (char_count);
}

int	ft_treat_int(va_list list)
{
	int	count_char;
	int	i;

	i = va_arg(list, int);
	if (i == 0)
	{
		ft_putchar('0');
		return (1);
	}
	count_char = 0;
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
		count_char++;
	}
	count_char += ft_putnbr((unsigned int)i);
	return (count_char);
}
