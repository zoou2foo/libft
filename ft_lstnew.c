/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:47:47 by vjean             #+#    #+#             */
/*   Updated: 2022/05/09 13:14:02 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//On créé un nouvel élément dans la liste. Le pointeur de node devient le 
//contenu du void *content. Il faut lui donner la memoire de t_list avec l'aide
//de calloc et ne pas oublier 1, pour créer une liste (min). Il faut protéger
// notre calloc (si pas de node, retourne null). Puis, on crée le lien entre
// node et le contenu qui egale au 'content'. Puis, lien entre node et next
// egale null. À la fin, il retourne la node qui est l'élément nouveau.s
#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = ft_calloc(1, sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
