/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:35 by antoda-s          #+#    #+#             */
/*   Updated: 2024/07/03 16:24:14 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_fputfloat(double n, int *count, int fd)
{
	int		integer;
	int		decimal;
	int		i;

	integer = (int)n;
	decimal = (int)((n - integer) * 1000000);
	ft_fputnbr(integer, count, fd);
	ft_fputchar('.', count, fd);
	i = 100000;
	while (i > decimal)
	{
		ft_fputchar('0', count, fd);
		i /= 10;
	}
	ft_fputnbr(decimal, count, fd);
}
