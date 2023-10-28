/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 16:07:36 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/22 16:07:36 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*string;

	string = (char *)s;
	while (n > 0)
	{
		if (*string == (char)c)
			return (string);
		n--;
		string++;
	}
	return (NULL);
}
