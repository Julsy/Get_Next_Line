/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 15:57:46 by iiliuk            #+#    #+#             */
/*   Updated: 2016/12/06 11:30:34 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# define BUFF_SIZE 32

typedef struct		s_lst
{
	void			*left;
	size_t			left_size;
	struct s_lst	*next;
	int				fd;
}					t_lst;

int					get_next_line(int const fd, char **line);
int					check_extra(int fd, char *buf, t_lst **head);
t_lst				*find_extra(int fd, t_lst **head);
char				*get_extra(int fd, t_lst **head);

#endif
