/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:40:42 by vjean             #+#    #+#             */
/*   Updated: 2022/05/04 20:01:18 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ici front fait reference a "head" dans le tuto sur linked list. Si lst est 
//diff OU new est different; rien ne se passe. Sinon, new et son node suivant
//devient ce qui se trouve au pointeur de lst. Alors, le pointeur de lst égal
//new. Cela place 'new' au debut.
#include "libft.h"
#include<stdio.h>

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;
}