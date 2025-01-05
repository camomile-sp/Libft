/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 23:18:56 by marvin            #+#    #+#             */
/*   Updated: 2024/12/21 23:18:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_count_s(const char *s, char c)
{
    size_t  i;
    size_t  count;

    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != '\0')
        {
            count++;
            while (s[i] != c && s[i] != '\0')
                i++;
        }
    }
    return (count);
}

size_t  ft_subs_len(const char *s, char c, size_t start)
{
    size_t  end;

    end = start;
    while (s[end] && s[end] != c)
        end++;
    return (end - start);
}

char    **ft_split(char const *s, char c)
{
    size_t  i;
    size_t  j;
    size_t  jump;
    char    **arr;

    i = 0;
    if (!s)
        return (NULL);
    arr = ft_calloc((ft_count_s(s, c) + 1), sizeof(char *));
    if (!arr)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (!s[i])
            break;
        jump = ft_subs_len(s, c, i);
        arr[j] = ft_substr(s, i, jump);
        j++;
        i += jump;
    }
    return (arr);
}

int main(void)
{
    char    *str = "-first---second-third forth-";
//    char *str = "";
//    char *str = "----";
//    char *str = "first second third forth";
//    char *str = "-";
//    char *str = "-first-";
//    char    *str = NULL;
    char    c = '-';
    char    **arr;
    int i;

    arr = ft_split(str, c);
    if (arr)
    {
        i = 0;
        while (arr[i] != NULL)
        {
            printf("|%s|\n", arr[i]);
            i++;
        }
        printf("|%s|\n", arr[i]);
    }
    else
        printf("Memory allocation failed\n");
    return (0);
}