#pragma once

#include <string>
#include "Chat.h"

class Class_user
{
	const std::string _nik_name;
	std::string _password;
	std::string _real_name;
	int _old=NULL;
	//std::list<Chat> _arr_chats;

public:

	Class_user() = default;
	Class_user(const std::string& nik_name, const std::string& password, const std::string& real_name) : _nik_name(nik_name), _password(password), _real_name(real_name)
	{
		std::cout << "User " << _nik_name << " was created" << std::endl;
	}

	//Class_user(std::string* nik_name, std::string* password, std::string* real_name) : _nik_name(*nik_name), _password(*password), _real_name(*real_name)
	//{
	//	std::cout << "User " << _nik_name << " was created" << std::endl;
	//}
	//void get_list_chats();

	friend std::ostream& operator<<(std::ostream& output, const Class_user& i)
	{
		output << "User name: " << i._nik_name << std::endl;
		output << "User real name: " << i._real_name << std::endl;
		output << "User old: " << i._old << std::endl;
		return output;
	}
};

