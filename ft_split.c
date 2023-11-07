/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:50:59 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/07 02:50:29 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**s_plit(char const *s, char c, char **ret, const char *start)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			ret[i] = ft_substr(start, 0, s - start);
			if (ret[i] == NULL)
				return (NULL);
			i++;
		}
		else
			s++;
	}
	ret[i] = NULL;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int			count;
	char		**ret;
	const char	*start;

	if (s == NULL)
		return (NULL);
	count = count_word(s, c);
	ret = malloc((count + 1) * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	return (s_plit(s, c, ret, start));
}

/*

#include <stdio.h> 

int main() 
{
    const char *str = "banana,tfa7a,dla7a";
    char c = ',';
	int i = 0;
	char **result = ft_split(str, c);

    printf("original string: %s\n", str);

    while (result[i] != NULL)
	{
        printf("%s\n",result[i]);
        i++;
    }

    i = 0;
    while (result[i] != NULL) 
	{
        free(result[i]);
        i++;
    }
    free(result);
}*/