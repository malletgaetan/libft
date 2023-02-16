/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:08:45 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/16 11:14:21 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t max)
{
	size_t	c;

	c = 0;
	while (s[c] && max--)
		c++;
	return (c);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	allocsize;
	size_t	i;
	char	*ptr;

	i = 0;
	while (s[i] && i < start)
		i++;
	if (s[i] == '\0')
		allocsize = 1;
	else
		allocsize = ft_strnlen(s + i, len) + 1;
	ptr = (char *)malloc(sizeof(char) * allocsize);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + i, allocsize);
	return (ptr);
}
