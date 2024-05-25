/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:42:23 by saberton          #+#    #+#             */
/*   Updated: 2024/05/25 20:20:46 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *) str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "Hola que tal";

	printf("%s\n", ft_strchr(str, 'a'));
	printf("%s\n", strchr(str, 'a'));
	return (0);
}*/
