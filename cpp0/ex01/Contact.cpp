#include "Contact.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Contact::Contact()
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Contact::~Contact()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Contact::getFname()
{
	return (this->fname);
}

void	Contact::setFname(std::string fname)
{
	this->fname = fname;
}

std::string Contact::getLname()
{
	return (this->lname);
}

void	Contact::setLname(std::string lname)
{
	this->lname = lname;
}

std::string Contact::getNname()
{
	return (this->nname);
}

void	Contact::setNname(std::string nname)
{
	this->nname = nname;
}

std::string Contact::getPhone()
{
	return (this->phone);
}

void	Contact::setPhone(std::string phone)
{
	this->phone = phone;
}

std::string Contact::getSecret()
{
	return (this->secret);
}

void	Contact::setSecret(std::string secret)
{
	this->secret = secret;
}

/* ************************************************************************** */