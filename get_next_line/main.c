/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 00:20:50 by tlufulua          #+#    #+#             */
/*   Updated: 2021/09/10 00:20:54 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <stdlib.h>

int	main()
{
	char	*line;
	int		gnl;

	line = get_next_line(0);
	printf("line: %s\n", line);
	if (*line)
		free(line);
	system("leaks a.out");
	return (0);
}
