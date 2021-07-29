/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:31:48 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/05 15:35:24 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int	number;

	number = 1;
	if (nb > 1)
	{	
		return (number* ft_recursive_factorial(nb -1));
	}
	return(nb);
}
