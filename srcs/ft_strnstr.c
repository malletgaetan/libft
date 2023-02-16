/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:08:40 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/16 12:19:55 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	eq(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	littlelen;
	size_t	i;

	if (!(len && *little))
		return ((char *)big);
	littlelen = ft_strlen(little);
	i = 0;
	while (big[i] && i < len && littlelen <= len - i)
	{
		if (eq(big + i, little, len - i))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
