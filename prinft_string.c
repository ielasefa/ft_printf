/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <iel-asef@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:26:59 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/12 16:25:33 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

void ft_putstr_fb(char *s , size_t  *count)
{
	if(!s)
	{
		ft_putstr_fb("NULL" , count);
		return;
	}	
	while(*s)
	{
		ft_putchar_fb(*s, count);
		s++;
	}
}
