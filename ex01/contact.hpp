/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:40:14 by mkadri            #+#    #+#             */
/*   Updated: 2024/10/17 13:30:38 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {

private: 

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

public:

	Contact(void);
	~Contact(void);

	void		setFirstName(std::string input);
	std::string	getFirstName(void) const;

	void		setLastName(std::string input);
	std::string	getLastName(void) const;

	void		setNickname(std::string input);
	std::string	getNickname(void) const;

	void		setPhoneNumber(std::string input);
	std::string	getPhoneNumber(void) const;

	void		setDarkestSecret(std::string input);
	std::string	getDarkestSecret(void) const;


};

#endif