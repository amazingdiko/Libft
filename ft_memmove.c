/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:14:08 by wmozella          #+#    #+#             */
/*   Updated: 2021/10/16 16:16:55 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*str1;
	unsigned char		*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (!(str1) && !(str2))
		return (NULL);
	if (str1 < str2)
	{
		while (len--)
			*str1++ = *str2++;
	}
	else
	{
		str1 = str1 + len - 1;
		str2 = str2 + len - 1;
		while (len --)
			*str1-- = *str2--;
	}
	return (dst);
}
