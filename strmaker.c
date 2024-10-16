/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmaker.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:45:24 by msolinsk          #+#    #+#             */
/*   Updated: 2024/10/16 14:43:51 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmaker.h"

char *strmaker(char *dest, enum e_TYPE type, void *data, bool b_free)
{
	char	*ret;

	if (type == STRING)
		ret = ft_strjoin_free(dest, (char *)data, b_free, 0);
	else if (type == CHAR)
		ret = ft_strjoin_free(dest, (char[]){*(char *)data, '\0'}, b_free, 0);
	else if (type == INT)
		ret = ft_strjoin_free(dest, ft_itoa(*(int *)data), b_free, 1);
	else if (type == UNSIGNED_INT)
		ret = ft_strjoin_free(dest, ft_uitoa(*(unsigned int *)data), b_free, 1);
	else if (type == HEX)
		ret = ft_strjoin_free(dest, ft_uitoa_base(*(unsigned int *)data, 16, 0), b_free, 1);
	else if (type == HEX_UPPER)
		ret = ft_strjoin_free(dest, ft_uitoa_base(*(unsigned int *)data, 16, 1), b_free, 1);
	else if (type == POINTER)
		ret = ft_strjoin_free(dest, ft_uitoa_base(*(unsigned long *)data, 16, 0), b_free, 1);
	else if (type == PERCENT)
		ret = ft_strjoin_free(dest, "%", b_free, 0);
	else
		ret = NULL;
	return (ret);
}
