/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:42:23 by wmozella          #+#    #+#             */
/*   Updated: 2021/10/21 23:45:33 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_result(int nb, int negative, char	*str)
{
	int	i;

	i = 0;
	while (nb / 10 * negative > 0)
	{
		str[i] = nb % 10 * negative + '0';
		nb = nb / 10;
		i ++;
	}
	str[i] = nb % 10 * negative + '0';
	if (negative == -1)
	{
		i ++;
		str[i] = '-';
	}
	str[i + 1] = '\0';
	return (str);
}

static char	*return_string(char *str)
{
	int		i;
	char	buffer;
	int		size_str;

	size_str = ft_strlen(str) - 1;
	i = 0;
	while (i <= size_str)
	{
		buffer = str[i];
		str[i] = str[size_str];
		str[size_str] = buffer;
		i ++;
		size_str --;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			negative;
	long long	nb;
	int			count;

	nb = (long long)n;
	negative = 1;
	count = 1;
	if (0 > n)
	{
		count ++;
		negative = -1;
	}
	while ((nb / 10) * negative != 0)
	{
		nb = nb / 10;
		count ++;
	}
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	str = ft_result(n, negative, str);
	str = return_string(str);
	return (str);
}
