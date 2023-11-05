/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:18:29 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/10/31 22:14:26 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int s)
{
	if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
		return (1);
	else if ((s >= '0' && s <= '9'))
		return (1);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("-------------------------------\n");
	printf("Expected return : %d\n",isalnum('5'));
	printf("My Return : %d\n",ft_isalnum('5'));
	printf("-------------------------------\n");
	printf("Expected return : %d\n",isalnum('A'));
	printf("My Return : %d\n",ft_isalnum('A'));
	printf("-------------------------------\n");
	printf("Expected return : %d\n",isalnum('x'));
	printf("My Return : %d\n",ft_isalnum('x'));
	printf("-------------------------------\n");
}*/