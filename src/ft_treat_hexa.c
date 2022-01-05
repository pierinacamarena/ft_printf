/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 17:29:01 by pcamaren          #+#    #+#             */
/*   Updated: 2021/09/08 18:25:37 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hexa_helper(int n, char c, char *hexadec)
{
	int	j;
	int	count_char;

	j = n - 1;
	count_char = 0;
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
	return (count_char);
}

int	ft_treat_hexa(va_list list, char c)
{
	char			hexadec[100];
	int				n;
	int				count_char;
	unsigned int	i;
	int				temp;

	n = 0;
	i = va_arg(list, unsigned int);
	if (i == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (i != 0)
	{
		temp = 0;
		temp = i % 16;
		if (temp < 10)
			hexadec[n++] = temp + 48;
		else
			hexadec[n++] = temp + 55;
		i = i / 16;
	}
	count_char = ft_hexa_helper(n, c, hexadec);
	return (count_char);
}

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
