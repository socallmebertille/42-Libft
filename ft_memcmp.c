/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:29:37 by saberton          #+#    #+#             */
/*   Updated: 2024/05/25 20:36:48 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*d1;
	char	*d2;

	d1 = (char *)s1;
	d2 = (char *)s2;
	while (*d1 == *d2 && n-- > 0)
	{
		d1++;
		d2++;
	}
	if (!n)
		return (0);
	return ((unsigned char)*d1 - (unsigned char)*d2);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[15] = "Hola hue tal ?";
	char	s2[12] = "Hola hola !";
	int	n = 7;
	
	printf("Resultat attendu :\n");
        printf("La difference de taille de memoire sur %d bytes entre \n", n);
	printf("%s\n et \n%s\n est : ", s1, s2);
	printf("%d\n", memcmp(s1, s2, n));

	printf("\nResultat obtenu :\n");
	printf("La difference de taille de memoire sur %d bytes entre \n", n);
	printf("%s\n et \n%s\n est : ", s1, s2);
	printf("%d\n", ft_memcmp(s1, s2, n));
	return (0);
}*/
