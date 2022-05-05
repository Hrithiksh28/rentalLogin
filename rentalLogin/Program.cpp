
#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	User^ user = nullptr;
	while (true) {
		rentalLogin::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			rentalLogin::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
	}

	if (user != nullptr) {
		rentalLogin::MainForm mainForm(user);
		Application::Run(% mainForm);
		//MessageBox::Show("Authentication Successful",
			//"Program.cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}
