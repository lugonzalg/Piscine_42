/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 17:43:36 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/05 11:59:28 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_matrix(void)
{
	char	empty;
	char	full;
	char	obstacle;
	int		capaable;
	int		n;
	int		size;
	int		safe[n];
	int		condition;

	while (y++ < row)
	{
	
		while (x++ < colum)
		{
			if (matrix[condition+x][y] == empty)
				capable++;			
				if (capable >= size)
				safe[n] = capable;				
			else
				capable[n] = 0;
		}
		x = 0;
		n++;
	}
	condition++;
	ft_check_matrix();
}
