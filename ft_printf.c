/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:09:55 by abez-zir          #+#    #+#             */
/*   Updated: 2022/12/11 03:52:44 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *content, ...)
{
	int                 i;
    va_list             list;
    int                 nbr;
    
    i = 0;
    va_start(list, content);
    while (content[i])
    {
        if (content[i] == '%')
        {
            ft_the_job(list , content[i + 1]);
            i++;
        }
        else
            ft_putchar(content[i]);
        i++;
    }
    return (nbr);
}

int main ()
{
   //char p[]="I'm here";
    int  n;
    n = -2147483649;
    //char            c;
    //c = 'H';

    ft_printf("hello %i \n", n);
    printf("hello %i \n", n);
}
