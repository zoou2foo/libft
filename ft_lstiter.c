/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:13:52 by vjean             #+#    #+#             */
/*   Updated: 2022/05/09 13:23:14 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Ne pas oublier que le (void*) en parametre fait reference au 'content' dans
// le doc de la libft. Pendant qu'il y a de quoi dans lst, on applique la 
//fonction f sur le contenu de la lst. Puis, lst est egale a ce qui suit. 
#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
