#pragma once
#include "User.h"
namespace rentalLogin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User ^user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			lbId->Text = "" + user->id;
			lbName->Text = user->name;
			lbEmail->Text = user->email;
			lbPhone->Text = user->phone;
			lbAddress->Text = user->address;
			lbGender->Text = user->gender;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lbId;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::Label^ lbEmail;
	private: System::Windows::Forms::Label^ lbPhone;
	private: System::Windows::Forms::Label^ lbGender;
	private: System::Windows::Forms::Label^ lbAddress;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lbId = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->lbPhone = (gcnew System::Windows::Forms::Label());
			this->lbGender = (gcnew System::Windows::Forms::Label());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1006, 78);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Dashboard";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 38);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Profile";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Profile ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 32);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Email ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 290);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(200, 32);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Phone number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(35, 347);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(109, 32);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Gender";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(35, 402);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 32);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Address";
			// 
			// lbId
			// 
			this->lbId->Location = System::Drawing::Point(249, 136);
			this->lbId->Name = L"lbId";
			this->lbId->Size = System::Drawing::Size(354, 32);
			this->lbId->TabIndex = 8;
			this->lbId->Text = L"label9";
			// 
			// lbName
			// 
			this->lbName->Location = System::Drawing::Point(249, 188);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(354, 32);
			this->lbName->TabIndex = 9;
			this->lbName->Text = L"label10";
			// 
			// lbEmail
			// 
			this->lbEmail->Location = System::Drawing::Point(249, 236);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(354, 32);
			this->lbEmail->TabIndex = 10;
			this->lbEmail->Text = L"label11";
			// 
			// lbPhone
			// 
			this->lbPhone->Location = System::Drawing::Point(249, 290);
			this->lbPhone->Name = L"lbPhone";
			this->lbPhone->Size = System::Drawing::Size(354, 32);
			this->lbPhone->TabIndex = 11;
			this->lbPhone->Text = L"label12";
			// 
			// lbGender
			// 
			this->lbGender->Location = System::Drawing::Point(249, 347);
			this->lbGender->Name = L"lbGender";
			this->lbGender->Size = System::Drawing::Size(354, 32);
			this->lbGender->TabIndex = 12;
			this->lbGender->Text = L"label13";
			// 
			// lbAddress
			// 
			this->lbAddress->Location = System::Drawing::Point(249, 411);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(354, 32);
			this->lbAddress->TabIndex = 13;
			this->lbAddress->Text = L"label14";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 492);
			this->Controls->Add(this->lbAddress);
			this->Controls->Add(this->lbGender);
			this->Controls->Add(this->lbPhone);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->lbId);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
