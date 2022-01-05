/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:51:27 by pcamaren          #+#    #+#             */
/*   Updated: 2021/09/08 18:25:11 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

char	*ft_strdup(const char *str)
{
	char	*output;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	output = (char *)malloc(sizeof (char) * len + 1);
	if (!output)
		return (NULL);
	while (str[i] != '\0')
	{
		output[i] = str[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}

char	*ft_strnew(size_t size)
{
	char	*newstr;

	newstr = (char *)malloc(sizeof(char) * size + 1);
	if (!newstr)
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
