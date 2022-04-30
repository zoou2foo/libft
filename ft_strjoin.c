/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 07:35:30 by vjean             #+#    #+#             */
/*   Updated: 2022/04/22 14:24:23 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// la fonction fait joindre 2 chaines de caracteres. Besoin de plusieurs variables
// pour gerer la concatenation. Evidemment s'il n'y a rien dans s1 ou s2, retourne
// NULL. Ensuite, on mesure la longueur de chaque chaine avec strlen. Puis, on
// alloue la  memoire en fonction de la longueur de s1 et s2 en ajoutant 1 pour
// '\0'. Si l'allocation n'a pas fonctionne, retourne NULL. On a besoin de 2 
// compteurs; pour se promener dans nstr et s1+s2 pour faire la concatenation.
// On ajoute un '\0' a la fin, puis on retourne la nouvelle chaine.
#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*nstr;
	size_t	i;
	size_t	j;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	nstr = (char *)malloc((s1len + s2len + 1) * (sizeof(char)));
	if (!nstr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		nstr[j++] = s1[i++];
	i = 0;
	while (s2[i])
		nstr[j++] = s2[i++];
	nstr[j] = '\0';
	return (nstr);
}
