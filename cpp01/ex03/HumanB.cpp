/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:07:36 by ahiguera          #+#    #+#             */
/*   Updated: 2025/06/13 12:03:04 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::dropWeapon(void)
{
	if (this->_weapon)
	{
		std::cout << this->_name << " dropped their " << this->_weapon->getType() << std::endl;
		this->_weapon = nullptr;
	}
	else
		std::cout << this->_name << " has no weapon!" << std::endl;
}

void	HumanB::attack(void) const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " throws a punch!" << std::endl;
}

HumanB::HumanB(std::string name, Weapon &weapon): _name(name), _weapon(&weapon)
{
	return ;
}

HumanB::HumanB(std::string name): _name(name), _weapon(nullptr)
{
	return ;
}

HumanB::HumanB(void): _name(""), _weapon(nullptr)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}
