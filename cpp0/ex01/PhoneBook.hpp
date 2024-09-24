#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{

	public:

		PhoneBook();
		~PhoneBook();
		void add(void);
		void search(void);
		void info(void);

	private:

		int		index;
		Contact	contact[8];

};

#endif /* ******************************************************* PHONEBOOK_H */