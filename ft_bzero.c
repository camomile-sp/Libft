/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:21:09 by marvin            #+#    #+#             */
/*   Updated: 2024/12/09 22:21:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = 0;
        i++;
    }
}
/*
int main(void)
{
    char str[] = "Well hello";

    ft_bzero(str + 4, 5);
    printf("Result: %s", str);
    return (0);
}*/