/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:35 by antoda-s          #+#    #+#             */
/*   Updated: 2024/07/03 16:28:18 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_fprintf(int fd, const char *f, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start (args, f);
	while (*f)
	{
		if (*f == '%')
		{
			f++;
			fcheckformat(args, f, &count, fd);
		}
		else
		{
			write(fd, f, 1);
			count += 1;
		}
		f++;
	}
	va_end(args);
	return (count);
}
