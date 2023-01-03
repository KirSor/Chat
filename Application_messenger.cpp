#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "Class_user.h"
#include "Chat.h"






int main()
{
	std::vector<Class_user> Users;
	std::list<Chat> Chats;

	//Init
		//Users.push_back(Class_user::Class_user(, &(pass_init->at(i)), &(real_init->at(i))));
		Users.push_back(Class_user::Class_user("User1", "U123", "Nikita"));
		Users.push_back(Class_user::Class_user("User2", "U234", "Maks"));
		Users.push_back(Class_user::Class_user("User3", "U345", "Liza"));
		Users.push_back(Class_user::Class_user("User4", "U456", "Anna"));
		Users.push_back(Class_user::Class_user("User5", "U567", "all"));
	
	/*
	switch (switch_on)
	{
	case '1':

	default:
		break;
	}

   */
}
