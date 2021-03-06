/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:53:41 by pcamaren          #+#    #+#             */
/*   Updated: 2021/09/08 18:25:24 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_treat_char(va_list list)
{
	char	c;

	c = va_arg(list, int);
	ft_putchar(c);
	return (1);
}
