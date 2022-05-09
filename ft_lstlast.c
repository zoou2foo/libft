/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:10:27 by vjean             #+#    #+#             */
/*   Updated: 2022/05/09 13:19:07 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//J'avais pas besoin de tmp. Tant qu'il y a de quoi dans lst; si le lien lst a
//next égale null, on retourne lst, car il est déjà au dernier élément. Lst 
//égale le lien de lst à next. C'est la façon d'avancer dans une liste. Quand 
//il finit, sors de la boucle et retourne lst qui est au dernier élément de la 
//liste.
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
