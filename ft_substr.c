/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/28 14:35:51 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/28 14:35:51 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strlen;
	size_t	i;
	size_t	sub_len;
	char	*ret;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (start >= strlen)
		return (ft_strdup(""));
	sub_len = len;
	if (start + len > strlen)
		sub_len = strlen - start;
	ret = malloc(sub_len + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
