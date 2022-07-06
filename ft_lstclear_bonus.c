/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:20:50 by wmozella          #+#    #+#             */
/*   Updated: 2021/10/21 20:20:31 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_support;
	t_list	*new;

	new = *lst;
	if (!(new))
		return ;
	while (new != NULL)
	{
		lst_support = (new -> next);
		if (del)
			del (new -> content);
		free(new);
		(new) = lst_support;
	}
	*lst = NULL;
}
