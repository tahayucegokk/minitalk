/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:23:09 by muyucego          #+#    #+#             */
/*   Updated: 2023/10/14 06:40:39 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = len;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
	{
		while (i-- > 0)
			((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
	}
	return (dst);
}
