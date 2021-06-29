/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:12:01 by pcamaren          #+#    #+#             */
/*   Updated: 2021/06/29 20:34:20 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include<stdarg.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct		s_flags
{
	int		minus;
	int		zero;
	int		dot;
	int		star;
	int		width;
	int		plus;
	int		insidefs;
}					t_flags;

int		ft_printf(const char *input, ...);
int		ft_process_input(const char *str, va_list list);
char	*ft_strdup(const char *str);
void	ft_putchar(int c);
bool	ft_is_flag(char c);
bool	ft_is_fs(char c);
void	ft_treat_char(char c);
int		ft_treat_fs(char c, va_list list);
int		ft_process_fs(const char **str, va_list list, t_flags *flags);
int		ft_treat_str(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_putnbr(unsigned int i);
int		ft_treat_int(int i);
int		ft_treat_hexa(unsigned int i, char c);
int		ft_treat_hexa_sizet(size_t i, char c);
int		ft_tolower(int c);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strnew(size_t size);
int		ft_intsize(unsigned int n);
int		ft_treat_u(unsigned int u);
int		ft_isdigit(char c);
int		ft_eval_width(char c, t_flags *flags);
int		ft_flag_parse(char c, t_flags *flags);


#endif

