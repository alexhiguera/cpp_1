/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:07:36 by ahiguera          #+#    #+#             */
/*   Updated: 2025/06/13 12:01:42 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

/* We can use the newly created zombie everywhere */
void example(Zombie *zombor)
{
	zombor->announce();
}

/* This creates a copy (on the stack) of the passed in
 * Zombie instance, automatically deleted */
void example2(Zombie zombor)
{
	std::cout << "[DEBUG] Copy of Zombor:" << std::endl;
	zombor.announce();
}

int main(void)
{
	// Creating a zombie on the heap
	std::cout << "[DEBUG] -- Example 1: on the heap --" << std::endl;

	Zombie *zombor = newZombie("Zombor");
	example(zombor);
	std::cout << std::endl;

	std::cout << "[DEBUG] Creating a copy of zombor" << std::endl;
	example2(*zombor);
	std::cout << std::endl;

	// Manually delete what we're done using on the heap
	delete zombor;
	std::cout << std::endl;

	// Creating a zombie on the stack
	std::cout << "[DEBUG] -- Example 2: on the stack --" << std::endl;
	randomChump("Zombax");
	
	// Zombax is automatically deleted
	return (0);
}
