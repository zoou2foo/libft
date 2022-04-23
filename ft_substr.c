/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:20:30 by vjean             #+#    #+#             */
/*   Updated: 2022/04/23 11:45:43 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//stringa1 = (char*) malloc((n+1)*sizeof(char)); /*+1 for '\0' character */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*str;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start >= slen)
	{
		str = (char *)malloc((slen + 1) * sizeof(char));
		str[0] = '\0';
		return (str);
	}
	if (slen < len)
		str = (char *)malloc((slen + 1) * sizeof(char));
	else
		str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i] && i < len)
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}
