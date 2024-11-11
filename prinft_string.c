/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prinft_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:26:59 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/11 23:53:46 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

void ft_putstr_fb(char *s , int *count)
{
	if(!s)
		return(ft_strlen(s));
	while(*s)
	{
		ft_putchar_fb(s ,count);
		s++;
	}
}
int main()
{

	char *s = "ilyas";
	int count = 0;
	ft_putstr_fb(s ,count);

}
