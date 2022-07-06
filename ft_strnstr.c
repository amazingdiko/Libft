/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 00:24:03 by wmozella          #+#    #+#             */
/*   Updated: 2021/10/22 00:00:29 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*need;
	size_t	i;
	size_t	j;
	size_t	need_len;

	hay = (char *)haystack;
	need = (char *)needle;
	need_len = ft_strlen(need);
	i = 0;
	if (!(need_len))
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		if (hay[i] == need[0])
		{
			j = 1;
			while (need[j] && hay[i + j] == need[j] && i + j < len)
				j ++;
			if (need[j] == '\0')
				return (&hay[i]);
		}
		i ++;
	}
	return (NULL);
}
