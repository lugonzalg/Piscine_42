/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_files_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:42:36 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/06 20:05:32 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "manage.h"
#include <stdio.h>

int	ft_right_char(char *text, int i)
{
	char	used[3];
	int		j;
	int		comp;

	comp = 0;
	j = 0;
	while (j < 2)
		used[j++] = text[i++];
	used[j++] = text[i + 1];
	while (text[i++] != '\0')
	{	
		comp = 0;
		j = 0;
		while (j < 4)
		{	
			if (used[j] == text[i])
				comp++;
			j++;
		}
		if (comp != 1 && text[i] != '\0')
			return (0);
	}
	return (1);
}

int	ft_regular_square(char *text)
{
	int	jump;
	int	col;
	int	i;
	int	pre_col;

	i = 0;
	jump = 0;
	col = 0;
	pre_col = 0;
	while (text[i] != 0)
	{
		col++;
		if (jump > 1 && pre_col != col && text[i] == '\n')
			return (0);
		if (text[i] == '\n')
		{
			pre_col = col;
			col = 0;
			jump++;
		}
		i++;
	}
	return (ft_check_rows_B(text));
}

int	ft_repeat_letter(char *text, int i)
{
	int	cont;
	int	j;

	j = i;
	cont = 0;
	while (text[i] != '\n')
		i++;
	i -= 3;
	while (text[i] != '\n')
	{
		cont = 0;
		j = 1;
		while (text[j] != '\n')
		{
			if (text[i] == text[j])
				cont++;
			if (cont == 2)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_first_line(char *text)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (text[i] >= '0' && text[i] <= '9')
		i++;
	while (text[i] != '\n' && text[i] >= 32 && text[i] <= 126)
	{	
		j++;
		i++;
	}
	if (j != 3)
		return (0);
	i -= j;
	if (ft_repeat_letter(text, i) && (ft_right_char(text, i)))
		return (ft_regular_square(text));
	else
		return (0);
}

int	ft_no_jump(char *text)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (text[i] != '\0')
	{
		j++;
		i++;
	}
	if ((text[i] == '\0' && text[i - 1] != '\n') || j == 1)
		return (0);
	return (ft_first_line(text));
}
