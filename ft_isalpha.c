/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <saberton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:23:33 by saberton          #+#    #+#             */
/*   Updated: 2024/05/17 18:54:09 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
<<<<<<< HEAD
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        return (1);
    return (0);
}

/*#include <stdio.h>

int main(void)
{
    int c;

    c = 97;
    printf("%d\n", ft_isalpha(c));
    return (0);
}*/
=======
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (0);
	return (1);
}
>>>>>>> b3d22ba (added ft_isalppha / isalnum / isdigit & changes libft.h)
