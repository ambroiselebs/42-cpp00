/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:54:36 by aberenge          #+#    #+#             */
/*   Updated: 2025/02/10 14:08:57 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	if (argc < 2)
		return ((std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl), 1);
	i = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
		{
			c = toupper(argv[i][j]);
			std::cout << c;
		}
	}
	std::cout << std::endl;
	return (0);
}
