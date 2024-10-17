/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:03:05 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/17 13:31:13 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define GREEN "\033[32m" 
# define RED "\033[31m"
# define CYAN "\033[36m"
# define RESET "\033[0m"
# define MAGENTA "\033[35m"

# include <string>
# include <iostream>
# include <iomanip>
# include <cctype>
# include "contact.hpp"

class PhoneBook {

public:

	Contact contact[8];
	int		nb_contact;

	PhoneBook(void);
	~PhoneBook(void);

	void	display_contact(void);
	void	display_contact_sheet(int index);
	void	get_contact_sheet(void);
	void	add_contact(int i);
};

bool	is_digit(std::string str);

#endif