/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:06:22 by pcamaren          #+#    #+#             */
/*   Updated: 2021/05/21 19:28:50 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_process_input(const char *str, va_list list)
{
	int i;
	int char_count;

	i = 0;
	char_count = 0;
	while (str[i] != '\0' && str[i + 1])
	{
		if (!str[i])
			break;
		else if (str[i] == '%' && str[i])
		{
			char_count += ft_process_ffs(str[i], list);
		}
		else if (str[i] != '%' && str[i-1] != '%')
		{
			write(1, &str[i], 1);
			char_count++;
		}
		i++;
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
