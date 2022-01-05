/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:54:40 by pcamaren          #+#    #+#             */
/*   Updated: 2021/09/08 18:26:28 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_treat_u(va_list list)
{
	int				count_char;
	unsigned int	u;

	count_char = 0;
	u = va_arg(list, unsigned int);
	if (u == 0)
	{
		ft_putchar('0');
		return (1);
	}
	count_char += ft_putnbr(u);
	return (count_char);
}
