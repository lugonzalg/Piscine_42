#include "ft_header.h"

void	ft_controwcolum(int	fp, char* file, char* c, char** matrix)
{
	int	colum;
	int	row;
	int	cont;

	cont = 0;
	colum = -1;
	row = -1;
	fp = open(file, O_RDONLY);
	while (read (fp, c, sizeof(char)) > 0)
	{
		if (*c == '\n')
		{
			cont++;
			row++;
		}
		if (cont == 1)
	   		colum++;
	}
	close (fp);
	ft_malloc(row, colum, matrix, file);
}

void	ft_malloc(int row, int colum, char** matrix, char* file)
{
	int	fp;	
	char*	c;
	int	cont;

	cont = 0;
	fp = 0;
	c = malloc (sizeof(char));
	matrix = (char**) malloc(colum * sizeof(char *));
	while(cont <= colum)
	{
		matrix[cont] = malloc (row * sizeof(char));
		cont++;
	}
	ft_fillmalloc(matrix, c, file, fp);
}

void	ft_fillmalloc(char**  matrix, char* c, char* file, int fp)
{
	int	x;
	int	y;

	fp = open(file, O_RDONLY);
	x = -1;
	y = 0;
	while ( read (fp, c, sizeof(char)) > 0)
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
	}
	close(fp);
}
