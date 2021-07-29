/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:20:29 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/05 18:37:05 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_putfull()
{
	
	return (full);
}

void	ft_print_matrix(size, x, y)

	int tmp_x;

	tmp_x = x;
	while (y < size)
	{
		x = tmp_x;
		while (x < size)
		{
			ft_putfull(matrix, x, y);
			x++;
		}
	y++;
	}
}

int	check_square(int i, int size, int j)
{
	int	x;
	int	y;

	if (size > 1)
	{
		y = 0;
		while (y + j < size + j)
		{	
			x = 0;
			while(x + i < size + i)
			{
				if (matrix[x + i][y + j] == obs)
					break ;
				x++;
			}
			if (matrix[x + i][y + j] == obs)
				break ;
			y++;
		}
		if (y == size && x == size)
			ft_print_matrix(size, x + i, y + j);
		if ((size + i + 1) < column)
			ft_check_square(i++, size, j);
		else if ((size + i + 1) > column && (j + 1 + size) < row )
			ft_check_square(0, size, j++);
		else if ((j + 1 + size) > row)
			ft_check_square(0, size - 1, 0);
	}
	return (0);
}
