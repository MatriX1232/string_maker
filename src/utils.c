/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:52:27 by msolinsk          #+#    #+#             */
/*   Updated: 2024/10/16 14:14:28 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmaker.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory_block;
	size_t	i;

	if (nmemb >= 4294967295 || size >= 4294967295)
	{
		if (size != 0 && nmemb != 0)
			return (NULL);
	}
	memory_block = malloc(nmemb * size);
	if (memory_block == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		*(char *)(memory_block + i) = 0;
		i++;
	}
	return (memory_block);
}

char	*ft_strjoin_free(char const *s1, char const *s2, bool f1, bool f2)
{
	int		len1;
	int		len2;
	int		i;
	char	*str;

	len1 = 0;
	len2 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	str = (char *)ft_calloc((len1 + len2 + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (i++ < len1)
		str[i] = (char)s1[i];
	i = -1;
	while (i++ < len2)
		str[len1 + i] = (char)s2[i];
	if (f1)
		free((char *)s1);
	if (f2)
		free((char *)s2);
	return (str);
}
