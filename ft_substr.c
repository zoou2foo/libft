/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:20:30 by vjean             #+#    #+#             */
/*   Updated: 2022/04/22 14:54:07 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//stringa1 = (char*) malloc((n+1)*sizeof(char)); /*+1 for '\0' character */

#include "libft.h"
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*str;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (slen < len)
		str = (char *)malloc((slen + 1) * sizeof(char));
	else
		str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (start >= slen)
		return (str);
	if (start > len)
	{
		*str = '\0';
		return (str);
	}
	i = -1;
	while (s[++i] && i < len)
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}

int	main()
{
	printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 400, 20));
	return (0);
}