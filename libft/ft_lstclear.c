/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:15:21 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/09 16:44:21 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del || !(*lst))
		return ;
	while ((*lst)->next)
	{
		(*del)((*lst)->content);
		free(*lst);
		*lst = (*lst)->next;
	}
	*lst = NULL;
}
