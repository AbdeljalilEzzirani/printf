/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:17:56 by abez-zir          #+#    #+#             */
/*   Updated: 2022/12/13 20:25:16 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexa_ptr(unsigned long n, char *base)
{
	int					count;

	count = 0;
	if (n >= 0 && n <= 15)
		count += ft_putchar(base[n]);
	else if (n >= 16)
	{
		count += ft_hexa_ptr(n / 16, base);
		count += ft_hexa_ptr(n % 16, base);
	}
	return (count);
}
