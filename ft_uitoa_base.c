/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:16:22 by msolinsk          #+#    #+#             */
/*   Updated: 2024/10/16 14:44:45 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmaker.h"

unsigned int	ft_intlen(unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa_base(size_t n, int base, bool upper)
{
	char			*result;
	unsigned int	i;
	char			*hex;

	hex = "0123456789abcdef";
	if (upper)
		hex = "0123456789ABCDEF";
	i = ft_intlen(n);
	result = (char *)malloc((i + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (n)
	{
		result[i] = hex[n % base];
		n /= base;
		i++;
	}
	result[i] = '\0';
	return (result);
}
