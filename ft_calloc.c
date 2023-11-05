/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:20:32 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/04 13:45:47 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*array;
	size_t	t;

	t = count * size;
	array = malloc(t);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, t);
	return (array);
}
/*
#include <stdio.h>
int	main()
{
	int *array;
	int i = 0;
	array = ft_calloc(10,sizeof(int));
	while (i < 10)
	{
		printf("%d\n",array[i]);
		i++;
	}
	free(array);
}*/