/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:32:50 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/12 12:02:22 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i;
	int j;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i+1])
			i++;
		while (argv[1][i] == 32 || argv[1][i] == 9)
			i--;
		j = i+1;
		while (argv[1][i] != 32 && argv[1][i] != 9 && i != 0)
			i--;
		while (i < j)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
