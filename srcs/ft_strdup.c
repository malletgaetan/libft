/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:08:21 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/16 11:16:19 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	allocsize;
	char	*ptr;

	allocsize = sizeof(char) * (ft_strlen(s) + 1);
	ptr = (char *)malloc(allocsize);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, allocsize);
	return (ptr);
}
