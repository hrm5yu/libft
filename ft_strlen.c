/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:18:31 by shirama           #+#    #+#             */
/*   Updated: 2021/08/07 07:31:11 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
**int		main(void)
**{
**	char	p[] = "hello";
**
**	puts("-----original-----");
**	printf("%lu\n", strlen(p));
**	puts("--------ft--------");
**	printf("%lu\n", ft_strlen(p));
**	puts("-----original-----");
**	printf("%lu\n", strlen(""));
**	puts("--------ft--------");
**	printf("%lu\n", ft_strlen(""));
**	puts("-----original-----");
**	printf("%lu\n", strlen(NULL));
**	puts("--------ft--------");
**	printf("%lu\n", ft_strlen(NULL));
**	return (0);
**}
*/
