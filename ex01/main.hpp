#include <iostream>

class Contact
{
public:
	char	*first_name;
	char	*last_name;
	char	*nickname;
	char	*phone_number;
	char	*darkest_secret;
};

class PhoneBook
{
public:
	char	contacts[8][sizeof(Contact)];

	void	addContact(char *contact, char *contacts[])
	{
		if (contacts[7])
		{
			int	i = 0;
			while (contacts[i])
			{
				if (contacts[i - 1])
					contacts[i] = contacts[i - 1];
				i++;
			}
			contact = contacts[i];
		}
		else
		{
			int i = 0;
			while (contacts[i])
				i++;
			contacts[i] = contact;
		}
	}
};