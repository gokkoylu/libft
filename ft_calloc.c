/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 14:27:22 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/22 14:27:22 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (nmemb != 0 && size > (size_t) - 1 / nmemb)
		return (0);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr)
	{
		ft_memset(ptr, 0, total_size);
		return (ptr);
	}
	else
		free (ptr);
	return (0);
}
