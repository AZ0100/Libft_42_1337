/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <azourgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:54:03 by azourgan          #+#    #+#             */
/*   Updated: 2022/11/05 08:40:34 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(int sign)
{
	if (sign < 0)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	unsigned long long	n;
	int					sign;
	int					i;

	i = 0;
	sign = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - 48);
		i++;
		if (n > 9223372036854775807)
			return (ft_sign(sign));
	}
	return (n * sign);
}
