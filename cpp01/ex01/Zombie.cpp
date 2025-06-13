/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:07:36 by ahiguera          #+#    #+#             */
/*   Updated: 2025/06/13 12:02:31 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void    Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombieName(std::string name)
{
	this->_name = name;	
}

Zombie::Zombie(std::string name): _name(name)
{
    std::cout << "[DEBUG] " << this->_name << " was created." << std::endl;
}

Zombie::Zombie(void)
{
    std::cout << "[DEBUG] A new unnamed zombie was created." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "[DEBUG] " << this->_name << " was destroyed." << std::endl;
}
