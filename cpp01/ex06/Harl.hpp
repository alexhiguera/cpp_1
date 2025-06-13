/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:07:36 by ahiguera          #+#    #+#             */
/*   Updated: 2025/06/13 12:04:01 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
	private:
		Harl(void);

		int							_filter;
		static const std::string	_levels[4];

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl(const std::string &);
		~Harl(void);

		void	complain(std::string);
};

#endif /* HARL_HPP */
