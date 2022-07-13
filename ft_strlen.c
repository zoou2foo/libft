/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:16:42 by vjean             #+#    #+#             */
/*   Updated: 2022/04/22 16:58:18 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction pour mesurer la longeur d'une chaine de caractere. Besoin d'un 
// compteur pour la mesure. Tant que le compteur n'est pas rendu a la fin de la 
// chaine, on incremente. Retourne i.
#include"libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
