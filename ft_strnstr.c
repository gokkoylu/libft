/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/28 14:35:33 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/28 14:35:33 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	size_t	j;

	i = 0;
	little_len = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	if (!len)
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j] && (i + j) < len \
				&& big[i + j] == little[j])
			j++;
		if (j == little_len)
			return ((char *)(&big[i]));
		i++;
	}
	return (0);
}
