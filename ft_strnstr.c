/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:27:04 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/07/31 14:19:45 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	
	i = 0;
	j = 0;

	if (*little == '\0')
	{
		return (big);
	}
	
	while (i < len)
	{
		while (i == j)
		{
			if (i != j)
			{
				i += 1;
				j = 0;
			}
			if (little == *big)
				return (*big);
			i++;
			j++;
		}
		return ((void *)0);
	}
	
	return (0);
}
