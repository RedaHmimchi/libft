/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 00:28:39 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/06 19:37:16 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	write (fd, "\n", 1);
}

/*
#include <stdio.h>

int	main()
{
	ft_putstr_fd("REDA",1);
}*/