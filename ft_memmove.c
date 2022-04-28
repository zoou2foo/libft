/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:37:42 by vjean             #+#    #+#             */
/*   Updated: 2022/04/11 16:41:00 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction qui copie "len bytes" de la chaine src a la chaine dst. Elle gere 
// les overlap que memcpy ne fait pas. Retourne un pointeur a dst. Si dst et 
// src sont egales, retourne dst. Au cas ou dst est plus grand que src: tant
// que len (le nombre de bytes est plus grand que l'index); on cast dst et src,
// car void. Puis, + len-1 pour ne pas inclure le '\0'. On decremente len ici
// pour passer le nombre de bytes a copier, car on a commence a la fin.
// Si dst est plus petit que src: tant que len est plus grand que i; copie
// normal et on incremente, car on a commence du debut; pour ne pas creer un 
// overlap. 
#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	if (dst == src)
		return (dst);
	else if (dst > src)
	{
		while (len > i)
		{
			*((char *)dst + len - 1) = *((char *)src + len - 1);
			len--;
		}
	}
	else
	{
		while (len > i)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
