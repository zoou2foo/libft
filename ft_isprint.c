/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:12:06 by vajean            #+#    #+#             */
/*   Updated: 2022/04/11 16:21:40 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// fonction verifie si le caractere est imprimable ou non. Retourne 1 si c'est
// vrai. Sinon retourne 0

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}
