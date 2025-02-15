/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 23:30:09 by marvin            #+#    #+#             */
/*   Updated: 2025/01/03 17:38:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	size_t	i;
	size_t	j;

	news = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!news)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		news[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i] != '\0')
		news[j++] = s2[i++];
	news[j] = '\0';
	return (news);
}
/*
int main(void)
{
    char    *str1 = "Well_";
    char    *str2 = "hello";
    char    *news;

    news = ft_strjoin(str1, str2);
    if (news)
    {
        printf("%s\n", news);
        free(news);
    }
    else
        printf("Memory allocation failed");
    return (0);
}*/
