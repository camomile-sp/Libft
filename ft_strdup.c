/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 21:07:55 by marvin            #+#    #+#             */
/*   Updated: 2024/12/14 21:07:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	new_s = malloc(i + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
/*
int main(void)
{
    char *str = "Well hello";
    char *copy = ft_strdup(str);

    if (copy)
    {
        printf("%s", copy);
        free (copy);
    }
    else
    {
        printf("Memory allocation failed");
    }
    return (0);
}*/
