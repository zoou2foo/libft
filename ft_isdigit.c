/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:56:18 by vajean            #+#    #+#             */
/*   Updated: 2022/04/11 16:23:28 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// fonction verifie si le caractere est un digit ou non. Retourne 1 si c'est
// vrai. Sinon retourne 0

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
