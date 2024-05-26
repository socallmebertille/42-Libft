/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:42:23 by saberton          #+#    #+#             */
/*   Updated: 2024/05/26 01:28:30 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *) str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return ((char *)0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "teste";

	printf("%s\n", ft_strchr(str, '\0'));
	printf("%s\n", strchr(str, '\0'));
	return (0);
}*/
