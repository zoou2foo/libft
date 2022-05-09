/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:10:21 by vjean             #+#    #+#             */
/*   Updated: 2022/05/09 10:21:46 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//s'il y a de quoi a lst ET del, del devient le contenu qui est pointe par lst.
//Puis, on libere la memoire. On delete ce qui se trouve a lst. Content est 
//defini dans le doc libft; dans la structure.
#include"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
