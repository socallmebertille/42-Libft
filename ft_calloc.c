/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:36:44 by saberton          #+#    #+#             */
/*   Updated: 2024/05/22 15:54:54 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	//const size_t	protect = nmemb * size;
	size_t	len;

	len = nmemb * size;
	if (len == 0)
		return (NULL);
	/*if (nmemb && protect / size != size)
		return (0);*/
	ptr = malloc(len/*nmemb * size*/);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}

#include <stdio.h>

void print_memory(const void *ptr, size_t size)
{
    const unsigned char *p = (const unsigned char *)ptr;
    for (size_t i = 0; i < size; i++) {
        printf("%02x ", p[i]);
    }
    printf("\n");
}

int	main(void)
{
	size_t	count = 0;
	size_t	size = 0;
	size_t	count1 = 0;
	size_t	size1 = 0;
	int	*arr;
	char	*tab = "";

	printf("Tableau de int :\n");
	arr = (int *)calloc(count1, size1);
	printf("Resultat attendu :\n");
	for (size_t i = 0; i < count1; i++)
		printf("%d ", arr[i]);
	free(arr);
	arr = (int *)ft_calloc(count1, size1);
	printf("\nResultat obtenu :\n");
	for (size_t i = 0; i < count1; i++)
		printf("%d ", arr[i]);
	free(arr);

	printf("\n\nTableau de char :\n");
	printf("Etat de la memoire de tab au debut : ");
        print_memory(tab, sizeof(tab));
	tab = (char *)calloc(count, size);
        printf("Resultat attendu :\n");
        printf("%s\n", tab);
	printf("Etat de la memoire de tab apres calloc : ");
	print_memory(tab, sizeof(tab));
	free(tab);
        tab = (char *)ft_calloc(count, size);
        printf("\nResultat obtenu :\n");
        printf("%s\n", tab);
	printf("Etat de la memoire de tab apres ft_calloc : ");
        print_memory(tab, sizeof(tab));
	free(tab);
	return (0);
}
