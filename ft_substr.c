/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 23:19:48 by marvin            #+#    #+#             */
/*   Updated: 2024/12/15 23:19:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *subs;
    size_t  i;
    size_t  s_len;

    s_len = ft_strlen(s);
    if (start > s_len || (start + len) > s_len)
        return (NULL);//check if len > s_len
    subs = ft_calloc(len + 1, sizeof(char));
    if (!subs)
        return (NULL);
    i = 0;
    while (i < len)
    {
        subs[i] = s[start];
        i++;
        start++;
    }
    return (subs);
}
/*
int main(void)
{
    char *str = "Well hello";
    char *substr;

    substr = ft_substr(str, 8, 5);
    if (substr)
        printf("%s", substr);
    else
        printf("Memory allocation failed");
    return (0);
}*/