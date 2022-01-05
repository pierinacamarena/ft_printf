/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:12:01 by pcamaren          #+#    #+#             */
/*   Updated: 2021/09/07 20:48:33 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdarg.h>
# include	<stdio.h>
# include	<stdarg.h>
# include	<unistd.h>
# include	<stdbool.h>
# include	<stdlib.h>

int		ft_printf(const char *input, ...);
int		ft_process_input(const char *str, va_list list);
char	*ft_strdup(const char *str);
void	ft_putchar(int c);
bool	ft_is_fs(char c);
int		ft_treat_char(va_list list);
int		ft_treat_fs(char c, va_list list);
int		ft_process_fs(const char *str, va_list list);
int		ft_treat_str(va_list list);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_putnbr(unsigned int i);
int		ft_treat_int(va_list list);
int		ft_treat_hexa(va_list list, char c);
int		ft_treat_hexa_sizet(va_list list, char c);
int		ft_tolower(int c);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strnew(size_t size);
int		ft_intsize(unsigned int n);
int		ft_treat_u(va_list list);
int		ft_treat_str_simple(char *str);
int		ft_hexa_helper(int n, char c, char *hexadec);
int		ft_sizet_hex_helper(int n, char c, char *hexadec);
void	ft_strdel(char **str);

#endif
