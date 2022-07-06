/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 22:47:32 by wmozella          #+#    #+#             */
/*   Updated: 2021/10/22 00:00:35 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	symbol;

	str = (char *)s;
	i = ft_strlen(str) - 1;
	symbol = (char)c;
	while (i >= 0)
	{
		if (str[i] == symbol)
			return (&str[i]);
		i --;
	}
	i ++;
	while (str[i] != '\0')
		i ++;
	if (str[i] == '\0' && symbol == '\0')
		return (&str[i]);
	else
		return (NULL);
}
