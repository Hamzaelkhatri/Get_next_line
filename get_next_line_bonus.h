/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <helkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 08:59:04 by helkhatr          #+#    #+#             */
/*   Updated: 2019/12/15 11:02:07 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

char	*ft_strcat(char *s1, const char *s2);
char	*ft_calloc(size_t size);
int		freez(char **as);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
int		get_next_line(const int fd, char **line);

#endif
