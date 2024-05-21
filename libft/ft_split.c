/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei.students.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:31:24 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/21 18:13:52 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c && *s)
			i++;
		while (*s && *s != c)
			s++;
		while (*s == c && *s)
			s++;
	}
	return (i);
}

static char	*whitespc(char *s, char c)
{
	if (s == NULL)
		return (s);
	while (*s == c)
		s++;
	return (s);
}

static char	*spliter(char *s, char c)
{
	char			*word;
	char			*swap;
	unsigned int	size;

	s = whitespc((char *)s, c);
	swap = (char *)s;
	swap = ft_strchr((char *)s, c);
	if (swap == NULL)
		size = ft_strlen((char *)s);
	else
		size = ft_strlen((char *)s) - ft_strlen(swap);
	word = (char *)malloc(size * sizeof(char) + 1);
	word[size] = '\0';
	if (word)
	{
		ft_strlcpy(word, (char *)s, size);
		return (word);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	char	word_count;
	int		i;

	word_count = count((char *)s, c);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	i = 0;
	if (words)
	{
		while (word_count > 0)
		{
			words[i] = spliter((char *)s, c);
			if (!words[i])
				break ;
			s = whitespc((char *)s, c) + ft_strlen(words[i]);
			i++;
			word_count--;
		}
		words[i] = NULL;
		return (words);
	}
	while (i--)
		free(words[i]);
	free(words);
	return (NULL);
}

int main()
{
	ft_split("ola bom dia a",' ');
}