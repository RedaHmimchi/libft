/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:25:46 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/01 00:46:25 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, char c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return ((char *)(str + i));
		}
		i--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	printf("-------------------------------\n");
	printf("Reda Hmimchi is here (i): %s\n",strrchr("Reda Hmimchi is here",'i'));
	printf("Reda Hmimchi is here (i): %s\n",ft_strrchr("Reda Hmimchi is here",'i'));
	printf("-------------------------------\n");
	printf("Deeznuts eez Danzo (e):   %s\n",strrchr("Deeznuts eez Danzo",'e'));
	printf("Deeznuts eez Danzo (e):   %s\n",ft_strrchr("Deeznuts eez Danzo",'e'));
	printf("-------------------------------\n");
	printf("-------------------------------\n");
	printf("Deeznuts eez Danzo (e):   %s\n",strrchr(" ",'e'));
	printf("Deeznuts eez Danzo (e):   %s\n",ft_strrchr(" ",'e'));
	printf("-------------------------------\n");
	printf("Reda Hmimchi is here (i): %s\n",strrchr("5h2 5h5kh5 5 6",'@'));
	printf("Reda Hmimchi is here (i): %s\n",ft_strrchr("5h2 5h5kh5 5 6",'@'));
	printf("-------------------------------\n");
	printf("Reda Hmimchi is here (i): %s\n",strrchr("",'@'));
	printf("Reda Hmimchi is here (i): %s\n",ft_strrchr("",'@'));
	printf("-------------------------------\n");
}*/