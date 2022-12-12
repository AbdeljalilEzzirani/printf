/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 00:02:43 by abez-zir          #+#    #+#             */
/*   Updated: 2022/12/11 00:27:37 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr(char *s)
{
	int					i;
	int					count;

	if (s == NULL)
		write (1, "(NULL)", 6);
	count = 0;
	i = 0;
	while (s[i])
	{
		count += write (1, &s[i], 1);
		i++;
	}
	return (count);
}
