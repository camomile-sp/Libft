/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:19:44 by apavlova          #+#    #+#             */
/*   Updated: 2024/12/09 10:20:10 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_recurs(const char *nptr)
{
	int	num;
	int	num_temp;

	num = 0;
	num_temp = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (!(*(nptr + 1) >= '0' && *(nptr + 1) <= '9'))
		{
			num_temp *= 10;
			num = num_temp + (*nptr - '0');
			nptr++;
		}
		else
		{
			num_temp *= 10;
			num_temp = num_temp + (*nptr - '0');
			nptr++;
		}
	}
	return (num);
}

int	ft_atoi(const char *nptr)
{
	int	m;

	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	m = 0;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			m++;
		nptr++;
	}
	if (!(*nptr >= '0' && *nptr <= '9'))
		return (0);
	if (m > 0)
		return (ft_recurs (nptr) * (-1));
	else
		return (ft_recurs (nptr));
}

int	main(void)
{
	printf("%d\n", ft_atoi("   -1234ab567"));
	return (0);
}