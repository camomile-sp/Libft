/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 18:08:27 by apavlova          #+#    #+#             */
/*   Updated: 2024/12/26 18:35:01 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_s;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	new_s = malloc(ft_strlen(s) + 1);
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
/*
char	add_index(unsigned int index, char c)
{
	return (c + index);
}

int	main(void)
{
	char	*str = "Well hello";
	char	*result;

	result = ft_strmapi(str, add_index);
	printf("%s", result);
	free(result);
	return (0);
	
	if (!result)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
}*/
