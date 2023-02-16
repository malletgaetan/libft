/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:08:25 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/16 11:08:26 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsti;
	size_t	srci;

	if (dstsize == 0)
		return (ft_strlen(src));
	dsti = 0;
	srci = 0;
	while (dst[dsti] && dsti < dstsize)
		dsti++;
	while (src[srci] && (dsti + srci) < (dstsize - 1))
	{
		dst[dsti + srci] = src[srci];
		srci++;
	}
	if ((dsti + srci) < dstsize)
		dst[dsti + srci] = '\0';
	while (src[srci])
		srci++;
	return (dsti + srci);
}
