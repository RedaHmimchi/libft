/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:18:29 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/10/31 08:48:20 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int s)
{
	if (s >= '0' && s <= '9')
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
	printf("Expected return : %d\n",isdigit('5'));
	printf("My Return : %d\n",ft_isdigit('5'));
	printf("-------------------------------\n");
	printf("Expected return : %d\n",isdigit('A'));
	printf("My Return : %d\n",ft_isdigit('A'));
	printf("-------------------------------\n");\
}*/