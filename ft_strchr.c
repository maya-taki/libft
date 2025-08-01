/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:26:56 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/07/31 17:41:16 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = ft_strlen(s);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	return ((void *) 0);
}
