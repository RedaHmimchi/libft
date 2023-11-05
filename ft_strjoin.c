/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:23:38 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/04 18:20:23 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*ret;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	ret = malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ret[i] = s2[j];
		i++;
		j++;
	}
	ret[i] = '\0';
	return (ret);
}

/*
#include <stdio.h>

int	main()
{
	char	*s1;
	char	*s2;

	s1 = "Reda";
	s2 = " Hmimchi";

	printf("%s\n", ft_strjoin(s1,s2));
}*/