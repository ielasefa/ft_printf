/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <iel-asef@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:06:46 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/12 17:09:07 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

//#include "libft.h"
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>

void ft_putchar_fb( char c , size_t *count);
void ft_putstr_fb(char *s , size_t *count);
void ft_putnbr_fb(int nbr , size_t  *count);
void ft_putnbr_ungned_fb(unsigned int nb, size_t *count);

#endif
