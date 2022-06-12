/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:01:55 by vjean             #+#    #+#             */
/*   Updated: 2022/05/09 13:10:52 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//On veut savoir le nombre d'éléments dans la liste. On a besoin d'un index
//pour compter. Maintenant, je me demande pourquoi j'ai besoin d'un t-list tmp?
//Serait-ce possible de la faire juste avec le int pour l'index? Ou est-ce plus
//simple de la faire sur une copie temporaire?? !!!Pas besoin de tmp!!!
//Juste besoin d'un index pour compter. Puis, protection en disant que s'il 
// n'a rien, retourne 0 pour arrêter tout de suite le programme. On part le 
//compteur à 1. !!Pas comme une string, donc pas de case 0. Tant qu'on n'est 
//pas la fin de la liste, on incrémente le i. Puis, lst devient égale à lst
// qui access a next. Puis, on recommence et on incrémente le i. A la fin, 
//retourne i a la fin.
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
