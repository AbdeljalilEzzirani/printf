/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:09:55 by abez-zir          #+#    #+#             */
/*   Updated: 2022/12/12 02:42:51 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *content, ...)
{
	int					i;
	va_list				list;
	int					nbr;

	i = 0;
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
/*
int main ()
{
    char *p;
    //char p[]="I'm here";
    //int  n;
    //n = -54483649;
    //char            c;
    //c = 'H';
    int i;
    int j;
    i = ft_printf("hello", p);
    j = printf("hello", p);
    ft_printf("%d\n",i);
    printf("%d\n",j);
}
*/
