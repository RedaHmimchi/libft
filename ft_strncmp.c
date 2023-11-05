/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:22:38 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/04 14:49:15 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (s1[i] == s2[i] && i < n && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	if (n == i)
		return (0);
	return (s1[i] - s2[i]);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char a1[] = "1234";
	char a2[] = "12345";
	char b1[] = "Rerewyhi";
	char b2[] = "Re4564mchi";
	char c1[] = "أيتيويت";
	char c2[] = "ككسفكبكفب";
	char d1[] = "dsfgdf";
	char d2[] = "51915";
	char s1[] = "**";
	char s2[] = "**";
	
	printf("-------------------------------\n");
	printf("Standard Output: %d\n",strncmp(a1,a2,-1));
	printf("My Output      : %d\n",ft_strncmp(a1,a2,-1));
	printf("-------------------------------\n");
	printf("Standard Output: %d\n",strncmp(b1,b2,6));
	printf("My Output      : %d\n",ft_strncmp(b1,b2,6));
	printf("-------------------------------\n");
	printf("Standard Output: %d\n",strncmp(c1,c2,2));
	printf("My Output      : %d\n",ft_strncmp(c1,c2,2));
	printf("-------------------------------\n");
	printf("Standard Output: %d\n",strncmp(d1,d2,5));
	printf("My Output      : %d\n",ft_strncmp(d1,d2,5));
	printf("-------------------------------\n");
	printf("Standard Output: %d\n",strncmp(s1,s2,5));
	printf("My Output      : %d\n",ft_strncmp(s1,s2,5));
	printf("-------------------------------\n");
}*/