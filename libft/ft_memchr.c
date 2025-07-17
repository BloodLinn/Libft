/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:25:03 by aokur             #+#    #+#             */
/*   Updated: 2025/06/28 17:24:09 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;
	size_t			i;

	a = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (a[i] == b)
			return ((void *)&a[i]);
		i++;
	}
	return (NULL);
}
