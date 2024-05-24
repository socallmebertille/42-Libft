/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:07:39 by saberton          #+#    #+#             */
/*   Updated: 2024/05/24 22:09:57 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n <  0)
		count++;
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int 	count;
	char	*s;

	count = ft_count(n);
	if (n < 0)
		count += 1;
	if (!count)
		return (NULL);
	s = (char *)malloc(sizeof(char) * (count + 1));
	if (!s)
		return (NULL);
	while (count-- > 0)
	{
		if (n < 0)
		{
			n = -n;
			*s++ = "-";
		}
		while (n > 9)
		{
			
		}
		
	}
}

#include <stdio.h>

int	main(int ac, char **av)
{
	char	*s;

	if (ac > 2)
		return (1);
	printf("int d'origine : %d\n", av[1]);
	s = ft_itoa(av[1]);
	printf("chaine : %s\n", s)
	return (0);
}
