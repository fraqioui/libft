/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:10:52 by fraqioui          #+#    #+#             */
/*   Updated: 2022/10/20 16:40:46 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;

	if (!lst || !del)
		return ;
	new = *lst;
	while (*lst)
	{
		new = new->next;
		del((*lst)->content);
		free(*lst);
		*lst = new;
	}
	*lst = NULL;
}
