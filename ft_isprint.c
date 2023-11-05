/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:18:29 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/10/31 09:19:16 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	printf("Expected return : %d\n",isprint('c'));
	printf("My Return :       %d\n",ft_isprint('c'));
	printf("-------------------------------\n");
	printf("Expected return : %d\n",isprint('D'));
	printf("My Return :       %d\n",ft_isprint('D'));
	printf("-------------------------------\n");
	printf("Expected return : %d\n",isprint('@'));
	printf("My Return :       %d\n",ft_isprint('@'));
	printf("-------------------------------\n");
	printf("Expected return : %d\n",isprint('\t'));
	printf("My Return :       %d\n",ft_isprint('\t'));
	printf("-------------------------------\n");
	printf("Expected return : %d\n",isprint('\v'));
	printf("My Return :       %d\n",ft_isprint('\v'));
	printf("-------------------------------\n");
}*/