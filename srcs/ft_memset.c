/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:08:04 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/18 06:33:39 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*ptr;

	ptr = b;
	while (len--)
		*(unsigned char *)(ptr++) = (unsigned char)c;
	return (b);
}
