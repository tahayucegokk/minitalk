/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:33:46 by muyucego          #+#    #+#             */
/*   Updated: 2023/10/16 14:17:44 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (unsigned int)ft_strlen(s + start))
		len = (unsigned int)ft_strlen(s + start);
	cpy = (char *)malloc(sizeof(char) * len + 1);
	if (cpy == NULL || !s)
		return (NULL);
	while (s[i])
	{
		if (j < len && i >= start)
		{
			cpy[j] = s[i];
			j++;
		}
		i++;
	}
	cpy[j] = '\0';
	return (cpy);
}
