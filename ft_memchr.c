/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 23:43:54 by marvin            #+#    #+#             */
/*   Updated: 2025/01/08 12:10:29 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*str = "Well hello";
	char	*result;

	result = ft_memchr(s, 2 + 256, 3);
	if (result != NULL)
	    printf("%s\n", result);
	else
        {
            printf("Not found\n");
        }
	return (0);
}*/
