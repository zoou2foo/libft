/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:47:47 by vjean             #+#    #+#             */
/*   Updated: 2022/05/07 16:40:44 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//On créé un nouvel élément dans la liste. Le pointeur de node devient le 
//contenu du void *content. Il faut lui donner la memoire de t_list avec l'aide
//de malloc. Puis, faire les connections et association entre les nodes et leur 
//contenu. Puis, on retourne le nouvel élément.
#include "libft.h"
#include<stdio.h>

t_list  *ft_lstnew(void *content)
{
    t_list  *node;

    node = malloc(sizeof(t_list));
    node->content = content;
    node->next = NULL;
    return (node);
}
