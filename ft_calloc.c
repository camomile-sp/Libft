/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 18:34:09 by apavlova          #+#    #+#             */
/*   Updated: 2024/12/15 18:49:15 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	size_t	i;
	unsigned char	*ptr;

	total_size = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main(void)
{
    size_t nmemb = 2;
    size_t size = sizeof(char);

    char *ptr = (char *)ft_calloc(nmemb, size);
    
    if (!ptr)
    {
        printf("No allocated memory\n");
        return (1);
    }

    printf("Allocation memory check:\n");
    for (size_t i = 0; i < nmemb; i++)
    {
        printf("ptr[%zu] = %d\n", i, ptr[i]);
    }

    free(ptr);
    return (0);
}*/