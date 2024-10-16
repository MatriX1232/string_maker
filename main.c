/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:25:02 by msolinsk          #+#    #+#             */
/*   Updated: 2024/10/16 14:43:45 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmaker.h"
#include <stdio.h>

int	main()
{
	char	*str = "Hello, World!";
	size_t	num = 42;

	str = strmaker(str, INT, &num, 0);
	str = strmaker(str, HEX, &num, 1);
	str = strmaker(str, PERCENT, NULL, 1);
	str = strmaker(str, POINTER, &num, 1);

	printf("%s\n", str);
	free(str);

	return (0);
}
