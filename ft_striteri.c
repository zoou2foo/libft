/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:49:07 by vjean             #+#    #+#             */
/*   Updated: 2022/04/22 14:27:57 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//pas de char; i pour balader
//l'ordi doit lire le prototype. Regarder les arguments donnés, puis vois qui
//call une fonction, alors probablement saute voir ce que demande la fonction 
//avant d'aller faire le reste de striteri. La fonction f est defini dans le
// 'main'. S'il n'a rien dans la chaine s, retourne rien. While que l'index dans
// s n'est pas a la fin, fonction f(index, adresse ou l'index se trouve dans la
// chaine. Puis on incremente.

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
