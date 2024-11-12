/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <iel-asef@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 00:04:01 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/12 16:32:46 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_putnbr_fb(int n , size_t  *count)
{
	if (n == -2147483648)
	{
		ft_putstr_fb("-2147483648", count);
		return;
	}
	if (n < 0)
	{
		ft_putchar_fb('-', count);
		n = -n;
	}
	if(n > 9)
	{
		ft_putnbr_fb(n / 10 , count);
		ft_putchar_fb(n % 10 + '0' , count);
	}
	else
		ft_putchar_fb(n % 10 + '0' , count);
}
/*
 int main() {
    size_t count = 0;
    
    // Testing ft_putstr_fb with a string
    ft_putstr_fb("Hello, world!", &count);
    printf("\nCharacter count: %zu\n", count);
    
    // Resetting the count for next test
    count = 0;
    
    // Testing ft_putnbr_fb with a number
    ft_putnbr_fb(12345, &count);
    printf("\nCharacter count: %zu\n", count);
    
    // Testing ft_putnbr_fb with a negative number
    count = 0;
    ft_putnbr_fb( 2147483647  ,&count);
    printf("\nCharacter count: %zu\n", count);
    
    // Testing ft_putstr_fb with NULL
    count = 0;
    ft_putstr_fb(NULL, &count);
    printf("\nCharacter count: %zu\n", count);
    
    return 0;
}*/
