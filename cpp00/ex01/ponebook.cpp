/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponebook.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:02:46 by alex              #+#    #+#             */
/*   Updated: 2025/05/22 14:26:13 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_name(std::string str)
{
	unsigned int j;

	j = 0;
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		j = 0;
		while (j++ < 10 - str.length())
			std::cout << " ";
		std::cout << str;
	}
}


int 	PhoneBook::get_size() const
{
	return (this->size);
}

void	PhoneBook::add_contact(std::string data[5])
{
	int	index;

	index = this->index;
	this->contacts[index].set_firstname(data[0]);
	this->contacts[index].set_lastname(data[1]);
	this->contacts[index].set_nickname(data[2]);
	this->contacts[index].set_number(data[3]);
	this->contacts[index].set_secret(data[4]);
	this->index = (index + 1) % 8;

	if (this->size < 8)
		this->size++;
}

void	PhoneBook::display_contact(int i) const
{
	std::cout << CYAN << "+----------+----------+----------+----------+" << YELLOW << std::endl;
	std::cout << CYAN << "|  Contact information for specified index  |" << YELLOW << std::endl;
	std::cout << CYAN << "+----------+----------+----------+----------+" << YELLOW << std::endl;

	std::cout << "First Name: " << this->contacts[i].get_firstname() << std::endl;
	std::cout << "Last Name: " << this->contacts[i].get_lastname() << std::endl;
	std::cout << "Nickname: " << this->contacts[i].get_nickname() << std::endl;
	std::cout << "Number: " << this->contacts[i].get_number() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[i].get_secret() << std::endl;
}

void	PhoneBook::display_phonebook() const
{
	int i;

	i = 0;
	std::cout << CYAN << "+----------+----------+----------+----------+" << YELLOW << std::endl;
	std::cout << CYAN << "|     index|first name| last name|  nickname|" << YELLOW << std::endl;
	std::cout << CYAN << "+----------+----------+----------+----------+" << YELLOW << std::endl;
	while (i < this->size)
	{
		std::cout << CYAN << "|         " << YELLOW;
		std::cout << i;
		std::cout << CYAN << "|" << YELLOW;
		print_name(this->contacts[i].get_firstname());
		std::cout << CYAN << "|" << YELLOW;
		print_name(this->contacts[i].get_lastname());
		std::cout << CYAN << "|" << YELLOW;
		print_name(this->contacts[i].get_nickname());
		std::cout << CYAN << "|" << CYAN << std::endl;
		i++;
	}
	std::cout << CYAN << "+----------+----------+----------+----------+" << YELLOW << std::endl;
}