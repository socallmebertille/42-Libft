/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 06:14:17 by saberton          #+#    #+#             */
/*   Updated: 2024/05/27 19:53:00 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		lst = lst->next;
		if (lst->next == NULL)
			return (lst);
	}
	return (NULL);
}

/*#include <stdio.h>

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

	lst = elem1;
	elem1->content = "Hola";
	elem1->next = elem2;
	elem2->content = " que";
	elem2->next = elem3;
	elem3->content = " tal ?";
	elem3->next = NULL;

	printf("Ma liste chainee :\n");
	aff_list(lst);
	
	t_list	*last = malloc(sizeof(t_list));
	
	last = ft_lstlast(lst);
	printf("\nDernier element de ma liste chainee :\n");
	printf("%s\n", (char *)last->content);
	
	free(elem1);
	free(elem2);
	free(elem3);
	return (0);
}*/
