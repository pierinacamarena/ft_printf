/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 19:45:30 by pcamaren          #+#    #+#             */
/*   Updated: 2021/06/23 19:07:29 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_putstr(char	*str)
{
	int		len;
	int		i;
	
	i = 0;
	len = ft_strlen(str);
	while(str[i] != '\0' && i < len)
		ft_putchar(str[i++]);
}

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

char	*ft_strnew(size_t size)
{
	char *newstr;

	if (!(newstr = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_memset(newstr, '\0', size + 1);
	return (newstr);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			n;
	unsigned char	*b2;
	unsigned char	c2;

	b2 = b;
	c2 = c;
	n = 0;
	while (n < len)
	{
		b2[n] = c2;
		n++;
	}
	return (b);
}


int		ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
