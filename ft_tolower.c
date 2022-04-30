/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:36:33 by vajean            #+#    #+#             */
/*   Updated: 2022/04/11 16:22:49 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction qui chance les caracteres en miniscule (gerer en int toutefois!)
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
