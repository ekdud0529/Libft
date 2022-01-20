/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:57:24 by daykim            #+#    #+#             */
/*   Updated: 2022/01/20 17:57:24 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if(*lst && del)
	{
		while (*lst)
		{
			*lst = (*lst) -> next;
			tmp = *lst;
			del(tmp->content);
			free(tmp);
		}
	}
}