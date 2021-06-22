/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:40:30 by pcamaren          #+#    #+#             */
/*   Updated: 2021/06/22 15:59:25 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_treat_str(char *str)
{
	int	count_char;

	count_char = ft_strlen(str);
	if (!str)
		str = "(NULL)";
	ft_putstr(str);
	return (count_char);
}
