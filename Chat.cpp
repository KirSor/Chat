#include "Chat.h"
#include <string>
#include <list>

Chat::Chat(const std::string name_chat):_name_chat(name_chat)
{
	std::cout << _name_chat << " was created" << std::endl;
}

void Chat::add_message(const std::string* user, const std::string text)
{
	_Messages.push_back(Message::Message(user, text));
}

Chat* Chat::add_user(std::string nik_name)
{
	_user_in_chat.push_back(nik_name);
	std::cout << nik_name << " was added" << std::endl;
	return this;
}

void Chat::open_chat()
{
	for (auto num = _Messages.begin(); num != _Messages.end(); ++num)
	{
		std::cout << *num << std::endl;
	}
}

void Chat::get_list_users()
{
	for (auto num = _user_in_chat.begin(); num != _user_in_chat.end(); ++num)
	{
		std::cout << *num << std::endl;
	}
}
