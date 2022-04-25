/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:24:08 by vajean            #+#    #+#             */
/*   Updated: 2022/04/11 16:20:42 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// fonction verifie si le caractere est alphabetique. Elle retourne 1 si c'est
// le cas. Sinon, retourne 0.
#include<ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
