/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:46:23 by wmozella          #+#    #+#             */
/*   Updated: 2021/10/21 22:27:12 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*last;

	last = NULL;
	while (lst != NULL)
	{
		if (!f)
			return (NULL);
		new = ft_lstnew (f(lst -> content));
		if (!(new))
			ft_lstclear (&new, del);
		ft_lstadd_back (&last, new);
		lst = lst -> next;
	}
	return (last);
}
