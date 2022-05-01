/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:47:44 by vajean            #+#    #+#             */
/*   Updated: 2022/04/12 08:03:48 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction qui compare deux chaines de caractere (par rapport a sa valeur ascii)
// pas plus que n caractere. Si 'n' est egal a 0, retourne 0. La fonction 
// retourne la difference entre s1 et s2 (selon l'emplacement de l'index).
#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
