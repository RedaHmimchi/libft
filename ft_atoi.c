/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:43:40 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/06 04:19:27 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	int	xatoi(const char *str, long int i, long int num, long int num2)
{
	long int	nega;

	nega = 1;
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
		num2 = (num * 10);
		num = (num * 10) + (int)(str[i] - 48);
		if (nega > 0 && ((num2 / 10) != (num / 10)))
			return (-1);
		if (nega < 0 && ((num2 / 10) != (num / 10)))
			return (0);
		i++;
	}
	num *= nega;
	return (num);
}

int	ft_atoi(const char *str)
{
	long int	i;
	long int	num;
	long int	num2;

	i = 0;
	num2 = 0;
	num = 0;
	return ((int)xatoi(str, i, num, num2));
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main()
{
	printf("---------------\n");
	printf("ft_atoi :%d\n",ft_atoi("54564545645645645645645645645645645645645644564"));
	printf("atoi    :%d\n",atoi("54564545645645645645645645645645645645645644564"));
	printf("---------------\n");
	printf("---------------\n");
	printf("ft_atoi :%d\n",ft_atoi("   1235"));
	printf("atoi    :%d\n",atoi("    1235"));
	printf("---------------\n");
	printf("---------------\n");
	printf("ft_atoi :%d\n",ft_atoi("-123"));
	printf("atoi    :%d\n",atoi("-123"));
	printf("---------------\n");
	printf("---------------\n");
	printf("ft_atoi :%d\n",ft_atoi("+-+-+---1209"));
	printf("atoi    :%d\n",atoi("+-+-+---1209"));
	printf("---------------\n");
}*/