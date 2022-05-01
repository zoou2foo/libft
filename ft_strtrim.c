/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:48:29 by vjean             #+#    #+#             */
/*   Updated: 2022/04/23 11:45:37 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction qui enleve les caracteres de 'set' dans la chaine. S'il n'y a rien
// dans la chaine OU dans set, retourne NULL. Pendant, qu'il y a de quoi dans
// s1 ET que dans la recherche de set dans s1 n'est pas NULL (a la fin), on
// incremente (on continue de se balader. Variable end qui est egale a la 
// longueur de la chaine. Pendant qu'il y a un nombre dans 'end' et que la
// recherche de 'set' dans 's1 a partir de la fin' n'est pas NULL (n'est pas
// a la fin), on decremente la variable fin (car on commence a la fin ici.) Puis,
// on retourne la nouvelle string cree sans le set (sans oublier d'ajout '\0'.

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1) != NULL)
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]) != NULL)
		end--;
	return (ft_substr(s1, 0, end + 1));
}
