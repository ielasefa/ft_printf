/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:15:04 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/09 16:51:13 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;
	t_list	*tmp;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	tmp = lst;
	while (tmp)
	{
		content = f(tmp->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		tmp = tmp->next;
	}
	return (new_list);
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void *ft_double(void *content)
{
    int *new_value = malloc(sizeof(int));
    if (!new_value)
        return NULL;
    *(new_value) = (*(int *)content) * 2;
    return new_value;
}

void del(void *content)
{
    free(content);  
}

void ft_print(void *content)
{
    printf("%d\n", *(int *)content);
}

int main()
{
    t_list *head = NULL;

    int values[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++) {
        int *value = malloc(sizeof(int));
        *value = values[i];
        t_list *node = ft_lstnew(value); 
        ft_lstadd_back(&head, node);
	}

    printf("Original list:\n");
    ft_lstiter(head, ft_print);

    t_list *new_list = ft_lstmap(head, ft_double, del);

    printf("\nMapped list (doubled values):\n");
    ft_lstiter(new_list, ft_print);

    ft_lstclear(&head, del);
    ft_lstclear(&new_list, del);

    return 0;
}*/
