/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:22:45 by pcamaren          #+#    #+#             */
/*   Updated: 2021/06/21 17:49:28 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_process_fs(const char **str, va_list list, t_flags flags)
{
	int		char_count;
	char	c;

	c = **str;
	char_count = 0;
	if (ft_is_flag(c))
		printf("This is a flag! \n");
	else if (ft_is_fs(c))
		char_count += ft_treat_fs(c, list);
	return(char_count);
}


bool	ft_is_flag(char c)
{
	if( c == '.' || c == '*' || c == '-' || c == '0')
		return (true);
	else
		return (false);
}

bool	ft_is_fs(char c)
{
	if( c == 'd' || c == 's' || c == 'x' || c == 'X' || c == 'p' || c == 'u' || c == '%' || c == 'i' || c == 'c')
		return (true);
	else
		return (false);
}

void	ft_treat_char(char c)
{
	ft_putchar(c);
}

int		ft_treat_str(char *str)
{
	int	count_char;

	count_char = ft_strlen(str);
	if (!str)
		str = "(NULL)";
	ft_putstr(str);
	return (count_char);
}

int		ft_treat_fs(char c, va_list list)
{
	int				char_count;
	unsigned int	i;
	char			*str;
	int				number;
	size_t			t;


	char_count = 0;
	if (c == 'c')
	{
		i = va_arg(list, int);
		ft_treat_char(i);
		char_count++;
	}
	if (c == 's')
	{
		str = va_arg(list, char *);
		char_count += ft_treat_str(str);
	}
	if (c == 'd' || c == 'i')
	{
		number = va_arg(list, int);
		char_count += ft_treat_int(number);
	}
	if (c == 'u')
	{
		i = va_arg(list, unsigned int);
		char_count += ft_treat_u(i);
	}
	if (c == 'x' || c == 'X')
	{
		i = va_arg(list, unsigned int);
		char_count += ft_treat_hexa(i, c);
	}
	if (c == '%')
	{
		ft_putchar('%');
		char_count++;
	}
	if (c == 'p')
	{
		t = va_arg(list, size_t);
		ft_putchar('0');
		char_count++;
		ft_putchar('x');
		char_count++;
		char_count += ft_treat_hexa_sizet(t, 'x');
		}

	return(char_count);
}
