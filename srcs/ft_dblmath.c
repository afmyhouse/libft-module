/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblmath.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 23:04:44 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/20 23:33:26 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_abs_double_p(double *n)
{
	if (*n < 0)
		*n = *n * (-1);
	return ;
}

double	ft_abs_double(double n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	ft_sign_double(double n)
{
	if (n < 0)
		return (-1);
	return (1);
}

int	ft_round_double(double n)
{
	if ((ft_sign_double(n) * (n - (int)n)) >= 0.5)
		return ((int)n + ft_sign_double(n));
	return ((int)n);
}
