/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:55:04 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/04 13:27:43 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, int len)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = (char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int main()
{
	int str = 0;
	printf("string before memset : %d\n",str);
	ft_memset(&str,128,4);
    ft_memset(&str,0,3);
	printf("string after memset :  %d\n",str);
}*/

//01111111 1111111 1111111 11111111
//10000000 0000000 0000000 00000000
