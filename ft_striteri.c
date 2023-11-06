/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:04:55 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/05 19:57:42 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void capitalize(unsigned int i, char *str) 
{
	int j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
		j++;
	}
}
#include <stdio.h>
int main() {
    char str[] = "1337 is a Moroccan Coding School";
    printf("Original string: %s\n", str);

    ft_striteri(str, capitalize);

    printf("String after ft_striteri: %s\n", str);

}*/