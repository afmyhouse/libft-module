/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_equal_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 09:50:34 by antoda-s          #+#    #+#             */
/*   Updated: 2024/06/30 10:17:37 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/// @brief  	checks if 2 float number are equal above error margin EPSILON
/// @param a	first float number
/// @param b	second float number
/// @return		1 if equal, 0 if not
int	f_equal_f(float a, float b)
{
	return ((a - b) < EPSILON);
}
