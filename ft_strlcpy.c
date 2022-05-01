/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:59:20 by vjean             #+#    #+#             */
/*   Updated: 2022/04/13 14:04:28 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction similaire a strlcat sauf qu'elle copie jusqu'a dstsize, un caractere
// a la fois. 2 variables: i (compteur) et srclen (pour la longueur de la chaine
// source). Si la taille de dst est egale a 0, retourne la longueur de source.
// Pendant que l'index i dans src n'est pas rendu a la fin ET i est plus petit
// que la taille de dst moins 1 (pour exclure le '\0' --> copie src dans dst, 
// incremente. Puis, on ajoute un '\0' a la fin. Retourne srclen
#include"libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}	
	dst[i] = '\0';
	return (srclen);
}
