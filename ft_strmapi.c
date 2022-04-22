/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 08:41:53 by vjean             #+#    #+#             */
/*   Updated: 2022/04/22 14:29:33 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
//l'ordi doit lire le prototype. Regarder les arguments donnés, puis vois qui
//call une fonction, alors probablement saute voir ce que demande la fonction 
//avant d'aller faire le reste de strmapi. On fait une strdup pour avoir une
//copie sécurisée 

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*temp;

	if (!s)
		return (NULL);
	temp = ft_strdup((char *)s);
	if (!temp)
		return (NULL);
	i = 0;
	while (temp[i])
	{
		temp[i] = f(i, temp[i]);
		i++;
	}
	return (temp);
}
