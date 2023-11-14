/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgordag <bgordag@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:06:48 by bgordag           #+#    #+#             */
/*   Updated: 2023/11/14 14:31:26 by bgordag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(char *str)
{
	size_t c;

	c = 0;
	if(!str)
		return (0);
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strcpy(char *dest, char *src, int len)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (0);
}

int	ft_strchr(const char *s)
{
	if (!s)
		return (1);
	while (*s)
	{
		if (*s == '\n')
			return (0);
		s++;
	}
	return (1);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*join;
	int		len;
	int		len1;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		*s1 = '\0';
	}
	len = ft_strlen (s1);
	len1 = ft_strlen (s2);
	join = malloc((len + len1 +1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	ft_strcpy(join, s1, len);
	ft_strcpy(&join[len], s2, len1);
	free(s1);
	return(join);
}
