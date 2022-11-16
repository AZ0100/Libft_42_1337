/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <azourgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:57:40 by azourgan          #+#    #+#             */
/*   Updated: 2022/10/20 08:57:51 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (str == NULL)
		return ;
	i = 0;
	while (str[i])
	{
		f(i, &str[i]);
		i++;
	}
}
