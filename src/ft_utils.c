/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 19:45:30 by pcamaren          #+#    #+#             */
/*   Updated: 2021/09/08 18:26:44 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	ft_strlen(char *str)
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
	while (str[i] != '\0' && i < len)
		ft_putchar(str[i++]);
}

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_strdel(char **str)
{
	if (str && *str)
	{
		free(*str);
		*str = NULL;
	}
}
