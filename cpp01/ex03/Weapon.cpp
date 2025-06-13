/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:07:36 by ahiguera          #+#    #+#             */
/*   Updated: 2025/06/13 12:03:17 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string type): _type(type)
{
	return ;
}

const std::string	Weapon::getType(void)const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
	return ;
}
