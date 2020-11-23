/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:11:31 by shirama           #+#    #+#             */
/*   Updated: 2020/11/14 16:15:54 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	int		i;

	i = 0;
	p = (void *)malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

/*
**int		main(void)
**{
**	char	*a;
**	char	*b;
**
**	a = (char *)calloc(10, sizeof(char));
**	b = (char *)ft_calloc(10, sizeof(char));
**	printf("cmp:%d\n", memcmp(a, b, 10));
**	return (0);
**}
*/
