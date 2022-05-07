/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:16:37 by vjean             #+#    #+#             */
/*   Updated: 2022/05/07 16:18:00 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Besoin de créer une variable 't_list' pour mettre la nouvelle node a la fin.
//S'il y a de quoi au pointeur lst, last est egal a la fonction lstlast qu'on a
//créé précédemment. Last accès a next qui est egal a new (a la nouvelle node)
// Sinon le pointeur lst egale le new node.

#include "libft.h"
#include<stdio.h>

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;

    if (*lst)
    {
        last = ft_lstlast(*lst);
        last->next = new;
    }
    else
        *lst = new;
}
