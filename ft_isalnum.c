/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:09:59 by vajean            #+#    #+#             */
/*   Updated: 2022/05/09 11:19:00 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// la fonction verifie si le caractere est alpha ou numerique. Si alpha ou 
// numerique, retourne 1. Sinon, retourne zero
#include"libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
