/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_files_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 09:52:40 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/06 20:07:35 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "manage.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char	*ft_write_file(int byte, char *file)
{
	char	ptr;
	char	*text;
	int		openfile;
	int		i;

	i = 0;
	openfile = open(file, O_RDONLY);
	text = (char *)malloc(byte * sizeof(char));
	while (read(openfile, &ptr, sizeof(&ptr) != 0))
		text[i++] = ptr;
	close(openfile);
	return (text);
}

int	ft_read_file(char *file)
{
	int		byte;
	char	runner;
	int		openfile;

	byte = 0;
	openfile = open(file, O_RDONLY);
	while (read(openfile, &runner, sizeof(runner) != 0))
		byte++;
	close(openfile);
	return (byte);
}

int	ft_open_file(char *file)
{
	int		openfile;
	char	*text;

	openfile = open(file, O_RDONLY);
	close(openfile);
	if (openfile == -1)
		return (0);
	openfile = ft_read_file(file);
	text = ft_write_file(openfile, file);
	return (ft_no_jump(text));
}

int	ft_manage_files(char *file)
{
	int	n;

	n = ft_open_file(file);
	return (n);
}

int	main(int argc, char **argv)
{	
	int n = ft_manage_files(argv[1]);
	printf("%d\n", n);
	printf("CANTIDAD ARGUMENTOS -> %d", argc);
	return (0);
}
