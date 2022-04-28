/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:34:16 by vajean            #+#    #+#             */
/*   Updated: 2022/04/11 16:42:40 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// la fonction copie n bytes de la memoire de la chaine src vers la memoire de 
// dst. Les overlap ne sont pas geres, donc possibilite que cela ne fonctionne 
// pas. N est le nombre de caracteres a copier. Comme src et dst sont des 
// pointeurs "void" il faut d'abord les caster en char. Puis, la copie se fait
// dans la boucle while.
#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdst;

	i = 0;
	if (!dst && !src)
	{
		return (NULL);
	}
	csrc = (char *)src;
	cdst = (char *)dst;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (cdst);
}
