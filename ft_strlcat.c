/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:14:20 by apavlova          #+#    #+#             */
/*   Updated: 2024/12/07 19:14:39 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_size;
	size_t	dst_size;

	if (size == 0)
		return (ft_strlen(src));
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (size <= dst_size)
		return (dst_size + src_size);
	i = 0;
	j = dst_size;
	while (j + 1 < size && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (src_size + dst_size);
}
/*
int main()
{
	char str1[10] = "Well";
	char str2[] = " Hello";
	unsigned int n;

	n = ft_strlcat(str1, str2, sizeof(str1));

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%u\n", n);
	return (0);
}*/