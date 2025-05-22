/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:02:58 by alex              #+#    #+#             */
/*   Updated: 2025/05/22 14:28:31 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

/*█████████████████████████████ Colors ████████████████████████████████████████*/

# define DEF_COLOR 	"\033[0;39m"
# define GRAY 		"\033[0;90m"
# define RED 		"\033[0;91m"
# define GREEN 		"\033[0;92m"
# define YELLOW 	"\033[0;93m"
# define BLUE 		"\033[0;94m"
# define MAGENTA 	"\033[0;95m"
# define CYAN 		"\033[0;96m"
# define WHITE 		"\033[0;97m"

class PhoneBook {
	private:
		Contact	contacts[8];
		int 	size;
		int 	index;
	public:
		PhoneBook() : size (0), index (0) {}
		int 	get_size(void) const;
		void	add_contact(std::string data[5]);
		void	display_contact(int i) const;
		void	display_phonebook(void) const;
};

#endif