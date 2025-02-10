/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:34:43 by aberenge          #+#    #+#             */
/*   Updated: 2025/02/10 16:56:18 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "class/Contact.class.hpp"
#include "class/PhoneBook.class.hpp"

void	add_contact(PhoneBook *PhoneBook)
{
	std::string	first_name, last_name, nickname, darkest_secret, phone_number;
	std::string	input;

	std::cout << "First name : ";
	std::getline(std::cin, input);
	first_name = input;
	std::cout << "Last name : ";
	std::getline(std::cin, input);
	last_name = input;
	std::cout << "Nickname : ";
	std::getline(std::cin, input);
	nickname = input;
	std::cout << "Darkest secret : ";
	std::getline(std::cin, input);
	darkest_secret = input;
	std::cout << "Phone Number : ";
	std::getline(std::cin, input);
	phone_number = input;

	Contact	new_contact(first_name, last_name, nickname, darkest_secret, phone_number);
	PhoneBook->add_contact(new_contact);
}

void	search_contact(PhoneBook *PhoneBook)
{
	std::string	input;
	int			pos;

	PhoneBook->print_all_contact();
	std::cout << "Index : ";
	std::getline(std::cin, input);
	std::istringstream iss(input);
	if (!(iss >> pos) || pos < 0)
	{
		std::cout << "Invalid index!" << std::endl;
		return;
	}

	if (pos > PhoneBook->pos)
	{
		if (PhoneBook->pos == -1)
			std::cout << "Invalid index, there are only " << PhoneBook->pos + 1 << " contact" << std::endl;
		else
			std::cout << "Invalid index, there are only " << PhoneBook->pos << " contact(s)" << std::endl;
		return;
	}
	std::cout << std::endl << "First name : " << PhoneBook->get_contact_with_index(pos).get_first_name() << std::endl;
	std::cout << "Last name : " << PhoneBook->get_contact_with_index(pos).get_last_name() << std::endl;
	std::cout << "Nickname : " << PhoneBook->get_contact_with_index(pos).get_nickname() << std::endl;
	std::cout << "Darkest secret : " << PhoneBook->get_contact_with_index(pos).get_darkest_secret() << std::endl;
	std::cout << "Phone number : " << PhoneBook->get_contact_with_index(pos).get_phone_number() << std::endl << std::endl;
}

int	main(void)
{
	std::string	input;
	PhoneBook	PhoneBook;

	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			add_contact(&PhoneBook);
		else if (input == "SEARCH")
			search_contact(&PhoneBook);
	}
}
