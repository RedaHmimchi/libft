/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:20:32 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/06 22:22:50 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	array = malloc(count * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, count * size);
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
