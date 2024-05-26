/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 04:51:00 by saberton          #+#    #+#             */
/*   Updated: 2024/05/26 05:28:20 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*#include <stdio.h>

int	main(void)
{
	int	content = 42;
	t_list	*node = ft_lstnew(&content);

	if (!node)
		return(1);
	printf("%d\n", *(int *)(node->content));
	free(node);
	return (0);
}*/
