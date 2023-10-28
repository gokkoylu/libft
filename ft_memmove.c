/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 16:29:35 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/22 16:29:35 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*copy_backward(unsigned char *dest, const unsigned char *src, size_t n)
{
	dest = dest + n;
	src = src + n;
	while (n)
	{
		dest--;
		src--;
		*dest = *src;
		n--;
	}
	return ((char *)dest);
}

char	*copy_forward(unsigned char *dest, const unsigned char *src, size_t n)
{
	while (n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return ((char *)dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d == s || n == 0)
		return (dest);
	if (d > s && d < s + n)
		copy_backward(d, s, n);
	else
		copy_forward(d, s, n);
	return (dest);
}
