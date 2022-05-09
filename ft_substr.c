/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:20:30 by vjean             #+#    #+#             */
/*   Updated: 2022/05/09 11:33:21 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//stringa1 = (char*) malloc((n+1)*sizeof(char)); /*+1 for '\0' character */
// fonction qui retourne une "sous-chaine" de 's'. 3 variable: une pour l'index;
// une pour accueillir la sous-chaine et une pour garder la longueur de la 
// chaine 's'. Le int start indique le debut de la sous-chaine. S'il n'y a 
// rien dans la chaine 's', retourne NULL. Ensuite, on calcule la longueur de
// s (comme on joue avec, il faut la cast, car c'est un char const). Si start 
// est plus grand ou egale a la longueur de s; str(variable pour accueillir 
// sous-chaine), on alloue memoire de la longueur de s plus 1 (pour '\0'). 
// A l'index 0 sur la nouvelle chaine egale '\0'; retourne str (proteger 
// notre allocation de memoire. Si la longueur de s est plus petite que la 
// longueur max de la sous-chaine, faire une allocation de memoire pour la 
// sous-chaine. Else, allocation de memoire (**a revoir; pourquoi). Si rien 
// dans str (sous-chaine), retourne NULL (protection pour la memoire). Pendant
// qu'on se balade, ET que i est plus petit que len (la longueur max de la sous
// chaine), on copie dans str, a partir de l'index de la sous-chaine. 
// Bref la sous-chaine commence ou se trouve start. Puis, on ajoute un '\0'.
// Retourne str.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*str;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start >= slen)
	{
		str = (char *)malloc((slen + 1) * sizeof(char));
		str[0] = '\0';
		return (str);
	}
	if (slen < len)
		str = (char *)malloc((slen + 1) * sizeof(char));
	else
		str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i] && i < len)
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}
