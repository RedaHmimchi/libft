/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:54:22 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/05 19:26:08 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	ret = malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	while (i < len)
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/*
char	rem_x(unsigned int i, char c) 
{
    if (c == 'x') 
        return (c - 88); 
    return (c);
}

#include <stdio.h>
int main() 
{
    const char *original = "1337xisxaxmoroccanxschool";
    char *result = ft_strmapi(original, rem_x);

    printf("Original string: %s\n", original);
    printf("After strmpi string: %s\n", result);

    free(result);

}*/