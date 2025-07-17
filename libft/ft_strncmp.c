/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:49:38 by aokur             #+#    #+#             */
/*   Updated: 2025/06/28 17:23:06 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*p;

	s = (unsigned char *)s1;
	p = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s[i] == p[i] && s[i] && p[i] && i < n - 1)
		i++;
	return (s[i] - p[i]);
}
