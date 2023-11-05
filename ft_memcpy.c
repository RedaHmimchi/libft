/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:41:30 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/04 13:35:00 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int				i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
int main()
{

	char s2[] = "segfaulter tu dois";

	printf("before ft_memcpy     : %s\n",s1);
	ft_memcpy(((void *)0),s2,17);
	printf("after my ft_memcpy   : %s\n",s1);
	printf("-----------\n");

	char ss[] = "segfaulter tu dois";

	printf("before memcpy     : %s\n",s);
	char s[] = memcpy(((void *)0),ss,17);
	printf("after my memcpy   : %s\n",s);
}*/
/*
#include <stdio.h>
int main()
{
	char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
 	char *s2 = "\xff\xaa\xde\x02";
 	size_t size = 8;
 	int i1 = memcmp(s1, s2, size);
 	int i2 = ft_memcmp(s1, s2, size);

 	if (i1 == i2)
 		printf("TEST_SUCCESS");
 	printf("TEST_FAILED");
}*/