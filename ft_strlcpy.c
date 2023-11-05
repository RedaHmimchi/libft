/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:18:43 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/02 21:02:40 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	int		i;

	len = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while ((dstsize - 1) > 0 && src[i] != '\0')
		{
			dst[i] = src[i];
			dstsize--;
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*
#include <stdio.h>

int main() {
    char source[] = " g";
    char destination[20];

    size_t copied = strlcpy(destination, source, 14);

    printf("Copied using strlcpy: %s\n", destination);
    printf("Number of characters copied: %zu\n", copied);

	printf("-------------------------------------------\n");
	
	char source1[] = " g";
    char destination1[20];

    size_t copied1 = ft_strlcpy(destination1, source1, 14);

    printf("Copied using ft_strlcpy: %s\n", destination1);
    printf("Number of characters copied: %zu\n", copied1);

    return 0;
}*/