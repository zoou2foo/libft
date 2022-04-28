/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:13:51 by vjean             #+#    #+#             */
/*   Updated: 2022/04/21 16:01:29 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//le longint dans calloc est important. Int a argument. Long int est
// important pour gerer les long int pour les decortiquer pour pouvoir
// les afficher caractere par caractere (chiffre par chiffre). Division
// par 10, car c'est la base qu'on utilise. Temp est pour garder le 
// resultat de la conversion de int a argument. Calloc pour allouer
// a la chaine de caractere. itoa fonctionne sensiblement de la meme maniere
// que atoi. Si l'allocation n'a pas fonctionne, retour NULL. Gestion du max
// negatif integer. Ensuite, gestion des nombres negatifs puis la conversion

int	ft_longint(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	i = 0;
	if (nb < 0)
		i++;
	while (nb)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*temp;
	int		sign;

	i = ft_longint(n) - 1;
	temp = ft_calloc(ft_longint(n) + 1, sizeof(char));
	if (!temp)
		return (NULL);
	if (n == -2147483648)
		return (ft_memcpy(temp, "-2147483648", 11));
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	while (i >= 0)
	{	
		temp[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	if (sign == 1)
			temp[0] = '-';
	return (temp);
}
