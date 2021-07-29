/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:08:15 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/03 19:51:12 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	hex1;
	int	hex2;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			hex1 = "0123456789abcdef"[str[i] / 16];
			hex2 = "0123456789abcdef"[str[i] % 16];
			ft_putchar(92);
			ft_putchar(hex1);
			ft_putchar(hex2);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}
