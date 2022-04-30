/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:30:18 by vajean            #+#    #+#             */
/*   Updated: 2022/04/11 16:23:03 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction qui change les miniscules en majuscules. Gerer en int!!
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
