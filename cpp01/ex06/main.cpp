/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:07:36 by ahiguera          #+#    #+#             */
/*   Updated: 2025/06/13 12:04:04 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

static void	test_complain(const char *filter)
{
	Harl	harl(filter);

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
}

int	main(int ac, const char **av)
{
	if (ac != 2)
	{
		std::cerr << "error: expected 1 filter argument: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}
	test_complain(av[1]);
	return (0);
}
