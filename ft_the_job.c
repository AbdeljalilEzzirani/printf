/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_the_job.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:11:57 by abez-zir          #+#    #+#             */
/*   Updated: 2022/12/12 02:47:08 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_the_job(va_list list, const char ch)
{
	int						nbr;

	nbr = 0;
	if (ch == '%')
		nbr += ft_putchar('%');
	else if (ch == 'c')
		nbr += ft_putchar(va_arg(list, int));
	else if (ch == 's')
		nbr += ft_putstr(va_arg(list, char *));
	else if (ch == 'd' || ch == 'i')
		nbr += ft_putnbr(va_arg(list, int));
	else if (ch == 'u')
		nbr += ft_putnbr(va_arg(list, unsigned int));
	else if (ch == 'x')
		nbr += ft_hexa_low(va_arg(list, unsigned int), "0123456789abcdef");
	else if (ch == 'X')
		nbr += ft_hexa_up(va_arg(list, unsigned int), "0123456789ABCDEF");
	else if (ch == 'p')
		nbr += (ft_putstr("0x"))
			+ ft_hexa_ptr(va_arg(list, unsigned long), "0123456789abcdef");
	else
		nbr += ft_putchar(ch);
	return (nbr);
}
