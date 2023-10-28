/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 13:47:52 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/22 13:47:52 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = n;
	str = (char *)s;
	while (i > 0)
	{
		*str++ = '\0';
		i--;
	}
}
