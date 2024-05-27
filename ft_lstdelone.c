/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 06:15:47 by saberton          #+#    #+#             */
/*   Updated: 2024/05/27 20:01:33 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
		del(lst);
}

/*#include <stdio.h>

void	del_node(void *lst)
{
	free(lst);
}

void	aff_list(t_list *lst)
{
	while (lst)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*lst;
	t_list	*elem1 = malloc(sizeof(t_list));
	t_list	*elem2 = malloc(sizeof(t_list));
	t_list	*elem3 = malloc(sizeof(t_list));
	t_list	*elem4 = malloc(sizeof(t_list));

	lst = elem1;
	elem1->content = "Hola";
	elem1->next = elem2;
	elem2->content = " hola,";
	elem2->next = elem3;
	elem3->content = " que";
	elem3->next = elem4;
	elem4->content = " tal ?";
	elem4->next = NULL;

	printf("Ma liste chainee avant ft_lstdelone :\n");
	aff_list(lst);
	t_list	*temp = elem2->next;
	ft_lstdelone(elem2, del_node);
	elem1->next = temp;
	printf("\nMa liste chainee apres ft_lstdelone :\n");
	aff_list(lst);
	
	t_list	*lst_original;
	while (lst)
	{
		lst_original = lst;
		lst = lst->next;
		ft_lstdelone(lst_original, del_node);
	}
	return (0);
}*/
