/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/28 14:34:25 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/28 14:34:25 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_local_2m(char **data)
{
	int	i;

	if (!data)
		return ;
	i = -1;
	while (data[++i])
		free(data[i]);
	free(data);
}

int	word_counter(char const *string_for_counter, char delimiter_for_counter)
{
	int	count;
	int	is_word;
	int	i;

	i = 0;
	is_word = 0;
	count = 0;
	while (string_for_counter[i] != '\0')
	{
		if ((string_for_counter[i] != delimiter_for_counter) && is_word == 0)
		{
			count++;
			is_word = 1;
		}
		else if ((string_for_counter[i] == delimiter_for_counter) && is_word)
			is_word = 0;
		i++;
	}
	return (count);
}

char	*split_words(char const *string, int start, int end)
{
	int		word_length;
	int		i;
	int		j;
	char	*mallocd_char;

	i = start;
	j = 0;
	word_length = end - start;
	mallocd_char = malloc((word_length + 1) * sizeof(char));
	while (i < end)
	{
		mallocd_char[j] = string[i];
		j++;
		i++;
	}
	mallocd_char[j] = '\0';
	return (mallocd_char);
}

char	**fill_string(char del, char **mallocd, int *s_n_e, char const *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != del)
		{
			s_n_e[0] = i;
			while (str[i] != '\0' && str[i] != del)
				i++;
			s_n_e[1] = i;
			mallocd[j] = split_words(str, s_n_e[0], s_n_e[1]);
			if (!mallocd[j])
				return (ft_free_local_2m(mallocd), NULL);
			j++;
		}
		else
			i++;
	}
	mallocd[j] = NULL;
	return (mallocd);
}

char	**ft_split(char const *string, char delimiter)
{
	int		start_n_end[2];
	int		word_count;
	char	**mallocd_string;

	start_n_end[0] = 0;
	start_n_end[1] = 0;
	word_count = word_counter(string, delimiter);
	mallocd_string = malloc((word_count + 1) * sizeof(char *));
	if (!mallocd_string)
		return (NULL);
	fill_string(delimiter, mallocd_string, start_n_end, string);
	return (mallocd_string);
}
