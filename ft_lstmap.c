/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:26:21 by vjean             #+#    #+#             */
/*   Updated: 2022/05/09 13:38:36 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//On crée une variable newlst pour représenter une nouvelle liste. S'il n'y a 
//rien dans lst, on retourne NULL (protection). Newlst égale ft_lstnew de la 
//fonction f de lst lié à content. Puis, lst égale au lien de lst à next.
//Pendant qu'il y a de quoi dans lst, ft_lstadd_back de ce qui a à l'adresse
//de newlst et ft_lstnew de f de lst lié à content. On fait la fonction de add
//back(à l'adresse de newlst + lstnew(de f(lst lié à content))); le résultat
//de ça sera mis à la fin. Si le dernier élément de la nouvelle liste est égale
// à null, on fait la fonction clear à l'adresse de la nouvelle liste + le
//pointeur de del (pour 'nettoyer'; vider), puis on retourne NULL. Quand on 
//sort de la boucle 'if', on avance dans la liste. À la fin, on retourne 
//newlst
#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	if (!lst)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&newlst, ft_lstnew(f(lst->content)));
		if (ft_lstlast(newlst) == NULL)
		{
			ft_lstclear(&newlst, *del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (newlst);
}
