/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:15:18 by pcamaren          #+#    #+#             */
/*   Updated: 2021/06/15 20:05:01 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int		main(void)
{

//	Pruebas char
	printf ("\033[33;01m	Pruebas \033[32;01mChar \033[00m\n");
	printf("=========================\n");
	printf("		(1) Prueba char [d]\n");
	printf("valeur de retour = [%d]\n", ft_printf("ft_printf = [%c]\n", 'd'));
	printf("valeur de retour = [%d]\n", printf("   printf = [%c]\n", 'd'));
	printf("=========================\n");

//	pruebas string
//
//

	printf ("\n\n\033[33;01m	Pruebas \033[32;01mString \033[00m\n");
	printf("=========================\n");
	printf("		(1) Prueba string [s]\n");
	printf("valeur de retour = [%d]\n", ft_printf("ft_printf = [%s]\n", "Hola como estas"));
	printf("valeur de retour = [%d]\n", printf("   printf = [%s]\n", "Hola como estas"));
	printf("=========================\n");

//	pruebas d integer

	printf ("\n\n\033[33;01m	Pruebas \033[32;01md \033[00m\n");

	printf("=========================\n");
	printf("		(1) Prueba numeros (d) [d]\n");
	printf("valeur de retour = [%d]\n", ft_printf("ft_printf = [%d] et [%d]\n", 42, -42));
	printf("valeur de retour = [%d]\n", printf("   printf = [%d] et [%d]\n", 42, -42));
	printf("=========================\n");

	//	pruebas i integer

	printf ("\n\n\033[33;01m	Pruebas \033[32;01mi \033[00m\n");

	printf("=========================\n");
	printf("		(1) Prueba numeros (i) [i]\n");
	printf("valeur de retour = [%d]\n", ft_printf("ft_printf = [%i] et [%i]\n", 42, -42));
	printf("valeur de retour = [%d]\n", printf("   printf = [%i] et [%i]\n", 42, -42));
	printf("=========================\n");

//	pruebas X  commit test change

	printf ("\n\n\033[33;01m	Pruebas \033[32;01m(x & X) \033[00m\n");

	printf("=========================\n");
	printf("		(1) Prueba numeros (x & X) [x] [X]\n");
	printf("valeur de retour = [%d]\n", ft_printf("ft_printf = [%x] et [%X]\n", (unsigned int)3147483647, -35));
	printf("valeur de retour = [%d]\n", printf("   printf = [%x] et [%X]\n", (unsigned int)3147483647, -35));
	printf("=========================\n");

// pruebas %

	printf ("\n\n\033[33;01m	Pruebas \033[32;01mPorcentaje \033[00m\n");

	printf("=========================\n");
	printf("		(1) Prueba numeros (35)\n");
	printf("valeur de retour = [%d]\n", ft_printf("ft_printf = [35%%]\n"));
	printf("valeur de retour = [%d]\n", printf("   printf = [35%%]\n"));
	printf("=========================\n");

// pruebas pointer

	printf ("\n\n\033[33;01m	Pruebas \033[32;01mPointer \033[00m\n");
	char a = 'a';

	printf("=========================\n");
	printf("		(1) Prueba numeros (p)\n");
	printf("valeur de retour = [%d]\n", ft_printf("ft_printf = [%p]\n", &a ));
	printf("valeur de retour = [%d]\n", printf("   printf = [%p]\n", &a));
	printf("=========================\n");

	return (0);
}

//	pruebas u integer
/**
	printf ("\n\n\033[33;01m	Pruebas \033[32;01mu \033[00m\n");

	printf("=========================\n");
	printf("		(1) Prueba numeros (u) [u]\n");
	printf("valeur de retour = [%d]\n", ft_printf("ft_printf = [%u] et [%u]\n", (unsigned int)3147483647, -42));
	printf("valeur de retour = [%d]\n", printf("   printf = [%u] et [%u]\n", (unsigned int)3147483647, -42));
	printf("=========================\n");
**/
	/**

	printf("=========================\n");
	printf("		(1) Prueba char [f]\n");
	ft_printf("this is my printf %c\n", 'f');
//	ft_printf("new line --------------------------------\n");
//	printf("this is the other printf %c\n", 'f');
	//	printf("valeur de retour = [%d]\n", ft_printf("ft_printf = [%c]\n", 'f'));
//	printf("valeur de retour = [%d]\n", printf("   printf = [%c]\n", 'f'));
	printf("=========================\n");


//	int d = 'p';

	iPrintf = ft_printf("I love Rambo and he is a cutieeee   %c\n", 'p');
	printf("______________________________________________________\n");
	printf("I love Rambo and he is a cutieeee   %c\n", 'p');
	printf("______________________________________________________\n");
	printf("the number of characters read is %d", iPrintf);

	return (0);
	**/

/**
	return(0);
}
**/

/**

int main()
{
	int temp;
	int dec;

	dec = 116;
	temp = dec % 16;
	printf("temp is %d\n", temp);
	return (0);
}
**/

