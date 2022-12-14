/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:18:32 by abez-zir          #+#    #+#             */
/*   Updated: 2022/12/13 20:18:44 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexa_up(unsigned int n, char *base)
{
	int							count;

	count = 0;
	if (n >= 0 && n <= 15)
		count += ft_putchar(base[n]);
	else if (n >= 16)
	{
		count += ft_hexa_up(n / 16, base);
		count += ft_hexa_up(n % 16, base);
	}
	return (count);
}
