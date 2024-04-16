/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: porellan <porellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:12:43 by porellan          #+#    #+#             */
/*   Updated: 2023/12/06 15:01:28 by porellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_strchr_gnl(const char *s, int n);
char	*ft_strjoin_gnl(char *s1, char const *s2);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t elem_count, size_t elem_size);
char	*read_nl(char *temp, int fd);
char	*sub_nl(char *s);
char	*delete_nl(char *line_rd);

#endif