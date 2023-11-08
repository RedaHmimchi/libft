/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:23:38 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/07 15:35:32 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*str_join(char const *s1, char const *s2, char	*ret)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*ret;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	ret = malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	return (str_join(s1, s2, ret));
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