/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 00:55:11 by columbux          #+#    #+#             */
/*   Updated: 2025/05/22 13:52:23 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	secret;
		std::string	number;
	public:
		const std::string&	get_firstname(void) const;
		const std::string&	get_lastname(void) const;
		const std::string&	get_nickname(void) const;
		const std::string&	get_secret(void) const;
		const std::string&	get_number(void) const;
		void				set_firstname(std::string firstname);
		void				set_lastname(std::string lastname);
		void				set_nickname(std::string nickname);
		void				set_secret(std::string secret);
		void				set_number(std::string number);
};

#endif