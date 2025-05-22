/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaohone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:13:15 by alex              #+#    #+#             */
/*   Updated: 2025/05/22 14:45:12 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, const char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str(argv[i]);
			for (size_t j = 0; j < str.length(); j++)
				std::cout << static_cast<char>(std::toupper(str[j]));
		}
	}
	else
		std::cout << "🚩 Insert only one argument!" << std::endl;
	std::cout << std::endl;
	return (0);
}
