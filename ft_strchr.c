/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:16:53 by vjean             #+#    #+#             */
/*   Updated: 2022/04/23 11:45:12 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction qui trouve la premiere occurence d'un int converti en char dans une
// chaine pointe par 's'. Le caractere 'NULL' est considere comme une partie 
// de la chaine, alors 'c'  peut etre le '\0'. Tant qu'il y a des caracteres dans
// s; si a l'index egale cast char de c, retourner un pointeur la. Sinon, on 
// incremente. Si 'c' est egal a '\0', retourne un pointeur la. Si aucune de ces
// conditions est remplie, retourne NULL.
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
