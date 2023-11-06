/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:25:46 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/05 14:25:33 by rhmimchi         ###   ########.fr       */
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
	printf("Expected return : %zu\n",strlen("   heloo   "));
	printf("My Return :       %zu\n",ft_strlen("   heloo   "));
	printf("-------------------------------\n");
	printf("Expected return : %zu\n",strlen("R e d @"));
	printf("My Return :       %zu\n",ft_strlen("R e d @"));
	printf("-------------------------------\n");
	printf("Expected return : %zu\n",strlen(""));
	printf("My Return :       %zu\n",ft_strlen(""));
	printf("-------------------------------\n");
	printf("Expected return : %zu\n",strlen("     "));
	printf("My Return :       %zu\n",ft_strlen("     "));
	printf("-------------------------------\n");
	printf("Expected return : %zu\n",strlen("is \t lol"));
	printf("My Return :       %zu\n",ft_strlen("is \t lol"));
	printf("-------------------------------\n");
}*/