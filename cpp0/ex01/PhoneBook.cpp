#include "PhoneBook.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PhoneBook::PhoneBook()
{
	this->index = 0;
	std::cout << "Hey welcome to the Awesome PhoneBook, pls use ADD, SEARCH or EXIT " << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PhoneBook::~PhoneBook()
{
	std::cout << "bye, see you next time" << std::endl;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void PhoneBook::add(void)
{
	std::string	str;

	if (this->index > 7)
		std::cout << "Contact " << this->index%8 << " is going to be overwrite " << std::endl;
	str = "";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter first Name > ";
		if (std::getline(std::cin, str) && str != "")
			this->contact[this->index%8].setFname(str);
	}
	str = "";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter last Name > ";
		if (std::getline(std::cin, str) && str != "")
			this->contact[this->index%8].setLname(str);
	}
	str = "";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter Nickname > ";
		if (std::getline(std::cin, str) && str != "")
			this->contact[this->index%8].setNname(str);
	}
	str = "";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter Phone Number > ";
		if (std::getline(std::cin, str) && str != "")
			this->contact[this->index%8].setPhone(str);
	}
	str = "";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter Darkest Secret > ";
		if (std::getline(std::cin, str) && str != "")
			this->contact[this->index%8].setSecret(str);
	}
	this->index++;
	std::cout << "contact " << "successfully added to phonebook" << std::endl;
	return;
}

void shorted (std::string str)
{
	str.resize(10);
	str[str.size() - 1] = '.';
	std::cout << str << "|"; 
}

void PhoneBook::search(void)
{
	int ind;
	int len;
	int len_str;
	std::string str;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	ind = 0;
	while (ind < this->index && ind < 8)
	{
		std::cout << "|         " << ind << "|";
		len = 0;
		len_str = contact[ind].getFname().size();
		while (len_str < 10)
		{
			std::cout << " ";
			len_str++;
		}
		len_str = contact[ind].getFname().size();
		if (len_str < 10)
			std::cout << contact[ind].getFname() << "|";
		else
			shorted(contact[ind].getFname());
		len = 0;
		len_str = contact[ind].getLname().size();
		while (len_str < 10)
		{
			std::cout << " ";
			len_str++;
		}
		len_str = contact[ind].getLname().size();
		if (len_str <= 10)
			std::cout << contact[ind].getLname() << "|";
		else
			shorted(contact[ind].getLname());
		len = 0;
		len_str = contact[ind].getNname().size();
		while (len_str <= 10)
		{
			std::cout << " ";
			len_str++;
		}
		len_str = contact[ind].getNname().size();
		if (len_str <= 10)
			std::cout << contact[ind].getNname() << "|";
		else
			shorted(contact[ind].getNname());
		ind++;
		std::cout << std::endl << "---------------------------------------------" << std::endl;
	}
	return;
}

void	print_info(Contact contact)
{
	if (!(contact.getFname().size()))
	{
		std::cout << "Info not found" << std::endl;
		return;
	}
	std::cout << "First Name: " << contact.getFname() << std::endl;
	std::cout << "Last Name: " << contact.getLname() << std::endl;
	std::cout << "Nickname: " << contact.getNname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhone() << std::endl;
	std::cout << "Darkest Secret: " << contact.getSecret() << std::endl;
}

void PhoneBook::info(void)
{
	std::string str;

	std::cout << "Enter the needed user index" << std::endl;
	std::getline(std::cin, str);
	if (str.size() != 1 || str[0] < '0' || str[0] > '8')
		std::cout << "Wrong index" << std::endl;
	else
		print_info(this->contact[str[0] - '0']);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */