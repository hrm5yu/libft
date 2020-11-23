/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:37:45 by shirama           #+#    #+#             */
/*   Updated: 2020/11/18 17:17:35 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	n;
	size_t	s2len;

	i = 0;
	s2len = ft_strlen(needle);
	n = len;
	if (s2len == 0 && len == 0)
		return ((char *)haystack);
	while (haystack != NULL && haystack[i] != '\0' && len && i + s2len <= n)
	{
		if (ft_strncmp(haystack + i, needle, s2len) == 0)
			return ((char *)(haystack + i));
		i++;
		len--;
	}
	return (NULL);
}

/*
**int		main(void)
**{
**	char	a[] = "1234567890";
**
**	printf("\nhaystack:%s\n", a);
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%lu\n",
**	strnstr(a, "567", sizeof(a)), "567", sizeof(a));
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%lu\n",
**	ft_strnstr(a, "567", sizeof(a)), "567", sizeof(a));
**	printf("\nhaystack:%s\n", a);
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%lu\n",
**	strnstr(a, "abc", sizeof(a)), "abc", sizeof(a));
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%lu\n",
**	ft_strnstr(a, "abc", sizeof(a)), "abc", sizeof(a));
**	printf("\nhaystack:%s\n", a);
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	strnstr(a, "567", 0), "567", 0);
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	ft_strnstr(a, "567", 0), "567", 0);
**	printf("\nhaystack:%s\n", "NULL");
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	strnstr(NULL, "567", 0), "567", 0);
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	strnstr(NULL, "567", 0), "567", 0);
**	printf("\nhaystack:%s\n", "NULL");
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	strnstr(NULL, NULL, 0), "NULL", 0);
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	ft_strnstr(NULL, NULL, 0), "NULL", 0);
**	printf("\nhaystack:%s\n", a);
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%lu\n",
**	strnstr(a, NULL, sizeof(a)), "NULL", sizeof(a));
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%lu\n",
**	ft_strnstr(a, NULL, sizeof(a)), "NULL", sizeof(a));
**	return (0);
**}
*/
