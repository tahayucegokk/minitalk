/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:33:00 by muyucego          #+#    #+#             */
/*   Updated: 2024/03/14 13:23:43 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include "libft/libft.h"

void	handle_it(int sig)
{
	static unsigned char	c;
	static int				i;

	if (sig == SIGUSR1)
		c = c | 1;
	i++;
	if (i == 8)
	{
		ft_putchar_fd(c, 1);
		c = 0;
		i = 0;
	}
	c = c << 1;
}

int	main(void)
{
	ft_putstr_fd("Server is listening on : ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	signal(SIGUSR1, handle_it);
	signal(SIGUSR2, handle_it);
	while (1)
		pause();
	return (0);
}
