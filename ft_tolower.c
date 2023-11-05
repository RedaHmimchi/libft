/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:18:29 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/04 15:26:56 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
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
	printf("Expected return : %c\n",tolower('c'));
	printf("My Return :       %c\n",ft_tolower('c'));
	printf("-------------------------------\n");
	printf("Expected return : %c\n",tolower('D'));
	printf("My Return :       %c\n",ft_tolower('D'));
	printf("-------------------------------\n");
	printf("Expected return : %c\n",tolower('@'));
	printf("My Return :       %c\n",ft_tolower('@'));
	printf("-------------------------------\n");
	printf("Expected return : %c\n",tolower(' '));
	printf("My Return :       %c\n",ft_tolower(' '));
	printf("-------------------------------\n");
	printf("Expected return : %c\n",tolower('Q'));
	printf("My Return :       %c\n",ft_tolower('Q'));
	printf("-------------------------------\n");
}*/