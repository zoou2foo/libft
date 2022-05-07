/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:01:55 by vjean             #+#    #+#             */
/*   Updated: 2022/05/07 16:28:01 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//On veut savoir le nombre d'éléments dans la liste. On a besoin d'un index
//pour compter. Maintenant, je me demande pourquoi j'ai besoin d'un t-list tmp?
//Serait-ce possible de la faire juste avec le int pour l'index? Ou est-ce plus
//simple de la faire sur une copie temporaire?? Anyway, on part le compteur a
//zero. Tant qu'on n'est pas la fin de la liste, on incrémente le i. Puis, on 
// retourne i a la fin.
#include "libft.h"
#include<stdio.h>

int ft_lstsize(t_list *lst)
{
    t_list *tmp;
    int    i;

    tmp = lst;
    i = 0;
    while (tmp != NULL)
    {
        i++;
    }
    return (i);
}
