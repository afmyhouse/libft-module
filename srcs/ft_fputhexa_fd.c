/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fpr_ copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:35 by antoda-s          #+#    #+#             */
/*   Updated: 2024/07/03 16:16:28 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_fputhexa(unsigned int nbr, const char *f, int *count, int fd)
{
	if (nbr == 0)
	{
		write(fd, "0", 1);
		*count += 1;
		return ;
	}
	ft_gethexa(nbr, f, count, fd);
}
