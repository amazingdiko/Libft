/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:34:42 by wmozella          #+#    #+#             */
/*   Updated: 2021/10/11 21:04:43 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	symbol;
	size_t			i;

	str = (unsigned char *)s;
	symbol = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == symbol)
			return (&str[i]);
		i ++;
	}
	return (NULL);
}
