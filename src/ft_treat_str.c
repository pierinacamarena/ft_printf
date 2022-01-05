/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:40:30 by pcamaren          #+#    #+#             */
/*   Updated: 2021/09/08 18:26:17 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_treat_str(va_list list)
{
	int		count_char;
	char	*str;

	str = va_arg(list, char *);
	if (!str)
		str = "(null)";
	count_char = ft_strlen(str);
	ft_putstr(str);
	return (count_char);
}

int	ft_treat_str_simple(char *str)
{
	int	count_char;

	if (!str)
		str = "(NULL)";
	count_char = ft_strlen(str);
	ft_putstr(str);
	return (count_char);
}
