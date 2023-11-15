/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:41:01 by mapale            #+#    #+#             */
/*   Updated: 2023/11/15 17:58:27 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_lst;

	if (!lst || !(*lst))
		return ;
	tmp_lst = *lst;
	while (tmp_lst)
	{
		tmp_lst = (*lst)->next;
		ft_lstdelone((*lst), (*del));
		(*lst) = tmp_lst;
	}
	*lst = NULL;
}
