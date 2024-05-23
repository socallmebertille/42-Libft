/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:55:49 by saberton          #+#    #+#             */
/*   Updated: 2024/05/23 19:30:48 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	len = 0;
	while (ft_strchr(set, *s1++))
		len++;
	printf("%zu\n", len);
	if (len == 0)
		return (NULL);
	trim = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!trim)
		return (NULL);
	j = 0;
	//while (s1[i] && i < len)
	//	trim[j++] = s1[i++];
	return (trim);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s1 = "**Hola**";
	char	*set = "**";
	char	*trim;

	printf("Chaine s1 : %s & Chaine set : %s\n", s1, set);
        trim = ft_strtrim(s1, set);
        printf("Chaine s1 coupee : %s\n", trim);
        free(trim);
	return (0);
}*/
