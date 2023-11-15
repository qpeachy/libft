/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:48:59 by mapale            #+#    #+#             */
/*   Updated: 2023/11/15 18:41:59 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*lst_tmp;
	void	*tmp;

	if (!lst || !f)
		return (NULL);
	lst_new = NULL;
	while (lst != NULL)
	{
		tmp = (*f)(lst->content);
		lst_tmp = ft_lstnew(tmp);
		if (!lst_tmp)
		{
			del(tmp);
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_new, lst_tmp);
		lst = lst->next;
	}
	return (lst_new);
}
