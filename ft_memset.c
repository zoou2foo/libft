/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:14:42 by vajean            #+#    #+#             */
/*   Updated: 2022/04/11 16:22:10 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La fonction remplie n bloc d'une chaine avec un caractere (char). Il faut 
// alors cast ce qui se trouve au pointeur b en char. Une macro de valeur 10.
// Len est le nombre de bytes a 'set'. Quand i est plus petit que len, on cast
// b ou il se trouve selon l'index et il egale maintenant c. Puis, on incremente
// jusqu'a ce que i egale a len.
#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;	

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
