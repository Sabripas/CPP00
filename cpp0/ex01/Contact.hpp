#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
  public:
	Contact();
	~Contact();
	std::string getFname(void);
	std::string getLname(void);
	std::string getNname(void);
	std::string getPhone(void);
	std::string getSecret(void);
	void setFname(std::string );
	void setLname(std::string s);
	void setNname(std::string s);
	void setPhone(std::string s);
	void setSecret(std::string s);

  private:
	std::string fname;
	std::string lname;
	std::string nname;
	std::string phone;
	std::string secret;
};

#endif /* ********************************************************* CONTACT_H */