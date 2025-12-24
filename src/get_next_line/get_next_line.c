/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <rkamkoum@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 00:02:40 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/26 18:12:26 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	line_len(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

int	free_buff(char *buffer)
{
	free(buffer);
	return (-1);
}

void	*cleanup(char **stash, char *new_line)
{
	if (stash && *stash)
	{
		free(*stash);
		*stash = NULL;
	}
	if (new_line)
		free(new_line);
	return (NULL);
}

int	add_to_stash(int fd, char **stash)
{
	char	*buffer;
	char	*temp;
	int		byte_read;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (-1);
	byte_read = 1;
	while (!ft_strchr(*stash, '\n'))
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read < 0)
			return (free_buff(buffer));
		if (byte_read == 0)
			break ;
		buffer[byte_read] = '\0';
		temp = ft_strjoin(*stash, buffer);
		if (!temp)
			return (free_buff(buffer));
		free(*stash);
		*stash = temp;
	}
	free(buffer);
	return (byte_read);
}

char	*get_next_line(int fd)
{
	char		*new_line;
	char		*old_stash;
	static char	*stash[MAX_FD];
	int			byte_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (stash[fd] == NULL)
		stash[fd] = ft_strdup("");
	byte_read = add_to_stash(fd, &stash[fd]);
	if (byte_read < 0 || (byte_read == 0 && ft_strlen(stash[fd]) == 0))
		return (cleanup(&stash[fd], NULL));
	new_line = ft_substr(stash[fd], 0, line_len(stash[fd]));
	if (!new_line)
		return (cleanup(&stash[fd], NULL));
	old_stash = stash[fd];
	if (old_stash[line_len(old_stash)] == '\0')
		stash[fd] = ft_strdup("");
	else
		stash[fd] = ft_strdup(old_stash + line_len(old_stash));
	free(old_stash);
	if (!stash[fd])
		return (cleanup(NULL, new_line));
	return (new_line);
}
