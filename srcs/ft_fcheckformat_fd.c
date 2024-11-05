/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fcheckformat_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:35 by antoda-s          #+#    #+#             */
/*   Updated: 2024/07/03 16:26:09 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	fcheckformat(va_list args, const char *f, int *count, int fd)
{
	if (*f == 'c')
		ft_fputchar(va_arg(args, int), count, fd);
	if (*f == 'd' || *f == 'i')
		ft_fputnbr(va_arg(args, int), count, fd);
	if (*f == 's')
		ft_fputstr(va_arg(args, char *), count, fd);
	if (*f == 'u')
		ft_fputunsig(va_arg(args, unsigned int), count, fd);
	if (*f == 'X' || *f == 'x')
		ft_fputhexa(va_arg(args, int), f, count, fd);
	if (*f == 'p')
		ft_fputadress(va_arg(args, size_t), count, fd);
	if (*f == 'f')
		ft_fputfloat(va_arg(args, double), count, fd);
	if (*f == '%')
		ft_fputchar('%', count, fd);
}
