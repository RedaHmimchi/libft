/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:14:01 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/02 20:55:56 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*srcs;

	dest = (unsigned char *)dst;
	srcs = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	while (len--)
		dest[len] = srcs[len];
	return (dst);
}

/*
#include <stdio.h>

int main () {
   char dest[] = "dest";
   const char src[]  = "src to dest";
   char dest1[] = "dest";
   const char src1[]  = "src to dest";
   
   printf("---------------------------------\n");
   memmove(dest, src, 2);
   printf("After memmove    dest = %s, src = %s\n", dest, src);

   printf("---------------------------------\n");
   
   ft_memmove(dest1, src1, 2);
   printf("After ft_memmove dest = %s, src = %s\n", dest1, src);
   printf("---------------------------------\n");
   return(0);
}*/