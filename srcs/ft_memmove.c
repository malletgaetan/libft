/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:09:19 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/18 06:33:02 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_rev_memcpy(void *dst, const void *src, size_t n)
{
	while (n--)
		((char *)dst)[n] = ((char *)src)[n];
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!len)
		return (dst);
	if (dst > src)
		return (ft_rev_memcpy(dst, src, len));
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	return (dst);
}
