/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:59:45 by vajean            #+#    #+#             */
/*   Updated: 2022/05/09 11:19:22 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// la fonction verifie si c'est un caractere ascii. Elle retourne 1 dans le cas
// que c'est vrai. Sinon, retourne 0.
#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}
