/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:07:06 by ahiguera          #+#    #+#             */
/*   Updated: 2025/05/23 20:07:13 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
    std::cout << "[DEBUG] " << this->_name << " was created." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "[DEBUG] " << this->_name << " was destroyed." << std::endl;
}
