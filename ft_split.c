/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:41:20 by saberton          #+#    #+#             */
/*   Updated: 2024/05/24 21:04:07 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *str, char c)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			len++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
		if (str[i] == '\0')
			return (len);
	i++;
	}
	return (len);
}

void	free_tab(char **tab, const char *s, char c)
{
	int	count;

	count = ft_count(s, c);
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
			while (s[i++] != c)
				j++;
			tab[k] = ft_substr(s, i - j - 1, j);
			if (tab[k] == NULL)
			{
				free_tab(tab, s, c);
				return (NULL);
			}
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	char	**tab;

	if (!s)
		return (NULL);
	len = ft_count(s, c);
	tab = (char **)malloc(sizeof(char *) * (len + 1));
	if (!tab)
	{
		free(tab);
		return (NULL);
	}
	i = 0;
	ft_tab(s, c, tab, i);
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
	free_tab(tab, av[1], *av[2]);
	return (0);
}*/
