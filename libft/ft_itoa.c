/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <azourgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:55:11 by azourgan          #+#    #+#             */
/*   Updated: 2022/10/20 08:55:12 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(long nbr)
{
	size_t	size;

	size = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		size++;
	}
	if (nbr == 0)
		size++;
	while (nbr > 0)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	nbr;
	int		i;

	nbr = n;
	i = ft_nbrlen(n);
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (0);
	s[i--] = '\0';
	if (nbr == 0)
		s[0] = '0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		s[i--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (s);
}
