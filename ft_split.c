/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:17:27 by wmozella          #+#    #+#             */
/*   Updated: 2021/10/22 19:32:29 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	all_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count ++;
		i ++;
	}
	return (count);
}

static int	len_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i ++;
	return (i);
}

static char	**ft_free(char **s, int c)
{
	while (c >= 0)
	{	
		c --;
		free (s[c]);
	}
	free(s);
	return (NULL);
}

static char	**ft_strret(char *str, char **malloc_str, char c, size_t i)
{
	size_t	sc;
	size_t	j;
	size_t	nb;

	j = 0;
	nb = 0;
	while (nb < i)
	{
		while (str[j] != '\0' && str[j] == c)
			j ++;
		malloc_str[nb] = (char *)malloc(sizeof(char) * \
		(len_word((char *)str + j, c) + 1));
		if (malloc_str[nb] == NULL)
			return (ft_free(malloc_str, nb));
		malloc_str[nb][len_word((char *)str + j, c)] = '\0';
		sc = 0;
		while (str[j] != '\0' && str[j] != c)
		{	
			malloc_str[nb][sc] = str[j];
			j ++;
			sc ++;
		}
		nb ++;
	}
	return (malloc_str);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**malloc_str;
	size_t	i;

	if (!s)
		return (NULL);
	i = all_word(s, c);
	str = (char *)s;
	malloc_str = (char **)malloc(sizeof(char *) * (i + 1));
	if (malloc_str == NULL)
		return (NULL);
	malloc_str[i] = NULL;
	ft_strret (str, malloc_str, c, i);
	return (malloc_str);
}
