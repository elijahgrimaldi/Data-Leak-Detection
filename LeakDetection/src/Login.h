#pragma once
#include <iostream>
#include <string>

namespace LDS {

	class Login {
	public:
		void GetLogin();
		void PrintInfo();
		std::string GetUsername();
		std::string GetPassword();
	private:
		std::string Username;
		std::string Password;

	};

}
