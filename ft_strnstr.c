/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:53:15 by saberton          #+#    #+#             */
/*   Updated: 2024/05/21 19:44:01 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*l;
	char			*b;

	l = (char *)little;
	b = (char *)big;
	i = 0;
	if (!l[0])
		return (b);
	while (b[i] && i < len)
	{
		if (l[i] == b[i])
		{
			j = 0;
			while (l[i + j] == b[i + j] && i + j < len)
			{
				j++;
				if (!l[i + j])
					return (l);
			}
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	char	little[20] = "Hola";
	char	big[15] = "Hola que tal ?";

        printf("Little : %s.\n", little);
        printf("Big : %s.\n", big);
	printf("Resultat obtenu : %s", ft_strnstr(big, little, 7));
        return (0);
}*/
