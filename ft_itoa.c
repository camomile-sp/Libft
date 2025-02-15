/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 22:41:52 by marvin            #+#    #+#             */
/*   Updated: 2024/12/25 22:41:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	ft_is_neg(int n, char *s, size_t *i)
{
	if (n < 0)
	{
		s[0] = '-';
		if (n == -2147483648)
		{
			s[--(*i)] = '8';
			n /= 10;
		}
		n = -n;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*s;

	i = ft_len(n);
	s = ft_calloc(i + 1, sizeof(char));
	if (!s)
		return (NULL);
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	n = ft_is_neg(n, s, &i);
	while (n > 0)
	{
		s[--i] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}
/*
int main(void)
{
    char *str;

    str = ft_itoa(-1234);
    printf("%s\n", str);

    str = ft_itoa(0);
    printf("%s\n", str);

    str = ft_itoa(-2147483648);
    printf("%s\n", str);

    return (0);
}*/
