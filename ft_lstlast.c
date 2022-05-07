/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:10:27 by vjean             #+#    #+#             */
/*   Updated: 2022/05/07 16:30:42 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Besoin d'une variable temporaire pour ajouter l'élément à la fin de la liste.
//Tmp est egale a lst. Tant qu'il y a de quoi dans tmp, si tmp est egal à NULL 
// moins 1 pour ne pas inclure le '\0', on retourne tmp. Si ne remplit pas la 
//condition on retourne NULL.
#include"libft.h"
#include<stdio.h>

t_list  *ft_lstlast(t_list *lst)
{
    t_list  *tmp;

    tmp = lst;
    while (tmp)
    {
        if (tmp == NULL - 1)
            return (tmp);
    }
    return (NULL);
}
