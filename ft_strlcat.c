/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:26:58 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/07/29 17:47:55 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"
//#include <unistd.h>
//#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_l;
	size_t	src_l;
	size_t	i;

	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	if (dest_l >= size)
		return (src_l + size);
	i = 0;
	while (src[i] && (dest_l + i < size - 1))
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	dest[dest_l + i] = '\0';
	return (dest[dest_l] + src[src_l]);
}

//int	main(void)
//{
//	char buffer1[20] = "Hello";
//	char buffer2[20] = "Hello";
//	const char *to_add = ", world!";
//	size_t result;

//	// Custom ft_strlcat
//	result = ft_strlcat(buffer1, to_add, sizeof(buffer1));
//	printf("ft_strlcat result: %zu\n", result);
//	printf("After ft_strlcat: '%s'\n", buffer1);

//	// Edge case: small buffer
//	char buffer3[8] = "Hey";
//	result = ft_strlcat(buffer3, " you", sizeof(buffer3));
//	printf("\nEdge case - small buffer:\n");
//	printf("ft_strlcat result: %zu\n", result);
//	printf("Buffer3: '%s'\n", buffer3);

//	return 0;
//}
// dest, src
// dest_l needs to accomodate dest & src
// size = the whole thing
