/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:43:18 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/05 20:41:36 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
void	ft_fill_matrix(int size, int x, int y, char** matrix)
{
	int a;
	int b;
	
	b = 0;
	while(b < size)
	{
		a = 0;
		while (a < size)
		{
			matrix[x+a][y+b] = 'x';
			a++;
		}
		b++;
	}
	printf("X:%dY:%dSize;%d\n", x, y, size);
}

void ft_check_square(int i, int size, int j, char** matrix)
{
  	int x;
  	int y;
	int conta;
	int row = 10;
	int column = 20;

	conta = 0;
    if (size > 1)
    {
        x = 0;
        while (x + j < size + j)
        {
            y = 0;
            while(y + i < size+ i)
            {
                if (matrix[x + j][y + i] == 'o')
                    break ;
			   	y++;
				conta++;
            }
            if (matrix[x + j][y + i] == 'o' )
 				break ;
            x++;
        }
        if (conta == size * size)
		{
			ft_fill_matrix(size, i, j, matrix);
			exit(0);			
			//	ft_print_matrix(matrix, file);
		}
		else if ((size + j + 1) <= column)
         	ft_check_square(i, size, j + 1, matrix);
		else if ((size + j + 1) > column && (i + 1 + size) <= row )
		 	ft_check_square(i + 1, size, 0, matrix);
		else if ((j + 1 + size) > row)
		 	ft_check_square(0, size - 1, 0, matrix); 
	}
}

/*char	ft_obstacle(char obstacle)
{
	char	*c;
	int	conta;
	int	fp;

	conta = 0;
	c = malloc(sizeof(char));
	obstacle = '?';
	fp = open("Hola Mario", O_RDONLY);
	while (read (fp, c, sizeof(char))> 0)
	{
		conta++;
		if (conta == 3)
			obstacle = *c;
		return (obstacle);
	}
	return(obstacle);
}

int	ft_size(char** matrix)
{
	return (10);
}*/

/*void	ft_print_matrix(char** matrix, char* file)
{










}*/
