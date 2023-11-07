/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:36:16 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/06 19:37:11 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return ;
	while (i < ft_strlen(s))
	{
		write (fd, &s[i], 1);
		i++;
	}
}

/*
#include <stdio.h>

int	main()
{
	ft_putstr_fd("REDA",1);
	printf("\n");
}*/