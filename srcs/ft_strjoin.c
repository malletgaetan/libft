/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:08:24 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/16 11:18:14 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	allocsize;
	char	*ptr;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	allocsize = s1len + s2len + 1;
	ptr = (char *)malloc(sizeof(char) * allocsize);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, s1len);
	ft_memcpy(ptr + s1len, s2, s2len);
	*(ptr + s1len + s2len) = '\0';
	return (ptr);
}
