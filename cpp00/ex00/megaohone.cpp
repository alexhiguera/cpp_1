/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaohone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:13:15 by alex              #+#    #+#             */
/*   Updated: 2024/10/03 12:54:23 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	cppPrintMsg(const std::string& msg)
{
	for (size_t i = 0; i < msg.length(); i++)
		std::cout << char(std::toupper(msg[i])) << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "🚩 Insert only one argument!" << std::endl;
		return (0);
	}
	for(int i = 1; i < argc; ++i)
        cppPrintMsg(std::string(argv[i]));
	std::cout << std::endl;
	return (0);
}
