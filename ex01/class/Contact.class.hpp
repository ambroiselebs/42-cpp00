/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:26:22 by aberenge          #+#    #+#             */
/*   Updated: 2025/02/10 15:34:28 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class	Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		std::string	phone_number;

	public:
		Contact(void);
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, std::string phone_number);
		~Contact(void);

		std::string	get_first_name() const;
		std::string	get_last_name() const;
		std::string	get_nickname() const;
		std::string	get_darkest_secret() const;
		std::string	get_phone_number() const;

		void		set_first_name(std::string first_name);
		void		set_last_name(std::string last_name);
		void		set_nickname(std::string nickname);
		void		set_darkest_secret(std::string darkest_secret);
		void		set_phone_number(std::string phone_number);
};

#endif
