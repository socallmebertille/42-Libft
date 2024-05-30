/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <saberton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:46:15 by saberton          #+#    #+#             */
/*   Updated: 2024/05/30 17:00:07 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return ((unsigned int)c);
}

/*#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("%c\n%c", ft_toupper(-5), toupper(-5));
}*/
