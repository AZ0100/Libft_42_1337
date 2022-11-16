/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <azourgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:56:38 by azourgan          #+#    #+#             */
/*   Updated: 2022/10/20 09:03:39 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_arrsize(const char *str, char c)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '0' && str[i] == c)
			i++;
		if (str[i] != '\0')
			size++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (size);
}

static int	ft_slen(const char *str, char c)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (str[i] != '\0' && str[i] == c)
		i++;
	while (str[i] != '\0' && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	*ft_str(const char *str, char c)
{
	char	*s;
	int		i;
	int		n;

	i = 0;
	n = ft_slen(str, c);
	s = malloc(sizeof(char) * (n + 1));
	if (s == NULL)
		return (0);
	while (i < n)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char const *str, char c)
{
	char	**arr;
	int		i;

	i = 0;
	if (str == NULL)
		return (0);
	arr = malloc(sizeof(char *) * (ft_arrsize(str, c) + 1));
	if (arr == NULL)
		return (0);
	while (*str != '\0')
	{
		while (*str != '\0' && *str == c)
			str++;
		if (*str != '\0')
		{
			arr[i] = ft_str(str, c);
			i++;
		}
		while (*str != '\0' && *str != c)
			str++;
	}
	arr[i] = 0;
	return (arr);
}
