/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:07:36 by ahiguera          #+#    #+#             */
/*   Updated: 2025/06/13 12:02:52 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address of string:\t\t" << &str << std::endl
		<< "Address held by stringPTR:\t" << stringPTR << std::endl
		<< "Address held by stringREF:\t" << &stringREF << std::endl
		<< std::endl
		<< "Value of string:\t\t" << str << std::endl
		<< "Value pointed to by stringPTR:\t" << *stringPTR << std::endl
		<< "Value pointed to by stringREF:\t" << stringREF << std::endl;

	return (0);
}
