/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:59:15 by msolinsk          #+#    #+#             */
/*   Updated: 2024/10/16 13:59:57 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmaker.h"

static char	*assign(int help, char *result, unsigned int n)
{
	int	i;

	i = 0;
	while (i++ < help)
	{
		result[help - i] = (n % 10) + '0';
		n /= 10;
	}
	result[help] = '\0';
	return (result);
}

char	*ft_uitoa(unsigned int n)
{
	unsigned int	help;
	char			*result;
	unsigned int	i;

	help = n;
	i = 1;
	while (help)
	{
		help /= 10;
		i++;
	}
	result = (char *)malloc((i + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	assign(i, result, n);
	return (result);
}
