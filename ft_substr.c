/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:14:02 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/04 17:13:07 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	i = 0;
	ret = malloc((len + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	if (start > ft_strlen(s)) 
	{
		free(ret);
		ret = malloc(1);
		ret[0] = '\0';
		return (ret);
	}
	while (s[start] != '\0' && i < len)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}

/*
#include <stdio.h>

int	 main()

{
	const char	*s;
	unsigned int start = 10;
	size_t len = 10;
	sub = ft_substr(s,start,len);
	s = "01234";
	printf("%s\n",sub);
	free(sub);
}*/