/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaurai <cbeaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 22:01:51 by cbeaurai          #+#    #+#             */
/*   Updated: 2020/11/28 01:56:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_return(int read_bytes, char *str, char **line)
{
	if (read_bytes < 0)
		return (-1);
	else if (read_bytes == 0 && *str == NULL)
	{
		ft_strdup(*line, "");
		if (*line == NULL)
			return (-1);
		return (0);
	}
	/*if (solve(str, line) == -1)
		return (-1);
	if (*str == NULL)
		return (0);*/
	return (solve(str, line));
}

int		solve(char *str, char **line)
{
	int size;
	int i;
	int temp;

	i = count_endl(str);
	temp = i;
	while (i--)
	{
		cmpt = -1;
		size = 0;
		while (str[size] && str[size] != '\n')
			size++;
		if (!(*line = malloc(sizeof(char) * size + 1)))
			return (-1);
		strcat(str, line); //doit line++
		if (str[size] == '\n')
			save_next(str, cmpt);//free str ici
	}
	if (temp == 0)
		return (0);
	return (1);
}
int		get_next_line(int fd, char **line)
{
	int			read_bytes;
	static char	*str;
	char		buff[BUFFER_SIZE + 1];

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	while (read_bytes = read(fd, buff, BUFFER_SIZE > 0))
	{
		buff[BUFFER_SIZE] = '\0';
		if (str == NULL)
			ft_strdup(str, buff);
		else
		{
			ft_realoc_cat(str, buff)
			if (str == NULL)
				return (-1);
		}
		if (ft_find_endl(str))
			break ;
	}
	return (ft_return(read_bytes, str, line));
}
