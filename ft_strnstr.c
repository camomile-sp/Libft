/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:34:16 by apavlova          #+#    #+#             */
/*   Updated: 2024/12/09 11:34:20 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	if (!*little)
		return ((char *)big);
	if (!big || !little)
		return (NULL);
	if (ft_strlen(little) > len)
		return (0);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		n = 0;
		while (big[i + n] == little[n] && little[n] != '\0' && (i + n) < len)
			n++;
		if (little[n] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char str[] = "Peter Piper picked a peck of pickled peppers";
	char n[] = "per";
	size_t m = 40;
	char *result = ft_strnstr(str, n, m);
	if (result != NULL)
		printf("%s", result);
	else
		printf("Not found");
	return (0);
}*/
/*
int main(void)
{
    // Test 1: Regular search
    //printf("%s\n", ft_strnstr("Hello, World!", "World", 13));

    // Test 2: Search with length limitation
    //printf("%s\n", ft_strnstr("Hello, World!", "World", 5));

    // Test 3: Empty "little" string
    //printf("%s\n", ft_strnstr("Hello, World!", "", 13));

    // Test 4: Empty "big" string
    //printf("%s\n", ft_strnstr("", "World", 5));

    // Test 5: Both arguments are empty
    //printf("%s\n", ft_strnstr("", "", 0));

    // Test 6: Search exceeding the length "len"
    //printf("%s\n", ft_strnstr("abcdef", "def", 4));

    // Test 7: Full match
    //printf("%s\n", ft_strnstr("abcdef", "abcdef", 6));

    // Test 8: No matches
    //printf("%s\n", ft_strnstr("abcdef", "xyz", 6));

    // Test 9: Single character inside the string
    //printf("%s\n", ft_strnstr("abcdef", "c", 6));

    // Test 10: Single character outside the length "len"
    //printf("%s\n", ft_strnstr("abcdef", "c", 2));

    return (0);
}*/