/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:23:13 by vajean            #+#    #+#             */
/*   Updated: 2022/04/11 16:20:12 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
// fonction pour mettre des '\0'. La fonction en place 'n' nombre. Alors tant 
// que l'index est plus petit que n, la fonctione cast des '\0' a l'index.
// l'index incremente jusqu'a temps qu'il rejoint n.

void	ft_bzero(void *s, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
