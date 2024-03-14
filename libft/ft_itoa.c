/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:59:23 by muyucego          #+#    #+#             */
/*   Updated: 2023/10/21 15:45:01 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_digit(int n)
{
	int	digit;

	digit = 1;
	while (n >= 10)
	{
		digit++;
		n /= 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	i = ft_digit(n) + sign;
	str = ft_calloc(i + 1, 1);
	if (!str)
		return (0);
	while (i-- > 0)
	{
		str[i] = n % 10 + 48;
		n /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
