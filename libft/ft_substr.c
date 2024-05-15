/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:51:21 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/09 17:48:22 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	x;

	if (!(s))
		return (NULL);
	new = (char *)malloc(sizeof(*s) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	x = 0;
	while (s[i])
	{
		if (i >= start && x < len)
		{
			new[x] = s[i];
			x++;
		}
		i++;
	}
	new[x] = '\0';
	return (new);
}
