/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:29:36 by muyucego          #+#    #+#             */
/*   Updated: 2023/10/21 15:44:46 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	calc_word_len(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static char	**point_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (calc_word_count(s, c) + 1));
	if (!str)
		return (NULL);
	while (i < calc_word_count(s, c))
	{
		while (s[j] == c)
			j++;
		str[i] = ft_substr(s, j, calc_word_len(&s[j], c));
		if (!str[i])
			return (point_free(str, i));
		j = j + calc_word_len(&s[j], c);
		i++;
	}
	str[i] = NULL;
	return (str);
}
