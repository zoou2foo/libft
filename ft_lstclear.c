/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:41:00 by vjean             #+#    #+#             */
/*   Updated: 2022/05/07 15:13:10 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//On cree une variable t-list tempo. S'il n'y a rien au pointeur lst, fin du 
//programme. Pendant qu'il a de quoi pointer parr ls, tmp egal au pointeur de
//lst et ce qui acces au next. Puis, on fait la fonction delete one pour supprimer
// et free la node. Au pointeur lst egal tmp. Puis, on continue jusqu'a ce soit
//fini. A la fin, on set le pointeur de lst a NULL. Ca fait partie des consignes
#include "libft.h"
#include<stdio.h>

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *tmp;

    if (!*lst)
        return ;
    while (*lst)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, *del);
        (*lst) = tmp;
    }
    *lst = NULL;
}