/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 00:11:49 by wmozella          #+#    #+#             */
/*   Updated: 2021/10/22 00:00:13 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*str1;
	char	*str2;
	size_t	i;
	size_t	b;

	str1 = (char *)dst;
	str2 = (char *)src;
	i = 0;
	b = ft_strlen(str2);
	if (!(dstsize))
		return (b);
	while (str2[i] != '\0' && i < dstsize - 1)
	{
		str1[i] = str2[i];
		i ++;
	}
	str1[i] = '\0';
	return (b);
}
