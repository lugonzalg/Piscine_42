#include "ft_header.h"

void	ft_root(char* file)
{
	char* c;
	int	fp;

	c = malloc(sizeof(char));
	fp = 0;
	fp = open(file, O_RDONLY);
	if (fp == -1)
	{
		write(1, "Dict Error\n", 11);
	}
	else
		ft_create_matrix(fp, file, c);
}
void	ft_create_matrix(int fp, char* file, char* c)
{
	char **matrix;
	int	i;
	int j;

	i = 0;
	j = 0;
	printf("gols");
	ft_controwcolum(fp, file, c, matrix);
	fp = 10;
	printf("hola%s", matrix[0]);
	//ft_check_square(i, fp, j, matrix);
}


int main(void)
{
	char* file;

	file = "HolaMario";
	ft_root(file);
}
