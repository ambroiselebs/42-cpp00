/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:48:32 by aberenge          #+#    #+#             */
/*   Updated: 2025/02/10 16:59:57 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <iomanip>

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}



PhoneBook::PhoneBook(void)
{
	this->pos = -1;
}

PhoneBook::~PhoneBook(void) {}


Contact	*PhoneBook::get_all_contact(void)
{
	return (this->contacts);
}

Contact	PhoneBook::get_contact_with_index(int i)
{
	return (this->contacts[i]);
}

void	PhoneBook::print_all_contact(void)
{
	int	i;

	if (this->pos == -1)
	{
		std::cout << "PhoneBook is empty." << std::endl;
		return;
	}
	i  = -1;
	while (++i < this->pos)
	{
		std::cout	<< std::setw(10) << i << " | "
					<< std::setw(10) << truncate(this->contacts[i].get_first_name()) << " | "
					<< std::setw(10) << truncate(this->contacts[i].get_last_name()) << " | "
					<< std::setw(10) << truncate(this->contacts[i].get_nickname()) << std::endl;
	}
}


void PhoneBook::add_contact(Contact contact)
{
	if (this->pos == -1)
		this->pos = 0;
	if (this->pos >= MAX_CONTACT)
	{
		std::cout << "Max contact, replacing the last one" << std::endl;
		for (int i = 1; i < MAX_CONTACT; i++)
			this->contacts[i - 1] = this->contacts[i];
		this->contacts[MAX_CONTACT - 1] = contact;
	}
	else
	{
		this->contacts[this->pos] = contact;
		this->pos++;
	}
}
