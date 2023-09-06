#include "Login.h"
#include "GCP\KeyManager.h"


int main() {
	
	LDS::Login* login = new LDS::Login();
	login->GetLogin();
	LDS::KeyManager* manager = new LDS::KeyManager();

}