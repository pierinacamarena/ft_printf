/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:22:45 by pcamaren          #+#    #+#             */
/*   Updated: 2021/06/04 17:44:14 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_process_fs(const char **str, va_list list, t_flqgs flags)
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

int		ft_put_numbr(unsigned int i)
{
	int char_count;

	char_count = 0;
	if (i / 10 != 0)
		ft_putnbr(i /10);
	ft_putchar((n % 10) + '0');
	char_count++;
	return (char_count);
}

int		ft_treat_int(int i)
{
	int	count_char;

	count_char = 0;
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
		count_char++;
	}
	count_char += ft_putnbr(unsigned int(i));
	return (count_char);
}

int		ft_treat_fs(char c, va_list list)
{
	int				char_count;
	unsigned int	i;
	char			*str;
	int				number;


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
	if (c == 'd')
	{
		number = va_arg(list, int);
		char_count += ft_treat_int(number);
	}
	return(char_count);
}
