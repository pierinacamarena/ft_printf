/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:15:18 by pcamaren          #+#    #+#             */
/*   Updated: 2021/05/21 18:40:22 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	int iPrintf;

	printf("=========================\n");
	printf("		(1) Prueba char [f]\n");
	ft_printf("this is my printf %c\n", 'f');
	printf("this is the other printf %c\n", 'f');
	//	printf("valeur de retour = [%d]\n", ft_printf("ft_printf = [%c]\n", 'f'));
//	printf("valeur de retour = [%d]\n", printf("   printf = [%c]\n", 'f'));
	printf("=========================\n");

	/**

//	int d = 'p';

	iPrintf = ft_printf("I love Rambo and he is a cutieeee   %c\n", 'p');
	printf("______________________________________________________\n");
	printf("I love Rambo and he is a cutieeee   %c\n", 'p');
	printf("______________________________________________________\n");
	printf("the number of characters read is %d", iPrintf);

	return (0);
	**/
	return(0);
}
