/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <azourgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:59:52 by azourgan          #+#    #+#             */
/*   Updated: 2022/10/20 08:59:53 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*s;
	size_t	i;

	if (str == NULL)
		return (0);
	s = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (s == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		s[i] = f(i, str[i]);
		i++;
	}
	s[i] = '\0';
	return (s);
}
