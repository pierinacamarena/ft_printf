/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:06:22 by pcamaren          #+#    #+#             */
/*   Updated: 2021/06/23 20:08:50 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_flag_init(void)
{
	t_flags		flags;

	flags.minus = 0;
	flags.zero = 0;
	flags.dot = 0;
	flags.star = 0;
	flags.width = 0;
	flags.plus = 0;
	return(flags);
}

int		ft_process_input(const char *str, va_list list)
{
	int		i;
	int		char_count;
	t_flags	flags;

	i = 0;
	char_count = 0;
	while (*str)
	{
		flags = ft_flag_init();
		if (!*str)
			break;
		else if (*str!= '%')
		{
			write(1, &*str++, 1);
			char_count++;
			continue;
		}
		else if (*str == '%')
		{
			str++;
			char_count += ft_process_fs(&str, list, &flags);
			str++;
		}
	}
	return (char_count);
}

/** returns the total length of chars that are displayed by printf
 *
 **/

int		ft_printf(const char  *input, ...)
{
	va_list		list;
	int			count;
	int			i;
	const char	*str;

	if (!(str = ft_strdup(input)))
		return (0);
	count = 0;
	va_start(list, input);
	count += ft_process_input(str, list);
	va_end(list);
	free((char*)str);
	return(count);
}
