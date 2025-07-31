/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:26:54 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/07/29 18:19:15 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*byte_d;
	unsigned char	*byte_s;
	size_t			i;

	byte_d = (unsigned char *)dest;
	byte_s = (unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			byte_d[i] = byte_s[i];
			i++;
		}
	}	
	if (dest > src)
	{
		i = n;
		while (i-- > 0)
			byte_d[i - 1] = byte_s[i - 1];
	}
	return (dest);
}
