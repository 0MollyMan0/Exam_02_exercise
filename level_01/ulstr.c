/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:46:41 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/08 14:27:35 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	reverse_case(const char *s)
{
	int i;
	char c;
	
	i = 0;
	while (s[i])
	{
		c = s[i];
		if (c >= 'a' && c <= 'z')
			c -= 32;
		else if (c >= 'A' && c <= 'Z')
			c += 32;
		write(1, &c, 1);
		i++;
	}
}

int main(int argc, char const *argv[])
{
	if (argc == 2)
		reverse_case(argv[1]);
	write(1, "\n", 1);
	return (0);
}
