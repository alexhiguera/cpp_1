/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:07:36 by ahiguera          #+#    #+#             */
/*   Updated: 2025/06/13 12:03:07 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		HumanB(void);

		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanB(std::string, Weapon&);
		HumanB(std::string);
		~HumanB(void);

		void	setWeapon(Weapon&);
		void	dropWeapon(void);
		void	attack(void)const;
};

#endif /* HUMAN_B_HPP */
