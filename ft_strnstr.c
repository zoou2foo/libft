/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:47:05 by vjean             #+#    #+#             */
/*   Updated: 2022/04/18 13:53:58 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction qui cherche une aiguille dans une botte de foin mais plus que le 
// le nombre de caractere dans LEN. Besoin de 2 variables. Une specifique pour 
// s'occuper de l'aiguille. La botte utilisera les deux pour trouver l'aiguille.
// Si l'index de l'aiguille n'est pas egal a la fin, retourne un cast de la 
// botte, car elle est const. Tant que l'index de la botte n'est pas rendu a la
// fin ET que i est plus petit que LEN --> tant que l'index i plus j dans la 
// botte est egal a l'index de l'aiguille ET que l'index i plus index j est plus
// petit que LEN --> si l'index de l'aiguille plus 1 ('\0') est egal a '\0' --> 
// retourne le cast de la chaine de la botte plus i. Puis, on incremente l'index
// j. A l'exterieur du 2e while, on incremente l'index i. Puis, si aucune 
// condition est rencontree, retourne NULL.
#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
