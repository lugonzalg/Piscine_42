/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 11:30:20 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/02 20:37:01 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATIONS_H
# define VALIDATIONS_H

void	ft_argmnt_val(int argc, char **argv);
void	ft_warnings(int flag);
void	ft_atoi(char *argv, int n);
int		ft_cnfrm_atoi(char *argv);
void	ft_strlen(char *argv);
void	ft_handle_num(long long unsigned int num, int n);

#endif
