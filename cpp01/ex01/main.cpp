/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:07:36 by ahiguera          #+#    #+#             */
/*   Updated: 2025/06/13 12:02:25 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie  *zombieHorde(int N, std::string name);

static void	create_zombie_horde(int N, std::string name)
{
	int		i;
	Zombie	*horde;

    horde = zombieHorde(N, name);
	if (!horde)
		return ;
	for (i = 0; i < N; i++)
		horde[i].announce();

	delete [] horde;
}

int main(void)
{
	create_zombie_horde(1, "1 zombie");
	create_zombie_horde(5, "5 zombies");
	create_zombie_horde(10, "10 zombies");
	create_zombie_horde(0, "0 zombies");
	create_zombie_horde(2, "2 zombies");
    return (0);
}
