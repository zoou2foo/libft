/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:38:53 by vjean             #+#    #+#             */
/*   Updated: 2022/04/21 09:36:57 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//je dois commencer par la fin pour trouver la dernière occurence. Bcp plus
//facile. Moins de gossage
// fonction qui chercher un caractere 'int' dans une string. Il faut donc cast
// int c. La variable i est egale a la longueur de la chaine s (pour commencer
// de la fin). Tant que i est plus grand ou egale a zero, si a l'index i dans 
// la chaine s est egal au cast en char de c, retourne la derniere occurence
// de int c. Un pointeur sur la chaine a partir de la derniere occurrence d'ou
// le plus i?? Puis on decremente jusqu'a ce que la condition soit remplie.
#include"libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
