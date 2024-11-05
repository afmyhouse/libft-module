/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:35 by antoda-s          #+#    #+#             */
/*   Updated: 2024/07/03 16:23:18 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_fputunsig(unsigned int n, int *count, int fd)
{
	if (n >= 10)
	{
		ft_fputunsig(n / 10, count, fd);
		n = n % 10;
	}
	if (n < 10)
	{
		n += 48;
		*count += write(fd, &n, 1);
	}
}
