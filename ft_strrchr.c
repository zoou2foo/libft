/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:38:53 by vjean             #+#    #+#             */
/*   Updated: 2022/04/21 09:36:57 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//je dois commencer par la fin pour trouver la dernière occurence. Bcp plus
//facile. Moins de gossage
#include"libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
