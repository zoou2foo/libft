/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:21:42 by vjean             #+#    #+#             */
/*   Updated: 2022/04/22 13:34:14 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// encore une fois, fonction qui va ecrire dans un doc (file descriptor). S'il
// n'y a rien dans s. Fonction s'arrete. Tant que l'index de s n'est pas a la 
// fin, ecrire le caractere qui se trouve a l'adresse de l'index s dans le doc 
// (file descriptor). Puis, on incremente. A la fin, on ajoute un retour a la 
// a la ligne
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
