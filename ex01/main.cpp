/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:49:25 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/17 13:28:45 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool	is_digit(std::string str) {

	for (int i = 0; str[i]; i++) {
		if (!std::isdigit(str[i])) {
			return false;
			break ;
		}
	}
	return (true);
}

int	main(void) {

	PhoneBook	phonebook;
	std::string	input;
	int			index = 0;
	phonebook.nb_contact = 0;
	bool		check_entry = true;
	

	std::cout << std::endl << CYAN << "HELLO FRIEND ! WELCOME TO YOUR AWESOME PHONEBOOK" << RESET 
				<< std::endl << std::endl;
	while (input.compare("EXIT") != 0 && check_entry) {
		std::cout << MAGENTA << "Please enter a command (ADD, SEARCH or EXIT) : " << RESET;
		std::getline(std::cin, input);
		
		if (std::cin.fail()) {
			check_entry = false;
			std::cout << "Error : entry is closed. Please relaunch your phonebook" << std::endl;
		}
		if (input.compare("ADD") == 0) {
			if (phonebook.nb_contact < 8)
				phonebook.nb_contact++;
			phonebook.add_contact(index % 8);
			index++;
		}
		else if (input.compare("SEARCH") == 0) {
			phonebook.display_contact();
		}
	}
	return (0);
}