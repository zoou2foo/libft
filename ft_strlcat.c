/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 07:04:48 by vjean             #+#    #+#             */
/*   Updated: 2022/05/09 11:28:31 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fonction qui copie et concatenate des chaines. 2 compteurs pour faciliter
// le deplacement dans source et destination. 2 variables: une pour la longueur
// de src et une pour la longueur de dst. i devient la longueur de dst. Si 
// dstlen est plus petit que la taille de dst moins 1 (ne va pas aller 
// au-dela de '\0') ET que dstsize est plus grand que 0 --> pendant qu'il y
//  a de quoi dans source ET que dstlen plus l'index j est plus petit que 
// dstsize - 1 (pour ne pas aller au-dela '\0'), copie et on ajoute un '\0' 
// a la fin de dest. Si dstlen est plus grand ou egal dstsize, dslen devient 
// egal a dstsize. Puis, on retourne dstlen + srclen.
#include"libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	unsigned int	dstlen;
	unsigned int	srclen;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = dstlen;
	if (dstlen < dstsize - 1 && dstsize > 0)
	{
		while (src[j] && dstlen + j < dstsize - 1)
		{
			dst[i++] = src[j++];
		}
		dst[i] = '\0';
	}
	if (dstlen >= dstsize)
		dstlen = dstsize;
	return (dstlen + srclen);
}
