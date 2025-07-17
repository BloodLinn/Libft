/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:42:32 by aokur             #+#    #+#             */
/*   Updated: 2025/07/09 16:16:17 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*a;
	unsigned int		i;
	unsigned int		tmp;

	i = 0;
	tmp = ft_strlen(s);
	a = malloc(sizeof(char) * (tmp + 1));
	if (!a)
		return (NULL);
	while (i < tmp)
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
