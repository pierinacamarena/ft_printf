/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:22:45 by pcamaren          #+#    #+#             */
/*   Updated: 2021/06/23 20:11:28 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_process_fs(const char **str, va_list list, t_flags *flags)
{
	int		char_count;
	char	c;
	int i;

	c = **str;
	char_count = 0;
	if (ft_is_flag(c))
	{
		printf("This is a flag! \n");
		i = ft_flag_parse(c, flags);
	}
	else if (ft_isdigit(c))
	{
		printf("it has width!");
		i = ft_eval_width(c, flags);
	}
	else if (ft_is_fs(c))
		char_count += ft_treat_fs(c, list);
	return(char_count);
}

bool	ft_is_flag(char c)
{
	if( c == '.' || c == '*' || c == '-' || c == '0' || c == '+')
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

int		ft_eval_width(char c, t_flags *flags)
{
	flags->width = 1;
	printf("the width is %c\n", c);
	return (1);
}

int		ft_flag_parse(char c, t_flags *flags)
{
	if (c == '-')
	{
		flags->minus = 1;
		printf("it has a - flag\n");
	}
	if (c == '0')
	{
		flags->zero = 1;
		printf("it has a 0 flag\n");
	}
	if (c == '.')
	{
		flags->dot = 1;
		printf("it has a . flag\n");
	}
	if (c == '*')
	{
		flags->star = 1;
		printf("it has a * flag\n");
	}
	if (c == '+')
	{
		flags->plus = 1;
		printf("it has a + flag\n");
	}
	return (0);
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
		char_count += ft_treat_str("0x");
		char_count += ft_treat_hexa_sizet(t, 'x');
		}

	return(char_count);
}
