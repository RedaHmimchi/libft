/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 02:10:04 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/04 15:36:09 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*find == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && len > i)
	{
		j = 0;
		while ((str[i + j] == find[j]) && find[j] != '\0' && len > (i + j))
		{
			j++;
			if (find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "aaabcabcd";
	char find[] = "abcd";
	printf("---------------------------\n");
	printf("strnstr    : %s\n",strnstr(str,find,9));
	char str1[] = "aaabcabcd";
	char find1[] = "abcd";
	printf("---------------------------\n");
	printf("ft_strnstr : %s\n",ft_strnstr(str1,find1,9));
	printf("---------------------------\n");
}*/