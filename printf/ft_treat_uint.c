/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:54:40 by pcamaren          #+#    #+#             */
/*   Updated: 2021/06/22 15:54:42 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_treat_u(unsigned int u)
{
	int		count_char;

	count_char = 0;
	count_char += ft_putnbr(u);
//	printf("count_char is %d", count_char);
	return (count_char);
}
