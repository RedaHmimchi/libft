/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:25:46 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/01 20:05:51 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	if (str[i] == (unsigned char)c)
		return ((char *)(str + i));
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	printf("-------------------------------\n");
	printf("Reda Hmimchi is here (i): %s\n",strchr("Reda Hmimchi is here",'i'));
	printf("Reda Hmimchi is here (i): %s\n",ft_strchr("Reda Hmimchi is here",'i'));
	printf("-------------------------------\n");
	printf("Deeznuts eez Danzo (e):   %s\n",strchr("Deeznuts eez Danzo",'e'));
	printf("Deeznuts eez Danzo (e):   %s\n",ft_strchr("Deeznuts eez Danzo",'e'));
	printf("-------------------------------\n");
	printf("-------------------------------\n");
	printf("Deeznuts eez Danzo (e):   %s\n",strchr(" ",'e'));
	printf("Deeznuts eez Danzo (e):   %s\n",ft_strchr(" ",'e'));
	printf("-------------------------------\n");
	printf("Reda Hmimchi is here (i): %s\n",strchr("5h2 5h5kh5 5 6",'@'));
	printf("Reda Hmimchi is here (i): %s\n",ft_strchr("5h2 5h5kh5 5 6",'@'));
	printf("-------------------------------\n");
	printf("Reda Hmimchi is here (i): %s\n",strchr("",'@'));
	printf("Reda Hmimchi is here (i): %s\n",ft_strchr("",'@'));
	printf("-------------------------------\n");
}
#include <string.h>
#include <stdio.h>
int main()
{
	printf("-------------------------------\n");
	printf("Reda is here (i): %s\n",strchr("Reda is here",'\0'));
	printf("Reda is here (i): %s\n",ft_strchr("Reda is here",'\0'));
	printf("-------------------------------\n");
}*/