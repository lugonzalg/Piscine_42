#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

// Check Error

// Create Matrix
void	ft_controwcolum(int frp, char* file, char* c, char** matrix);
void	ft_malloc(int row, int colum, char** matrix, char*file);
void	ft_fillmalloc(char** matrix, char* c, char* file, int fp);

//Main
void	ft_root(char* file);
int	main(void);
void	ft_create_matrix(int fp, char* file, char* c);

//
//void	ft_check_square(int i, int size, int j, char** matrix);
//void	ft_fill_matrix(int size, int x, int y, char** matrix);
//int	ft_size(char** matrix);
//char	ft_obstacle(char obstacle);

#endif
