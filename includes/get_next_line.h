/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmallet <gmallet@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 01:04:31 by gmallet           #+#    #+#             */
/*   Updated: 2023/05/07 18:24:14 by gmallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif

# ifndef MAX_OPENED_FD
#  define MAX_OPENED_FD 1000
# endif

typedef struct s_string
{
	char	*str;
	size_t	len;
}	t_string;

typedef struct s_file
{
	char	*buf;
	int		eof;
	size_t	len;
	size_t	offset;
}	t_file;

t_file	*init_file_struct(void);
char	*get_next_line(int fd);
int		gnl_ljoin(t_string *line, char *buf, size_t len);
int		set_endline(size_t	*nl, t_file *file);

#endif
