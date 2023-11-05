/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:43:40 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/04 15:26:15 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	nega;
	int	num;

	num = 0;
	nega = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || 
		str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nega *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (int)(str[i] - 48);
		i++;
	}
	num *= nega;
	return (num);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main()
{
	printf("---------------\n");
	printf("ft_atoi :%d\n",ft_atoi("-1000043"));
	printf("atoi    :%d\n",atoi("-1000043"));
	printf("---------------\n");
	printf("---------------\n");
	printf("ft_atoi :%d\n",ft_atoi("+000000000000000000123"));
	printf("atoi    :%d\n",atoi("+000000000000000000123"));
	printf("---------------\n");
	printf("---------------\n");
	printf("ft_atoi :%d\n",ft_atoi("-+123"));
	printf("atoi    :%d\n",atoi("-+123"));
	printf("---------------\n");
	printf("---------------\n");
	printf("ft_atoi :%d\n",ft_atoi("+-+-+---1209"));
	printf("atoi    :%d\n",atoi("+-+-+---1209"));
	printf("---------------\n");
}*/