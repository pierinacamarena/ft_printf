/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 17:29:01 by pcamaren          #+#    #+#             */
/*   Updated: 2021/06/21 17:29:34 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"

int		ft_treat_hexa(unsigned int i, char c)
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

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
