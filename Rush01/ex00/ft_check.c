/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 21:24:33 by lugonzal          #+#    #+#             */
/*   Updated: 2021/04/25 21:30:23 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_sqrt(int c)
{
	float	sqrt;
	float	t;

	sqrt = c / 2;
	t = 0;
	while (sqrt != t)
	{
		t = sqrt;
		sqrt = (c / t + t) / 2;
	}
	return (sqrt);
}

int	ft_check(char *str)
{
	int	c;
	int	max;
	int	min;
	float	sqrt;

	max = 0;
	min = 1;
	c = 0;
	while (*str != 0)
	{
		if (str[0] >= 48 && str[0] <= 57)
		{
			c++;
			if (*str > max)
				max = *str;
			if (*str < min)
				min = *str;
		}
		str++;
	}
	sqrt = ft_sqrt(c);
	max = max -48;
	c = sqrt;
	if (sqrt - c == 0 && (min > 0 && max <= c))
		c = c + 0;
	else
		c = 0;
	return (c);
}
