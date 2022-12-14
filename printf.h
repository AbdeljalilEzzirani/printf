/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 00:07:48 by abez-zir          #+#    #+#             */
/*   Updated: 2022/12/14 11:19:15 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int				ft_printf(const char *content, ...);
int				ft_the_job(va_list list, const char ch);
int				ft_putchar(int c);
int				ft_putstr(char *s);
int				ft_putnbr(long n);
int				ft_hexa_low(unsigned int n, char *base);
int				ft_hexa_up(unsigned int n, char *base);
int				ft_hexa_ptr(unsigned long n, char *base);

#endif
