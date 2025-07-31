/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:26:59 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/07/29 18:21:53 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"
//#include <unistd.h>
//#include <stdio.h>

char	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_l;

	i = 0;
	src_l = ft_strlen(src);
	if (size < 0)
		return (src_l);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_l);
}

//dest[i] || src[j]
//int	main(void)
//{	
//	char buffer1[5] = "Apple";
//	const char *to_add = "Pear";
//	size_t result;

//	// Custom ft_strlcat
//	printf("before: '%s'\n", buffer1);
//	result = ft_strlcpy(buffer1, to_add, sizeof(buffer1));
//	printf("after: '%s'\n", buffer1);
//	return (0);
//}

// copies string from src to dest