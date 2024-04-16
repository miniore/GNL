/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: porellan <porellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:12:40 by porellan          #+#    #+#             */
/*   Updated: 2023/12/12 17:31:30 by porellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_gnl(char *s1, char const *s2)
{
	char	*new_str;
	size_t	new_str_len;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	new_str_len = ft_strlen(s1) + ft_strlen(s2);
	new_str = ft_calloc(new_str_len + 1, 1);
	if (new_str == NULL)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	return (new_str);
}

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	unsigned char	*ptr;
// 	size_t			i;

// 	ptr = (unsigned char *)s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		ptr[i] = (unsigned char)c;
// 		i++;
// 	}
// 	return (s);
// }

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

void	*ft_calloc(size_t elem_count, size_t elem_size)
{
	size_t	total_size;
	void	*memory_block;

	total_size = elem_count * elem_size;
	if (elem_count != '\0' && total_size / elem_count != elem_size)
		return (0);
	memory_block = malloc(total_size);
	if (!memory_block)
		return (0);
	if (memory_block != (void *)0)
		ft_memset(memory_block, 0, total_size);
	return (memory_block);
}

char	*ft_strchr_gnl(const char *s, int n)
{
	int		i;
	char	c;
	char	*str;

	if (!s || !n)
		return (NULL);
	i = 0;
	c = (char)n;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (str[i] != c)
		return (NULL);
	return (&str[i]);
}
// Recursividad caso ejemplo
size_t	ft_strlen(const char *sOri)
{
	if (*sOri != '\0')
		return (ft_strlen(sOri + 1) + 1);
	return (0);
}