/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 02:10:04 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/10 22:32:23 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*hay;
	size_t		i;
	size_t		j;

	i = 0;
	hay = haystack;
	if ((hay == NULL || needle == NULL) && len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)hay);
	while (hay[i] != '\0' && len > i)
	{
		j = 0;
		while ((hay[i + j] == needle[j]) && needle[j] != '\0' && len > (i + j))
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&hay[i]);
		}
		i++;
	}
	return (NULL);
}
