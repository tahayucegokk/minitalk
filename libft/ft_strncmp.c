/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:42:37 by muyucego          #+#    #+#             */
/*   Updated: 2023/10/12 16:52:53 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	t;

	t = 0;
	while ((s1[t] || s2[t]) && t < size)
	{
		if ((unsigned char)s1[t] > (unsigned char)s2[t])
			return (1);
		else if ((unsigned char)s1[t] < (unsigned char)s2[t])
			return (-1);
		t++;
	}
	return (0);
}
