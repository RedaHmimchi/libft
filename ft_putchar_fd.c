/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:59:18 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/11/08 01:02:26 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


/*#include <stdio.h>

int main()
{
    ft_putchar_fd('c',0);
    printf("\n");
}*/
/*
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int op = open("text.txt",O_RDWR);
    ft_putchar_fd('z',op);
    printf("%d\n",op);
    printf("\n");
    int o = open("ZBI.txt",O_RDWR);
    ft_putchar_fd('z',o);
    printf("%d\n",o);
   
    close(op);
    close(o);
}*/