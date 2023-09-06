#include "Login.h"

namespace LDS {

	void Login::GetLogin() {
		std::cout << "Enter Username ";
		std::cin >> this->Username;
		std::cout << "Enter Password ";
		std::cin >> this->Password;

	}
	void Login::PrintInfo() {
		std::cout << this->Username << std::endl;
		std::cout << this->Password;


	}

	std::string Login::GetUsername() {

	}
}