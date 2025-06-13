/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:07:36 by ahiguera          #+#    #+#             */
/*   Updated: 2025/06/13 12:02:37 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie  *zombieHorde(int N, std::string name)
{
    int     i;
	Zombie	*zombie_horde = new Zombie[N];

	if (!zombie_horde)
	{
		std::cerr << "[DEBUG]: error: could not allocate a new horde of " << N << " zombie(s)" << std::endl;
		return (nullptr);
	}
    for (i = 0;i < N; i++)
        zombie_horde[i].setZombieName(name);
	return (zombie_horde);
}
