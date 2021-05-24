/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:22:45 by pcamaren          #+#    #+#             */
/*   Updated: 2021/05/24 20:12:13 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

char	*ft_strdup(const char *str)
{
	char	*output;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	if (!(output = (char *)malloc(sizeof(char)*len +1)))
		return (NULL);
	while (str[i] != '\0')
	{
		output[i] = str[i];
		i++;
	}
	output[i] = '\0';
	return(output);
}

int		ft_process_fs(char c, va_list list)
{

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
	if( c == 'd' || c == 's' || c == 'x' || c == 'X' || c == 'p' || c == 'u' || c == '%' || c == 'i')
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

int		ft_treat_fs(int c, va_list args)
{
	int				char_count;
	unsigned int	i;

	char_count = 0;
	if (c == 'c')
	{
		i = va_arg(args, int);
		printf("the char of i is %c\n",i);
		ft_putchar(i);
		char_count++;
	}
	return(char_count);
}
