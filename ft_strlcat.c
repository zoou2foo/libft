/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 07:04:48 by vjean             #+#    #+#             */
/*   Updated: 2022/04/19 11:09:59 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
