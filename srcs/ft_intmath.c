/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_math.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 23:04:44 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/20 23:26:43 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

unsigned int	ft_abs_int(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	ft_abs_int_p(int *n)
{
	if (*n < 0)
		*n = *n * (-1);
	return ;
}

int	ft_max_int(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_min_int(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
