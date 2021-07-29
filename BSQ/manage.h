/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 10:51:36 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/06 18:53:36 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANAGE_H
# define MANAGE_H

int ft_regular_square(char *text);
int ft_repeat_letter(char *text, int i);
int ft_no_jump(char *file);
int ft_regular_square(char *str);
char    *ft_write_file(int byte, char *file);
int ft_read_file(char *file);
int ft_open_file(char *file);
int ft_manage_files(char *file);
int ft_check_rows_B(char *file);
int ft_check_rows_A(char *file);
int	ft_right_char(char *text, int i);

#endif
