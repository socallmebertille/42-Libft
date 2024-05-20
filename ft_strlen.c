/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:33:54 by saberton          #+#    #+#             */
/*   Updated: 2024/05/20 13:39:50 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "Hola que tal ?";

	printf("%lu\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
	return (0);
}*/
