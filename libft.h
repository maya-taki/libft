/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:42:57 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/07/31 18:57:42 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <strings.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);

#endif
