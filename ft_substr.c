/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:14:02 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/06 19:12:35 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s)) 
	{
		ret = malloc(1);
		if (ret == NULL)
			return (NULL);
		ret[0] = '\0';
		return (ret);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ret = malloc((len + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
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
	char *sub;
	unsigned int start = 0;
	size_t len = 1844674407370956;
	s = "hola";
	sub = ft_substr(s,start,len);
	printf("%s\n",sub);
	free(sub);
}*/