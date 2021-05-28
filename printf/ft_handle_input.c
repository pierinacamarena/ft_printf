/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:22:45 by pcamaren          #+#    #+#             */
/*   Updated: 2021/05/28 20:04:51 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_process_fs(const char **str, va_list list)
{
	int		char_count;
	char	c;

	c = **str;
	char_count = 0;
//	printf("the char received at process_fs is %c\n", c);
	if (ft_is_flag(c))
		printf("This is a flag! \n");
	else if (ft_is_fs(c))
	{
//		printf("I reached the format specifier check \n");
	//	printf("the value of char c is %c\n", c);
		char_count += ft_treat_fs(c, list);
	}
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
/**

void	ft_treat_char(char c)
{
	ft_putchar(c);
}

**/

int		ft_treat_fs(char c, va_list list)
{
	int				char_count;
	unsigned int	i;
	char	*str;


	char_count = 0;
	if (c == 'c')
	{
		i = va_arg(list, int);
		ft_putchar(i);
		char_count++;
	}
	if (c == 's')
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(NULL)";
		ft_putstr(str);
		char_count += ft_strlen(str);
		
	}
	return(char_count);
}
