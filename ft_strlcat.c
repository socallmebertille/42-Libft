/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:09:29 by saberton          #+#    #+#             */
/*   Updated: 2024/05/23 14:15:29 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (siz == 0)
		return (ft_strlen(src));
	while (dst[i] && i < siz - 1)
		i++;
	j = 0;
	while (src[j] && i < siz - 1)
		dst[i++] = src[j++];
	if (!src[j + 1])
		dst[i] = src[j];
	else
		dst[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}

/*#include <stdio.h>
#include <string.h>

int     main(void)
{
	char    dest[6] = "Hello";
        char    *src = " Wolrd";
	size_t	dstsiz = sizeof(dest);

	printf("Chaine dest : %s\n", dest);
        printf("Chaine src : %s\n", src);
        printf("Taille ideale de dest : %zu\n",ft_strlcat(dest, src, dstsiz));
        printf("Chaine dest apres ft_strlcat: %s\n", dest);
        return (0);
}*/
