/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:05:52 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/16 11:45:21 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nb_len(int nb)
{
	int	c;

	if (nb == 0)
		return (1);
	c = 0;
	if (nb < 0)
		c++;
	while (nb)
	{
		nb /= 10;
		c++;
	}
	return (c);
}

static void	fill_number(char *buf, unsigned int bufsize, unsigned int nb)
{
	while (bufsize--)
	{
		buf[bufsize] = ((nb % 10) + '0');
		nb /= 10;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	char			tab[11];
	unsigned int	nblen;

	nblen = nb_len(nb);
	if (nb < 0)
	{
		*tab = '-';
		fill_number(tab + 1, nblen - 1, (unsigned int)-nb);
	}
	else
	{
		fill_number(tab, nblen, (unsigned int)nb);
	}
	write(fd, tab, nblen);
}
