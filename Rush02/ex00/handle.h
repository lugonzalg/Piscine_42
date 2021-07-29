/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 11:20:11 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/02 20:52:47 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_H
# define HANDLE_H

void	ft_put_table(int n, int exp, int i);
int		*ft_table(int n);
int		ft_power_num(int times);
void	ft_num_deco(long unsigned int n, int times);
void	ft_open_file(void);
void	ft_read_file(int file);
char	*ft_strstr(char c);
void	ft_read_malloc(int Byte);
int		tf_text_size(void);
void	ft_arg_segmntA(char *argv);
void	ft_arg_segmntB(char *argv1, char *argv2);

int		*g_table_ptr;
char	*g_dict_argmnt;
char	*g_argv_ptr;
char	*g_text;

#endif
