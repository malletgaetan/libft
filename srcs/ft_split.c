/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:08:19 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/16 11:13:23 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_nb_words(char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == (char)c)
			s++;
		while (*s && *s != (char)c)
			s++;
		count++;
	}
	return (count);
}

static char	*get_next_word(char **s, char c)
{
	char	*sptr;

	while (**s && **s == (char)c)
		(*s)++;
	if (!**s)
		return (NULL);
	sptr = *s;
	while (**s && **s != (char)c)
		(*s)++;
	return (ft_substr(sptr, 0, *s - sptr));
}

char	**ft_split(char const *s, char c)
{
	char	*ptr;
	char	**tab;
	size_t	i;
	size_t	tabsize;

	ptr = (char *)s;
	tabsize = get_nb_words((char *)s, c);
	tab = malloc(sizeof(char *) * (tabsize + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < tabsize)
		tab[i++] = get_next_word(&ptr, c);
	tab[i] = NULL;
	return (tab);
}
