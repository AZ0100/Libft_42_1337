/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <azourgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:54:35 by azourgan          #+#    #+#             */
/*   Updated: 2022/10/20 09:06:12 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*memo;

	if (n && size > UINT_MAX / n)
		return (0);
	memo = malloc(n * size);
	if (!memo)
		return (0);
	ft_bzero(memo, n * size);
	return (memo);
}
