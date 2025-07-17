/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 17:59:52 by aokur             #+#    #+#             */
/*   Updated: 2025/07/09 15:53:52 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	itoa_tmp(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*itoa_str(int n)
{
	char	*a;
	int		i;
	int		b;
	long	c;

	c = n;
	b = itoa_tmp(n);
	a = malloc(b * sizeof(char) + 1);
	i = 0;
	if (!a)
		return (NULL);
	if (c < 0)
	{
		c = c * -1;
		a[i] = '-';
		i++;
	}
	a[b] = '\0';
	while (i < b)
	{
		a[b - 1] = (c % 10) + 48;
		c /= 10;
		b--;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*tmp;

	tmp = itoa_str(n);
	return (tmp);
}
