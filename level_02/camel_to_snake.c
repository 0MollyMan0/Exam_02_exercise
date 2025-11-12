/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:32:26 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/12 09:47:33 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i;
	(void)argc;
	char c;

	i = 0;
	while (argv[1][i])
	{
		c = argv[1][i];
		if (c >= 'A' && c <= 'Z')
		{
			c += 32;
			write(1, "_", 1);
			write(1, &c, 1);
		}
		else
			write(1, &c, 1);
		i++;
	}
	return 0;
}
