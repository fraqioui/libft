/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:58:43 by fraqioui          #+#    #+#             */
/*   Updated: 2022/10/20 15:40:27 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*new;

	new = lst;
	if (!lst || !del)
		return ;
	lst = lst->next;
	del(new->content);
	free(new);
	new = NULL;
}
