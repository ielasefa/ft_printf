/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:49:25 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/08 18:18:12 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int	main(void)
{
	t_list *head = NULL;
	int  node1 = 10;
	int  node2 = 20;
	int  node3 = 30;

	t_list *n =  ft_lstnew(&node1);
	ft_lstadd_front(&head ,n);

	t_list *n1 = ft_lstnew(&node2);
	ft_lstadd_front(&head ,n1);


	t_list *n2  = ft_lstnew(&node3);
	ft_lstadd_back(&head ,n2);

	t_list *ptr = head;
	while(ptr != NULL)
	{
		printf("list ;%d\n",*(int*)ptr->content);
		ptr = ptr->next;
	}
	ptr = ft_lstlast(head);
	printf( "last:%d\n" ,*(int*)ptr->content);

	int c = ft_lstsize(head);
	printf("size: %d\n" ,c);

	*ft_lstdelone( &head, del);
	return (1);	printf()
	*/
