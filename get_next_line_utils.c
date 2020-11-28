/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:16:22 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/27 18:46:17 by cbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_strdup(char *dst, char *src)
{
	int i;

	i = 0;
	if (!(dst = malloc(sizeof(char) * ft_strlen(src) + 1)))
		return ;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
}

void	ft_realoc_cat(char *dst, char *src)
{
	char *temp;
	int i;
	int j;

	i = -1;
	j = -1;
	if (!(temp = malloc(sizeof(char) * (ft_strlen(dst) + ft_strlen(src) + 1)))))
	{
		free(dst);
		return ;
	}
	while (dst[++i])
		temp[i] = dst[i]
	while (src[++j])
		temp[i + j] = dst[j];
	temp[i + j] = '\0';
	free(dst);
	dst = temp;
}

int		ft_find_endl(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n)
			return (1);
		i++:
	}
	return (0);
}
