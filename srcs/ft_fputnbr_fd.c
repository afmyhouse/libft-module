/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:35 by antoda-s          #+#    #+#             */
/*   Updated: 2024/07/03 16:22:17 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_fputnbr(int nbr, int *count, int fd)
{
	if (nbr == -2147483648)
	{
		*count += write(fd, "-2147483648", 11);
	}
	else
	{
		if (nbr < 0)
		{
			ft_fputchar('-', count, fd);
			nbr = -nbr;
		}
		if (nbr >= 10)
			ft_fputnbr(nbr / 10, count, fd);
		ft_fputchar(nbr % 10 + '0', count, fd);
	}
}
