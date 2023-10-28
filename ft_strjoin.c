/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/28 16:46:06 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/28 16:46:06 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*res;
	int		i;
	int		j;

	i = -1;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = malloc(len_s1 + len_s2 + 1);
	if (!s1 || !s2 || !res)
		return (NULL);
	while (++i < len_s1)
		res[i] = s1[i];
	while (j < len_s2)
		res[i++] = s2[j++];
	res[i] = '\0';
	return (res);
}
