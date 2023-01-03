#pragma once
#include <string>
#include <iostream>
#include <list>
#include "Class_user.h"
#include "Message.h"


class Chat
{
	std::list<std::string> _user_in_chat;
	std::list<Message> _Messages;
	const std::string _name_chat;

public:
	Chat() = default;
	Chat(const std::string name_chat);
	~Chat()
	{
		std::cout << _name_chat << " was deleted" << std::endl;
	}
	void add_message(const std::string* user, const std::string text);
	Chat* add_user(std::string nik_name);
	void open_chat();
	void get_list_users();

	friend std::ostream& operator<<(std::ostream& output, const Chat& i)
	{
		output << i._name_chat << std::endl;
		return output;
	}



};

