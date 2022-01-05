/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:22:45 by pcamaren          #+#    #+#             */
/*   Updated: 2021/09/08 18:24:58 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_process_fs(const char *str, va_list list)
{
	int		char_count;
	char	c;

	c = *str;
	char_count = 0;
	if (ft_is_fs(c))
	{
		char_count += ft_treat_fs(c, list);
		str++;
	}
	else
	{
		return (-1);
	}
	return (char_count);
}

bool	ft_is_fs(char c)
{
	if (c == 'd' || c == 's' || c == 'x' || c == 'X' || c == 'p' || c == 'u'\
			|| c == '%' || c == 'i' || c == 'c')
		return (true);
	else
		return (false);
}

int	ft_treat_fs(char c, va_list list)
{
	int				char_count;

	char_count = 0;
	if (c == 'c')
		char_count += ft_treat_char(list);
	if (c == 's')
		char_count += ft_treat_str(list);
	if (c == 'd' || c == 'i')
		char_count += ft_treat_int(list);
	if (c == 'u')
		char_count += ft_treat_u(list);
	if (c == 'x' || c == 'X')
		char_count += ft_treat_hexa(list, c);
	if (c == '%')
	{
		ft_putchar('%');
		char_count++;
	}
	if (c == 'p')
	{
		char_count += ft_treat_str_simple("0x");
		char_count += ft_treat_hexa_sizet(list, 'x');
	}
	return (char_count);
}
