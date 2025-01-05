/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 16:15:38 by marvin            #+#    #+#             */
/*   Updated: 2024/12/31 16:15:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i++])
		f(i, s);
}

void to_upper(unsigned int i, char *s)
{
    s[i] = s[i] - 32;
}

int main (void)
{
	char str[] = "hello";

    ft_striteri(str, to_upper);
	printf("%s\n", str);
	return (0);
}