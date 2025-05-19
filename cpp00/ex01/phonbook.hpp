/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonbook.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:02:58 by alex              #+#    #+#             */
/*   Updated: 2025/05/20 00:51:32 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
private:
	Contact	contacts[8];
	int 	size;
	int 	index;
public:
	PhoneBook() : size (0), index (0) {}
	int 	get_size(void) const;
	void	add_contact(std::string data[5]);
	void	display_contact(int i) const;
	void	display_phonebook(void) const;
};