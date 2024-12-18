/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:07:51 by abez-zir          #+#    #+#             */
/*   Updated: 2022/12/12 02:44:29 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(long n)
{
	int					count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(n * (-1));
	}
	else
	{
		if (n > 9)
		{
			count += ft_putnbr(n / 10);
		}
		count += ft_putchar(n % 10 + 48);
	}
	return (count);
}
