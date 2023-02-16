/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:09:35 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/16 11:18:51 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*(set++) == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	allocsize;
	char	*str;

	while (is_in_set(*s, set))
		s++;
	allocsize = ft_strlen(s) + 1;
	while (allocsize > 1 && is_in_set(s[allocsize - 2], set))
		allocsize--;
	str = malloc(sizeof(char) * allocsize);
	if (!str)
		return (NULL);
	ft_memcpy(str, s, allocsize - 1);
	str[allocsize - 1] = '\0';
	return (str);
}
