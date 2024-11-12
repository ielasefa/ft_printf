/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_unsg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:36:24 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/12 17:09:59 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_putnbr_ungned_fb(unsigned int nb, size_t *count)
{
	if (nb > 9)
	{
		ft_putnbr_ungned_fb( nb / 10 , count);
	}
	ft_putchar_fb(nb % 10 + '0' , count);
}
