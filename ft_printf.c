/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:06:22 by pcamaren          #+#    #+#             */
/*   Updated: 2021/09/08 18:27:29 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_process_input(const char *str, va_list list)
{
	int		char_count;

	char_count = 0;
	while (*str)
	{
		if (!*str)
			break ;
		else if (*str != '%')
		{
			write(1, &*str++, 1);
			char_count++;
			continue ;
		}
		else if (*str == '%')
		{
			str++;
			char_count += ft_process_fs(&*str++, list);
		}
	}
	return (char_count);
}

/** returns the total length of chars that are displayed by printf
 *
 **/

int	ft_printf(const char *input, ...)
{
	va_list		list;
	int			count;
	const char	*str;

	str = ft_strdup(input);
	if (!str)
		return (0);
	count = 0;
	va_start(list, input);
	count += ft_process_input(str, list);
	va_end(list);
	free((char *)str);
	return (count);
}
