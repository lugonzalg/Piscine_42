/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 18:40:48 by lugonzal          #+#    #+#             */
/*Updated: 2021/06/06 19:13:42 by lugonzal               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "handle.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_text_size(void)
{
	char	runner;
	int		Byte;
	int		openfile;

	Byte = 0;
	openfile = open("numbers.dict", O_RDONLY);
	while (read(openfile, &runner, sizeof(runner) != 0))
		Byte++;
	close(openfile);
	return (Byte);
}

void	ft_read_malloc(int Byte)
{
	char	runner;
	int		i;
	int		openfile;

	Byte = 0;
	i = 0;
	openfile = open ("numbers.dict", O_RDONLY);
	g_text = (char *)malloc(Byte * sizeof(char));
	while (read(openfile, &runner, sizeof(runner) != 0))
		g_text[i++] = runner;
	close(openfile);
}

void	ft_open_file(void)
{
	int	Byte;
	int	openfile;

	openfile = open("numbers.dict", O_RDONLY);
	close (openfile);
	Byte = 0;
	if (openfile != -1)
	{	
		Byte = ft_text_size();
		ft_read_malloc(Byte);
	}
	else
		write(1, "Dict Error\n", 11);
}
