/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 01:34:47 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/04 15:03:43 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((unsigned char *)(&str[i]));
		}
		i++;
		n--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	printf("before memchr() : \n");
	char *fin = memchr("Hello World", -1976, 1);
	printf("String after memchr() : %s\n", fin);

	printf("before memchr() : \n");
	char *fin1 = ft_memchr("Hello World", -1976, 1);
	printf("after memchr() : %s\n", fin1);
}*/