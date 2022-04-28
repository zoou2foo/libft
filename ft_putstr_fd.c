/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:16:56 by vjean             #+#    #+#             */
/*   Updated: 2022/04/22 13:39:36 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction qui ecrit dans un file descriptor (doc). Meme principe que putstr.
// Ecrit une chaine de caractere.
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
