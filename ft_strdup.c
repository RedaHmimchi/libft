/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:03:17 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/07 21:07:31 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen(s1);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
#include <stdio.h>
int main() {
	const char *original = "Test string for duplication";
	char *duplicate;

	duplicate = ft_strdup(original);

	if (duplicate == NULL) 
		printf("memory allocation failed.\n");

	printf("Original string: %s\n", original);
	printf("Duplicated string: %s\n", duplicate);

	free(duplicate);

	return 0;
}*/