/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 09:55:32 by shirama           #+#    #+#             */
/*   Updated: 2020/11/12 17:03:50 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *)s;
	c = (unsigned char)c;
	while (n--)
	{
		if (*src == c)
			return ((void *)src);
		src++;
	}
	return (NULL);
}

/*
**int		main(void)
**{
**	char	a[] = "Hello";
**
**	printf("%s\n", ft_memchr(a, 'o', sizeof(a)));
**	return (0);
**}
*/
