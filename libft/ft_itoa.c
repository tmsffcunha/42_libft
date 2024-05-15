/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:42:52 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/09 16:42:06 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n > 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*x;

	i = 0;
	i = count(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	x = (char *)malloc((i + 1) * sizeof(int));
	if (!x)
		return (NULL);
	x[i + 1] = '\0';
	if (n < 0)
		x[0] = '-';
	while (i >= 0 && n > 9)
	{
		x[i] = (n % 10) - '0';
		n /= 10;
		i--;
	}
	x[i] = n + '0';
	return (x);
}
