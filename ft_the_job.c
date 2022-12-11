/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_the_job.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:11:57 by abez-zir          #+#    #+#             */
/*   Updated: 2022/12/11 03:48:01 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_the_job(va_list list, const char ch)
{
    //int                 nbr;

    //nbr = 0;
    if (ch == '%')
        ft_putchar('%');
    else if (ch == 'c')
        ft_putchar(va_arg(list, int));
    else if (ch == 's')
        ft_putstr(va_arg(list, char *));
    else if (ch == 'd')
        ft_putnbr(va_arg(list, int));
    else if (ch == 'i')
        ft_putnbr(va_arg(list, int));
    else if (ch == 'u')
        ft_putnbr(va_arg(list, unsigned int));
    else if (ch == x)
        ft_
    else if (ch == X)
    return ;
}
