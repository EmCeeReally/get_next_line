/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yudedele <yudedele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:53:11 by yudedele          #+#    #+#             */
/*   Updated: 2025/09/04 02:57:00 by yudedele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# include <stdlib.h>

size_t	gn_strlen(const char *s);
char	*gn_strchr(const char *s, int c);
char	*gn_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
#endif