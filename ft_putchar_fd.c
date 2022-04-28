/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:59:36 by vjean             #+#    #+#             */
/*   Updated: 2022/04/22 11:16:34 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction pour ecrire un caractere dans le file descriptor. Fonction que tu
// ajoutes a un programme qui ouvrirait un doc puis que tu veux que le prog
// ecrit de quoi dans le doc. Fonctionne comme putchar.
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
