/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:43:18 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/05 17:01:48 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_print_matrix(int size, int x, int y)
{

	

	printf("X:%dY:%dSize;%d\n", x, y, size);
}

int ft_check_square(int i, int size, int j, char** matrix)
{
  	int x = 0;
  	int y = 0;
	int	column = 4;
	int	row = 4;
	int conta = 0;

	printf("i:%dj:%dsize:%d\n", i, j, size);


 if (size > 1)
    {
        y = 0;
        while (y + j < size + j)
        {
            x = 0;
            while(x + i < size+ i)
            {
				printf("valor matrix mirado: %c\n", matrix[x + i][y + j]);
               	printf("x:%di:%dy:%dj:%d\n", x, i,  y, j);
                if (matrix[x + i][y + j] == 'o')
                    break ;
			   	x++;
				conta++;
            }
            if (matrix[x + i][y + j] == 'o' )
 				break ;
            y++;
        }
        if (conta == size * size)
		{
			printf("solución ");
			ft_print_matrix(size, i, j);
			printf("\n%cqwewq", matrix[2][0]);
			exit(0);
		}
		else if ((size + i + 1) <= column)
		{
			printf("movimiento derecha ");
         	ft_check_square(i + 1, size, j, matrix);
		}
		else if ((size + i + 1) > column && (j + 1 + size) <= row )
		{
			printf("movimiento abajo ");
		 	ft_check_square(0 , size, j + 1, matrix);
		}
		else if ((j + 1 + size) > row)
		{
			printf("disminución cuadrado ");
		 	ft_check_square(0, size - 1, 0, matrix); 
 		}
	}
   
    return (0);
}

int	main(void)
{
	int size = 4;
	char*	file;
	int	bytes;
	int	fp;
	char*	c;
	int	colum;
	int	cont;
	int	row;
	char** matrix;
	int	x;
	int	y;

	file = "test.txt";
	bytes = 0;
	c = malloc(sizeof(char));
	fp = open(file, O_RDONLY);
	if (fp == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	colum = -1;
	row = -1;
	cont = 0;
	bytes = read (fp, c, sizeof(char));
	printf("hola");
	while (bytes > 0)
	{
		if (*c == '\n')
		{
			cont++;
			row++;
		}
		if (cont == 1)
		   colum++;
		bytes = read (fp, c, sizeof(char));	
	}
	close (fp);
	cont = 0;
	matrix = (char**) malloc(colum * sizeof(char *));
	while(cont <= colum)
	{
		matrix[cont] = malloc (row * sizeof(char));
		cont++;	
	}
	fp = open(file, O_RDONLY);
	bytes = read (fp, c, sizeof(char));
	x = -1;
	y = 0;
	while ( bytes > 0)
	{
		if(*c == '\n')
		{
			x++;
			y = 0;
		}
		else if(x>=0)
		{
			matrix[x][y] = *c;
			y++;
		}
		bytes = read (fp, c, sizeof(char));
	}
	close(fp);
	x = 0;
	y = 0;
	size = 4;	
	ft_check_square(x, size, y, matrix);
}
