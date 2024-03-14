/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:57:55 by muyucego          #+#    #+#             */
/*   Updated: 2023/10/13 17:08:34 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b_hay;

	b_hay = (char *)haystack;
	i = 0;
	if (!ft_strlen(needle) || haystack == needle)
		return (b_hay);
	while (b_hay[i] && i < len)
	{
		j = 0;
		while (b_hay[i + j] == needle[j] && b_hay[i + j] && needle[j]
			&& i + j < len)
			j++;
		if (!needle[j])
			return (&b_hay[i]);
		i++;
	}
	return (NULL);
}
