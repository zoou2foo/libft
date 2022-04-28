/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 08:13:34 by vjean             #+#    #+#             */
/*   Updated: 2022/04/23 11:01:56 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction qui compare la memoire. Elle compare les bytes de la chaine s1 aux
// bytes de la chaine s2. Le n represente le nombre de byte a comparer. Comme
// ce sont des chaines "void" il faut les caster en char. Si n est zero, 
// retourner 0 pour sortir du programme. Besoin d'un index pour se balader.
// Tant que l'index est plus petit que le nombre de byte a comparer moins 1
// pour ne pas inclure '\0'. Peu importe, la fonction retourne la difference
// entre s1 et s2. Que ce soit positif ou negatif.
#include"libft.h"
#include<string.h>

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((size_t)i < n - 1)
	{
		if (str1[i] > str2[i])
			return (str1[i] - str2[i]);
		if (str1[i] < str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}
