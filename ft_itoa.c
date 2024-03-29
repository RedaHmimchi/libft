/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:01:48 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/09 01:34:34 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_count(int n)
{
	int	s;

	s = 1;
	if (n < 0)
	{
		s = 2;
		n *= (-1);
	}
	while (n > 9)
	{
		n = n / 10;
		s++;
	}
	return (s);
}

static char	*min_int(void)
{
	char	*ret;

	ret = malloc(12);
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, "-2147483648", 12);
	return (ret);
}

char	*ft_itoa(int n)
{
	int		s;
	char	*ret;
	int		c;
	int		x;

	x = n;
	s = len_count(n);
	c = 0;
	if (n == -2147483648)
		return (min_int());
	ret = malloc(s + 1);
	if (ret == NULL)
		return (NULL);
	if (n < 0)
		n *= (-1);
	ret[s] = '\0';
	while (c < s)
	{
		c++;
		ret[s - c] = (n % 10) + '0';
		n = n / 10;
	}
	if (x < 0)
		ret[0] = '-';
	return (ret);
}
