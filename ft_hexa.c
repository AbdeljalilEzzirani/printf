/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:25:48 by abez-zir          #+#    #+#             */
/*   Updated: 2022/12/12 02:38:16 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexa(unsigned long n, char *base)
{
	int					count;

	count = 0;
	if (n >= 0 && n <= 15)
		count += ft_putchar(base[n]);
	else if (n >= 16)
	{
		count += ft_hexa(n / 16, base);
		count += ft_hexa(n % 16, base);
	}
	return (count);
}
