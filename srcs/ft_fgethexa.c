/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fp_gethexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:35 by antoda-s          #+#    #+#             */
/*   Updated: 2024/07/03 16:15:24 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_gethexa(unsigned int n, const char *f, int *count, int fd)
{
	char	*hexalow;
	char	*hexaupp;

	hexalow = "0123456789abcdef";
	hexaupp = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_gethexa(n / 16, f, count, fd);
		n = n % 16;
	}
	if (*f == 'X')
	{
		write(fd, &hexaupp[n], 1);
		*count += 1;
		return ;
	}
	write(fd, &hexalow[n], 1);
	*count += 1;
}
