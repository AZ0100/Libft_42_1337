/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <azourgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:00:29 by azourgan          #+#    #+#             */
/*   Updated: 2022/10/20 09:01:02 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strin(char const *str, const char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (s1 == NULL || set == NULL)
		return (0);
	while (s1[i] != '\0' && ft_strin(set, s1[i]))
		i++;
	while (j >= 0 && ft_strin(set, s1[j]))
		j--;
	if (j == -1)
	{
		str = ft_substr(s1, i, 0);
		return (str);
	}
	str = ft_substr(s1, i, (j - i + 1));
	return (str);
}
