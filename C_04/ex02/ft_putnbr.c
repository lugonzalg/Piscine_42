/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 21:51:16 by lugonzal          #+#    #+#             */
/*   Updated: 2021/04/29 15:59:15 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nb2;

	if (nb < 0)
	{
		nb2 = (unsigned int)(-nb);
		ft_putchar('-');
	}
	else
		nb2 = (unsigned int)(nb);
	if (nb2 > 9)
	{
		ft_putnbr(nb2 / 10);
		ft_putnbr(nb2 % 10);
	}
	else
		ft_putchar(nb2 + '0');
}
