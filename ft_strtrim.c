/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:48:02 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/05 01:54:42 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	size;
	size_t	j;
	char	*trimmed;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	j = 0;
	end = ft_strlen(s1) - 1;
	while (check(s1[start], set) != 0)
		start++;
	while (end >= start && check(s1[end], set) != 0)
		end--;
	size = end - start + 1;
	trimmed = (char *)malloc(size + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, (end - start) + 2);
	return (trimmed);
}

/*
#include <stdio.h>

int    main()
{
    char    *s1;
    char    *s2;

    s1 = "";
    s2 = "";

    printf("%s", ft_strtrim(s1,s2));
}*/

/*
char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		size;
	int		j;
	char	*trimmed;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	j = 0;
	end = ft_strlen(s1) - 1;
	while (check(s1[start], set) != 0)
		start++;
	while (check(s1[end], set) != 0 && end >= start)
		end--;
	size = end - start + 1;
	trimmed = (char *)malloc(size + 1);
	if (trimmed == NULL)
		return (NULL);
	while (start <= end)
	{
		trimmed[j] = s1[start];
		j++;
		start++;
	}
	trimmed[j] = '\0';
	return (trimmed);
}
*/