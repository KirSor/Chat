#pragma once
#include <string>
#include <iostream>


	class Message
	{
		const std::string* _user;
		const std::string _text;

	public:
		Message() = default;
		Message(const std::string* user, const std::string text) :_user(user), _text(text) 
		{
			std::cout << *_user << ": " << _text << std::endl;
		};

		~Message()
		{
			std::cout << "Message was deleted" << std::endl;
		}
		friend std::ostream &operator<<(std::ostream &output, const Message &i)
		{
			output << i._user << ": " << i._text << std::endl;
			return output;
		}

	};

