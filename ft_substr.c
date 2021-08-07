/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:22:17 by shirama           #+#    #+#             */
/*   Updated: 2021/08/07 18:06:51 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	j;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = start;
	if (i >= ft_strlen(s))
		return ((char *)calloc(1, sizeof(char)));
	j = 0;
	while (s[i++] != '\0' && j < len)
		j++;
	p = (char *)malloc(j * sizeof(char) + 1);
	if (!p)
		return (NULL);
	j = 0;
	while (s[start] != '\0' && j < len)
		p[j++] = s[start++];
	p[j] = '\0';
	return (p);
}
