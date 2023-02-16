/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:07:25 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/16 11:43:00 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		allocsize;

	if (count && (size > (SIZE_MAX / count)))
		return (NULL);
	allocsize = count * size;
	ptr = malloc(allocsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, allocsize);
	return (ptr);
}
