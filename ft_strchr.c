/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:38:33 by wmozella          #+#    #+#             */
/*   Updated: 2021/10/21 23:59:58 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;
	char	symbol;

	str = (char *)s;
	symbol = (char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == symbol)
			return (&str[i]);
		i ++;
	}
	if (str[i] == '\0' && symbol == '\0')
		return (&str[i]);
	else
		return (NULL);
}
