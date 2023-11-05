/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:25:46 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/02 15:41:17 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	printf("-------------------------------\n");
	printf("Expected return : %lu\n",strlen("REDa hmimchi"));
	printf("My Return :       %d\n",ft_strlen("REDA hmimchi"));
	printf("-------------------------------\n");
	printf("Expected return : %lu\n",strlen("R e d @"));
	printf("My Return :       %d\n",ft_strlen("R e d @"));
	printf("-------------------------------\n");
	printf("Expected return : %lu\n",strlen(""));
	printf("My Return :       %d\n",ft_strlen(""));
	printf("-------------------------------\n");
	printf("Expected return : %lu\n",strlen("     "));
	printf("My Return :       %d\n",ft_strlen("     "));
	printf("-------------------------------\n");
	printf("Expected return : %lu\n",strlen("is \t lol"));
	printf("My Return :       %d\n",ft_strlen("is \t lol"));
	printf("-------------------------------\n");
}*/