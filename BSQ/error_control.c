/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:12:36 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/05 20:18:05 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	ft_warnings(int n)
{
	if (n == 0)
		write(1, "Dict Error\n",11);
	if (n == 1)
		write(1, "map error\n", 10);
}

int ft_check_size(char** matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(matrix[i][j] != '\0')
		i = 0;
		while(matrix[i][j] != '\n')
			i++;
		j++;
	if (j < i )
		return (j);
	else
		return (i);
}

int	ft_regular_square(char *str)
{
	int jump;
	int col;
	int	i;
	int	pre_col;
	
	i = 0;
	jump = 0;
	col = 0;
	pre_col = 0;
	while (str[i] != 0)
	{
		col++;
		if (jump > 1 && pre_col != col && str[i] == '\n')
			return (0);
		if (str[i] == '\n')
		{	
			pre_col = col;
			col = 0;
			jump++;
		}
	i++;
	}
	return (1);
}

void	ft_write_file(int byte, char *argv)
{
	char	ptr;
	char	*text;
	int		openfile;
	int		i;

	i = 0;
	openfile = open(argv, O_RDONLY);
	text = (char*)malloc(byte*sizeof(char));
	while (read(openfile, &ptr, sizeof(&ptr) != 0))	
		text[i++] = ptr;
	close(openfile);
	i = ft_regular_square(text);
	printf("\n->%d", i);
}

int	ft_read_file(char* argv)
{
	int		byte;
	char	runner;
	int		openfile;

	byte = 0;
	openfile = open(argv, O_RDONLY);
    while (read(openfile, &runner, sizeof(runner) != 0))
        byte++;
    close(openfile);
    return (byte);	
}

void	ft_check_file(int argc, char **argv)
{
	int		openfile;
	int		num;
	char	*file;
	
	num = argc - 1;
	file = argv[num];
	openfile = open(file, O_RDONLY);
	close(openfile);
	if (openfile == -1)
		ft_warnings(0);
	else
	{	
		openfile = ft_read_file(argv[num]);
		ft_write_file(openfile, argv[num]);
	}
}
int	ft_check_error()
{
	ft_manage_files();	
}
int	main(int argc, char **argv)
{	
	if (argc == 2)
		ft_warnings(1);
	else if (argc > 2)
		ft_check_file(argc, argv);
	else
		ft_warnings(1);
	return (0);
}
