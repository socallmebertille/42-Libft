/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:42:23 by saberton          #+#    #+#             */
/*   Updated: 2024/05/20 14:29:11 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;

	while (str)
	{
		if (*str == c)
		{
			s = (char *)str;
			return (s);
		}
		str++;
	}
	if (*str == c)
	{
		s = (char *)str;
		return (s);
	}
	s = NULL;
	return (s);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "Hola que tal";

	printf("%s\n", ft_strchr(str, 97));
	printf("%s\n", strchr(str, 97));
	return (0);
}*/
