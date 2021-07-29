/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:36:02 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/05 11:59:51 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int	ft_square_size(int row, int column)
{
	int	size;

	if (row == column)
		size = row;
	else
		if (column < row)
			size = column;
	else
		size = row;
	return (size);
}

void	ft_check_matrix_1(char **matrix, int row, int column, int max_size)
{
	int		n;
	int		m;
	char	empty;
//FUNCIÓON EXTERNA PARA CALCULAR SIZE..
	//max_size = ft_square_size(row, column);
	//while ((y + m) <= row - max_size)
	//{
		//while ((x + n) <= (column - max_size))
			ft_horizontal_offset(matrix, row, column, max_size);
		while ((y + m) <= row)
			ft_vertical_offset(matrix, row, column,  max_size);	
	//}
}

void	ft_horizontal_offset(char** matrix, int row, int column, int max_size)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
/*SIZE PUNTERO? MODIFICAR VARIABLE PARA CUADRADOS DE DISTINTO TAMAÑO.*/
	while ((x + n) <= (column - size)):wq
	{
		while ((x + n) <= column) 
		{
				if (matrix[x + n][y + m] == empty)
					check_n++;		
				else if (check_n >= size || column - n < size && check_n )
				{	
					m++;	
					break ;
				}
				else
					check_n = 0;
			n++;
		}
	}
	m++;
	if (check_n < size && y + m <= row - size)
		n = 0;
		ft_horizontal_offset(matrix, row, column, m ,n);
	if ((y + m) <= row - size)
		n = column - check_n;
		ft_vertical_offset(matrix, row, column, m, n);
}

void	ft_vertical_offset(char** matrix, int row, int column, int max_size)
{
		if (matrix[x + n][y + m] == empty)
				check_m++;	
			else
				break ;
			if (check_m == size)
				n++;
				break ;
			m++;

}
