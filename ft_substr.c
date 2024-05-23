/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:19:47 by saberton          #+#    #+#             */
/*   Updated: 2024/05/23 16:01:17 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!len || start > ft_strlen(s))
		return (NULL);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[start] != '\0' && i < len)
		sub[i++] = s[start++];
	return (sub);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s = "***189543***";

	printf("Chaine s : %s\n", s);
	s = ft_substr(s, 3, 6);
	printf("Chaine s w/ ft_substr : %s\n", s);
	free(s);
	return (0);
}*/
