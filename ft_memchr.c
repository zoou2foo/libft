/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:01:13 by vjean             #+#    #+#             */
/*   Updated: 2022/04/14 15:45:54 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
// trouver la premiere occurence du int converti en char dans la chaine. Il 
// un index pour se balader dans la chaine. N est le nombre de caracteres a
// chercher dans la chaine. Pour cela qu'il faut decrementer. Puis, on cast pour
// permettre la comparaison. Lorsque la 1ere occurence est trouve, on retourne
// un pointeur sur le caractere cherche (int c caster en char) dans la chaine
// Si le caractere n'est pas trouve: retourne NULL

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;

	i = 0;
	while (n--)
	{
		if (((unsigned char *)s)[i] != (unsigned char)c)
		i++;
		else
			return ((char *)&s[i]);
	}
	return (NULL);
}
