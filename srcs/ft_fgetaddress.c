/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fgetaddress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:35 by antoda-s          #+#    #+#             */
/*   Updated: 2024/07/03 16:43:51 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_getadress(size_t n, int *count, int fd)
{
	char	*hexalow;

	hexalow = "0123456789abcdef";
	if (n >= 16)
		ft_getadress(n / 16, count, fd);
	*count += write(fd, &hexalow[n % 16], 1);
}
