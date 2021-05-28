/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:22:45 by pcamaren          #+#    #+#             */
/*   Updated: 2021/05/27 18:28:05 by pcamaren         ###   ########.fr       */
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

/**
int		ft_process_fs(char **str, va_list list)
{
	int char_count;

	char_count = 0;
	printf("the char received at process_fs is %c\n", c);
	if (ft_is_flag(c))
		printf("This is a flag! \n");
	else if (ft_is_fs(c))
	{
		printf("I reached the format specifier check \n");
		printf("the value of char c is %c\n", c);
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
	if( c == 'd' || c == 's' || c == 'x' || c == 'X' || c == 'p' || c == 'u' || c == '%' || c == 'i')
		return (true);
	else
		return (false);
}


void	ft_treat_char(char c)
{
	ft_putchar(c);
}

**/

int		ft_treat_fs(const char **str, va_list list)
{
	int				char_count;
	unsigned int	i;

	char_count = 0;
//	printf("I am inside the ft_treat_fs function \n");
	if (**str == 'c')
	{
		i = va_arg(args, int);
//		printf("\n____________\n");
		ft_putchar(i);
//		printf("\n__________________\n");
		char_count++;
	}
	return(char_count);
}
