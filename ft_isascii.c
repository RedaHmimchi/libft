/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascii.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:18:29 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/10/31 09:22:04 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int s)
{
	if (s >= 0 && s <= 127)
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
	printf("Expected return : %d\n",isascii('5'));
	printf("My Return : %d\n",ft_isascii('5'));
	printf("-------------------------------\n");
	printf("Expected return : %d\n",isascii('A'));
	printf("My Return : %d\n",ft_isascii('A'));
	printf("-------------------------------\n");\
	printf("Expected return '©' : %d\n",isascii(0xC2));
	printf("My Return '©' : %d\n",ft_isascii(0xC2));
	printf("-------------------------------\n");\
}*/