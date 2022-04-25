/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:19:16 by vjean             #+#    #+#             */
/*   Updated: 2022/04/22 15:39:42 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
// argument to int. J'ai besoin de 3 variables. Une pour contenirr le resultat
// final, une pour aider a gerer les negatifs et un index. 1. Pendant qu'a 
// l'index i dans la str est plus grand ou egal a 9 ET plus petit ou egal a 13
//  OU l'index i dans str est vide, on incremente i (on avance dans la chaine)
// 2. le 1er if gere s'il y a 2 signes consecutifs (+-) de sortir du programme
// 3. le 2e if, cela gere les nombres positifs ou negatifs. Si positif, on
// incremente (avance dans la chaine). Si negatif, sign devient -1. 3. 2e 
// boucle while si l'index i de la chaine est plus grand ou egal a 0 ET plus 
// petit ou egal a 9. Pour gerer les nombres entiers. Operation de la magie:
// La variable res est egal a (res * 10), car on travaille en base de 10.
// plus la position de l'index dans la chaine moins 0 ou 48 (ascii); et 
// incremente. Quand while n'est plus vrai, on sort. Puis, retourne res * 
// sign pour le resultat final.

int	ft_atoi(const char *str)
{
	long	res;
	int		i;
	int		sign;

	res = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if ((str[i] == '-' || str[i] == '+')
		&& (str[i + 1] == '-' || str[i + 1] == '+'))
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
