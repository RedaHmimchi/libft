/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:18:29 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/10/31 08:48:25 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int s)
{
	if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
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
	printf("Expected return : %d\n",isalpha('5'));
	printf("My Return : %d\n",ft_isalpha('5'));
	printf("-------------------------------\n");
	printf("Expected return : %d\n",isalpha('A'));
	printf("My Return : %d\n",ft_isalpha('A'));
	printf("-------------------------------\n");
	printf("Expected return : %d\n",isalpha('x'));
	printf("My Return : %d\n",ft_isalpha('x'));
	printf("-------------------------------\n");
}*/