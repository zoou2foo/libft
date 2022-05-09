/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:45:00 by vjean             #+#    #+#             */
/*   Updated: 2022/05/09 14:08:04 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonction qui split une chaine en deux a partir du delimiteur (char c). Cree
// un tableau 2D pour chaque nouvelle chaine creee selon le delimiteur. On a 
// donc besoin d'un compteur de mots pour les placer ensuite dans notre tableau
// 2D (pas sur a verifier). 
#include"libft.h"
//pourquoi il faut signifier le type de variable pour le sizeof? int et char
// pas la meme valeur
//Quand calloc demain un size_t count...

static int	ft_count_word(char const *s, char limite)
{
	int	words;

	words = 0;
	while (*s)
	{
		while (*s == limite)
			s++;
		if (*s != limite && *s)
			words++;
		while (*s != limite && *s)
			s++;
	}
	return (words);
}

char	**ft_split(char *s, char c)
{
	char	**tab;
	int		words;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	words = ft_count_word(s, c);
	tab = ft_calloc(sizeof(char *), (words + 1));
	i = -1;
	if (!tab)
		return (NULL);
	while (++i < words)
	{
		while (*s && *s == c)
			s++;
		if (ft_strchr(s, c))
			len = ft_strchr(s, c) - s;
		else
			len = ft_strlen(s);
		tab[i] = ft_substr(s, 0, len);
		s += len;
	}
	return (tab);
}
