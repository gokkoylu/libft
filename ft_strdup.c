/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/28 14:34:45 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/28 14:34:45 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	s_len;

	s_len = ft_strlen(s);
	res = malloc((s_len + 1) * sizeof(char));
	if (!res)
	{
		errno = ENOMEM;
		return (0);
	}
	ft_strlcpy(res, s, s_len + 1);
	return (res);
}
