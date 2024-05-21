/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:09:03 by saberton          #+#    #+#             */
/*   Updated: 2024/05/21 12:15:10 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	src[4] = "Hola";
	char	cpy[4];

	printf("%s\n", src);
	printf("%d\n", strlcpy(cpy, src, 4));
	return (0);
}
