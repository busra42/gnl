/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgordag <bgordag@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:06:09 by bgordag           #+#    #+#             */
/*   Updated: 2023/11/14 14:34:15 by bgordag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/*#include <stdio.h> */

char	*get_next_line(int fd);
char	*ft_read(int fd,  char *stash);
char	*ft_get_line(char *stash);
char	*ft_new_stash(char *stash);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(const char *s);
size_t 	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src, int len);
#endif
