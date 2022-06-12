/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:52:15 by vjean             #+#    #+#             */
/*   Updated: 2022/05/09 11:18:32 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// la fonction permet d'allouer de la memoire de facon plus securitaire que
// malloc. On cree d'abord un tableau d'une certaine grandeur avec un certain
// nombre de cases (size et count; selon les arguments recus). Si ptr est vide 
// du aux arguments, retourne NULL. Sinon, on remplie de '\0' grace a la
// fonction bzero.

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
