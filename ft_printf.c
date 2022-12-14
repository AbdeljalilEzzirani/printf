/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:09:55 by abez-zir          #+#    #+#             */
/*   Updated: 2022/12/13 20:26:10 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *content, ...)
{
	int					i;
	va_list				list;
	int					nbr;

	i = 0;
	nbr = 0;
	va_start(list, content);
	while (content[i])
	{
		if (content[i] == '%')
		{
			if (content == '\0')
				break ;
			nbr += ft_the_job(list, content[i + 1]);
			i++;
		}
		else
			nbr += ft_putchar(content[i]);
		i++;
	}
	va_end(list);
	return (nbr);
}
