/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/28 14:35:43 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/28 14:35:43 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *set)
{
	size_t		i;
	char		*rtn;

	if (!str || !set)
		return (NULL);
	while (*str && ft_strchr(set, *str))
		str++;
	i = ft_strlen((char *)str);
	while (i && ft_strchr(set, str[i]))
		i--;
	rtn = ft_substr((char *)str, 0, i + 1);
	return (rtn);
}
