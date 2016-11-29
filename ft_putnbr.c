/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoirou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 16:08:49 by panoirou          #+#    #+#             */
/*   Updated: 2016/11/28 16:46:29 by panoirou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putnbr(int nb)
{
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putchar(nb + '0');
	}
	if (nb >= 10)
	{
		ft_putchar(nb / 10 + '0');
		ft_putchar(nb % 10);
	}
	return (0);
}

int		main(void)
{
	ft_putnbr(-2);
	return (0);
}
