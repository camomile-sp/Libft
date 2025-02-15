/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlova <apavlova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:37:46 by apavlova          #+#    #+#             */
/*   Updated: 2025/01/11 19:13:02 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_empty_string(void)
{
	char	*trims;

	trims = malloc(1);
	if (!trims)
		return (NULL);
	trims[0] = '\0';
	return (trims);
}

static int	ft_is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trims;
	size_t	i;
	size_t	trim_start;
	size_t	trim_end;

	if (!s1 || !set)
		return (NULL);
	trim_start = 0;
	while (s1[trim_start] && ft_is_in_set(s1[trim_start], set))
		trim_start++;
	trim_end = ft_strlen(s1);
	if (trim_end > 0)
		trim_end--;
	while (trim_end >= trim_start && ft_is_in_set(s1[trim_end], set))
		trim_end--;
	if (trim_end < trim_start)
		return (allocate_empty_string());
	trims = malloc(trim_end - trim_start + 2);
	if (!trims)
		return (NULL);
	i = 0;
	while (trim_start <= trim_end)
		trims[i++] = s1[trim_start++];
	trims[i] = '\0';
	return (trims);
}
/*
int	main(void)
{
	char *s1 = "123Well hello31";
	char *s2 = "213";
	char *trims;

	trims = ft_strtrim(s1, s2);
	if (trims)
	{
		printf("Trimmed string: '%s'\n", trims);
		free(trims);
	}
	else
		printf("Memory allocation failed");
	return (0);
}*/
