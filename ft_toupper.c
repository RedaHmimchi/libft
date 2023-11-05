/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:18:29 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/10/31 09:23:05 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}

/*
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("-------------------------------\n");
	printf("Expected return : %c\n",toupper('c'));
	printf("My Return :       %c\n",ft_toupper('c'));
	printf("-------------------------------\n");
	printf("Expected return : %c\n",toupper('D'));
	printf("My Return :       %c\n",ft_toupper('D'));
	printf("-------------------------------\n");
	printf("Expected return : %c\n",toupper('@'));
	printf("My Return :       %c\n",ft_toupper('@'));
	printf("-------------------------------\n");
	printf("Expected return : %c\n",toupper(' '));
	printf("My Return :       %c\n",ft_toupper(' '));
	printf("-------------------------------\n");
	printf("Expected return : %c\n",toupper('q'));
	printf("My Return :       %c\n",ft_toupper('q'));
	printf("-------------------------------\n");
}*/