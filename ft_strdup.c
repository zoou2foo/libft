/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:54:08 by vajean            #+#    #+#             */
/*   Updated: 2022/05/09 11:26:00 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Duplication d'une chaine. En premier, elle alloue suffisamment de memoire
// pour copier la chaine s1. Puis, la chaine est copiee. Finalement, retourne 
// un pointeur a la chaine. NULL et ERRNO (error number) sont fixes a ENOMEM 
// (ne peut pas allouer de l'espace). Malloc sur la longueur de la chaine + 1
// pour '\0'. Si la memoire n'est pas alloue, retour NULL. Pendant qu'il y a 
// de quoi dans la chaine, copie le caractere a l'index et on incremente. 
// Puis, on ajoute '\0' a la fin.
#include"libft.h"

char	*ft_strdup(char *s1)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(ft_strlen(s1) + 1 * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
