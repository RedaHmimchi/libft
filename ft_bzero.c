/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:30:12 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/03 18:55:36 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (n > 0)
	{
		str[i] = 0;
		n--;
		i++;
	}
}
/*
#include <stdio.h>
#include <strings.h>

int main() {
	char str1[5] = {5,2,6,8,7};
	char str2[] = "Hello, World!";

	printf("Before bzero(): %d\n", str1[4]);
	ft_bzero(str1, ft_strlen(str1));
	printf("After bzero(): %d\n", str1[4]);

	return 0;
}*/
