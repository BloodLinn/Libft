/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:08:44 by aokur             #+#    #+#             */
/*   Updated: 2025/07/09 16:12:38 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*tmp;
	size_t	i;

	i = 0;
	a = ft_strlen(s);
	if (a < start + len)
		len = a - start;
	if (start >= a)
		return (ft_strdup(""));
	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	while (i < len)
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
