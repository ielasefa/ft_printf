/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:40:18 by iel-asef          #+#    #+#             */
/*   Updated: 2024/11/09 14:29:12 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	ft_count_words(char const *s, char sep)
{
	int	i;
	int	next;
	int	count;

	if (s[0] == '\0')
		return (0);
	i = 0;
	next = 1;
	count = 0;
	while (s[i])
	{
		if (!(s[i] == sep))
		{
			if (next)
			{
				count++;
				next = 0;
			}
		}
		else
			next = 1;
		i++;
	}
	return (count);
}

static char	**array_with_words(char **array, char const *str, char c)
{
	size_t	index;
	int		i;
	int		j;

	i = 0;
	index = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] == '\0')
			break ;
		j = i;
		while (str[i] != c && str[i])
			i++;
		array[index] = malloc(i - j + 1);
		if (!array[index])
		{
			ft_free(array, index);
			return (NULL);
		}
		ft_strlcpy(array[index++], str + j, i - j + 1);
	}
	array[index] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	array = malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	if (!array_with_words(array, s, c))
		return (NULL);
	return (array);
}
