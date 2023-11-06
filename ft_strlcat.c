/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:14:39 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/06 00:36:10 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (dstsize == 0)
		return (len_s);
	while ((i + len_d) < (dstsize - 1) && src[i] != '\0')
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	if (dstsize < len_d)
		return (len_s + dstsize);
	return (len_d + len_s);
}

/*
#include <stdio.h>

int main() {
	char destination[15] = "reda ";
	char source[] = "abcd";

	size_t concatenated = strlcat(destination, source, 0);
	printf("****************************\n");
	
	printf("Concatenated using strlcat: %s\n", destination);
	printf("Total length of concatenated string: %zu\n", concatenated);
	
	printf("****************************\n");
	char destination1[15] = "reda ";
	char source1[] = "abcd";

	size_t concatenated1 = ft_strlcat(destination1, source1, 0);

	printf("Concatenated using ft_strlcat: %s\n", destination1);
	printf("Total length of concatenated string: %zu\n", concatenated1);
	printf("****************************\n");
}*/