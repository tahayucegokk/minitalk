/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:47:41 by muyucego          #+#    #+#             */
/*   Updated: 2023/10/19 06:07:41 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size;
	size_t		i;
	size_t		j;
	char		*dest;

	size = ft_strlen(s1);
	i = 0;
	j = -1;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[i]) && i < size)
		i++;
	if (i == size)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[size - 1]) && size > 0)
		size--;
	dest = (char *)malloc (size - i + 1);
	if (dest == NULL)
		return (NULL);
	while ((i + ++j) < size)
		dest[j] = s1[i + j];
	dest[j] = '\0';
	return (dest);
}
