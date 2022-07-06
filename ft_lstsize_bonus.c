/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:52:24 by wmozella          #+#    #+#             */
/*   Updated: 2021/10/19 22:06:46 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*new;
	int		count;

	new = lst;
	count = 0;
	if (!(new))
		return (count);
	while (new != NULL)
	{
		new = new -> next;
		count ++;
	}
	return (count);
}
