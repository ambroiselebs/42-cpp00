/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:46:06 by aberenge          #+#    #+#             */
/*   Updated: 2025/02/10 16:18:35 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

# define MAX_CONTACT 8

class PhoneBook
{
	private:
		Contact	contacts[MAX_CONTACT];
	public:
		PhoneBook(void);
		~PhoneBook(void);

		int		pos;

		Contact	*get_all_contact(void);
		Contact	get_contact_with_index(int i);
		void	print_all_contact(void);

		void	add_contact(Contact contact);
};

#endif
