/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:41:20 by saberton          #+#    #+#             */
/*   Updated: 2024/05/26 02:44:45 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_tab(const char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
		if (str[i] == '\0')
			return (count);
		else
			i++;
	}
	return (count);
}

void	free_tab(char **tab, int count)
{
	while (count >= 0)
	{
		free(tab[count]);
		count--;
	}
	free(tab);
}

char	**ft_tab(char const *s, char c, char **tab, int i)
{
	int	j;
	int	k;

	k = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			tab[k] = ft_substr(s, i, j);
			if (tab[k] == NULL)
			{
				free_tab(tab, k - 1);
				return (NULL);
			}
			k++;
			i += j;
		}
	}
	tab[k] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**tab;

	if (!s)
		return (NULL);
	len = len_tab(s, c);
	tab = (char **)malloc(sizeof(char *) * (len + 1));
	if (!tab)
	{
		free(tab);
		return (NULL);
	}
	ft_tab(s, c, tab, 0);
	if (!tab)
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}

/*#include <stdio.h>

int	main(int ac, char **av)
{
	char	**tab;
	int	i;

	printf("Chaine originale : %s\n", av[1]);
	tab = ft_split(av[1], *av[2]);
	i = ac * 0;
	if (tab == NULL)
	{
		free(tab);
		printf("error");
		return (0);
	}
	while (tab[i])
		printf("%s\n", tab[i++]);
	printf("%s\n", tab[i]);
	free_tab(tab, ft_count(s, c));
	return (0);
}*/
