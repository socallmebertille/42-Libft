/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:09:29 by saberton          #+#    #+#             */
/*   Updated: 2024/05/21 18:49:44 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dst[i] && i < siz - 1)
		i++;
	j = 0;
	while (i < siz - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	while (src[j])
		j++;
	return (j);
}

/*#include <stdio.h>
#include <string.h>

int     main(void)
{
	char    dest[15] = "Hola que tal ?";
        char    src[11] = "Muy bien !";

        printf("La chaine src : %s ", src);
        printf("est composee de %zu caractere.\n",ft_strlcat(dest, src, 25));
        printf("Voici a quoi ressemble maintenant dest : %s", dest);
        return (0);
}*/
