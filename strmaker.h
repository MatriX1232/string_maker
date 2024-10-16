/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmaker.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:47:29 by msolinsk          #+#    #+#             */
/*   Updated: 2024/10/16 14:32:40 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRMAKER_H
# define STRMAKER_H

# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

enum e_TYPE
{
	STRING,
	CHAR,
	INT,
	UNSIGNED_INT,
	HEX,
	HEX_UPPER,
	POINTER,
	PERCENT
};

char	*strmaker(char *dest, enum e_TYPE type, void *data, bool b_free);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);
char	*ft_strjoin_free(char const *s1, char const *s2, bool f1, bool f2);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_uitoa_base(size_t n, int base, bool upper);

#endif
