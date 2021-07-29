/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 21:33:04 by lugonzal          #+#    #+#             */
/*   Updated: 2021/04/29 17:07:36 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

void	ft_if4(int *ptr, int move)
{
	*(ptr + move) = 1;
	*(ptr + move + 4) = 2;
	*(ptr + move + 8) = 3;
	*(ptr + move + 12) = 4;
}

int	*ft_table(int row, int column)
{
	int	*matrix;
	int	x;
	int	y;

	x = 0;
	y = 0;
	matrix = (int *)malloc(row * column * sizeof(int));
	return (matrix);
}

void	ft_check_colup(int *ptr, char *ptr2)
{
	char	change;
	int		move;

	move = 0;
	while (move < 4)
	{
		change = *(ptr2 + move);
		if (change == '1')
			*(ptr + move) = 4;
		else if (change == '4')
		{
			ft_if4(ptr, move);
		}
		move++;
	}
}

void	ft_check_coldown(int *ptr, char *ptr2)
{
	int		move;
	char	exchange;

	move = 12;
	while (move < 8)
	{
		exchange = *(ptr2 + move);
		if (exchange == '1')
		{
			*(ptr + move) = 4;
		}
		else if (exchange == '4')
		{
			ft_if4(ptr, move);
		}
		move++;
	}
}

void	ft_print_table(int *ptr)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ft_putchar(*(ptr + x * 4 + y) + '0');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
