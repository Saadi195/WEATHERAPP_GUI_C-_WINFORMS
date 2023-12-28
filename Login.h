#pragma once
#include <fstream>
#include <string>
#include <Windows.h>
#include <msclr\marshal_cppstd.h>
#include "Register.h"
#include "Home.h"

namespace WeatherCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtusername;
	private: System::Windows::Forms::TextBox^ txtpassword;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtusername = (gcnew System::Windows::Forms::TextBox());
			this->txtpassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Get Started";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// txtusername
			// 
			this->txtusername->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txtusername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtusername->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtusername->Location = System::Drawing::Point(20, 96);
			this->txtusername->Name = L"txtusername";
			this->txtusername->Size = System::Drawing::Size(251, 23);
			this->txtusername->TabIndex = 1;
			this->txtusername->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			// 
			// txtpassword
			// 
			this->txtpassword->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txtpassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtpassword->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtpassword->Location = System::Drawing::Point(20, 156);
			this->txtpassword->Name = L"txtpassword";
			this->txtpassword->PasswordChar = '*';
			this->txtpassword->Size = System::Drawing::Size(251, 23);
			this->txtpassword->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->label2->Location = System::Drawing::Point(16, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->label3->Location = System::Drawing::Point(16, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->ForeColor = System::Drawing::Color::Black;
			this->checkBox1->Location = System::Drawing::Point(130, 195);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(155, 27);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Show Password";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Login::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(20, 228);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(251, 57);
			this->button1->TabIndex = 6;
			this->button1->Text = L"LOGIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->label4->Location = System::Drawing::Point(90, 330);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Create Account";
			this->label4->Click += gcnew System::EventHandler(this, &Login::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(52, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(208, 23);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Do not have an Account\?";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->txtusername);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->txtpassword);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(606, 48);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(306, 396);
			this->panel1->TabIndex = 9;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(983, 497);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Register^ obj1 = gcnew Register(this);
		obj1->ShowDialog();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	// get the username and password from the text boxes
	std::string username = msclr::interop::marshal_as<std::string>(txtusername->Text);
	std::string password = msclr::interop::marshal_as<std::string>(txtpassword->Text);

	// check if the username and password are not empty
	if (username.empty() || password.empty())
	{
		MessageBox::Show("Please enter your username and password.", "Enter Credentials", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}

	// create a file name based on the username
	std::string fileName = username + ".txt";

	// open the file for reading
	std::ifstream file(fileName);

	// check if the file exists
	if (file.is_open())
	{
		// read the username and password from the file
		std::string fileUsername, filePassword;
		std::getline(file, fileUsername, ',');
		std::getline(file, filePassword, ',');

		// close the file
		file.close();

		// compare the username and password with the input
		if (fileUsername == username && filePassword == password)
		{
			// login successful
			MessageBox::Show("Welcome to Weather Sphere.", "Successfully Signed In", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Hide();
			Home^ home = gcnew Home();
			home->Show();

		}
		else
		{
			// login failed
			MessageBox::Show("Invalid username or password.", "Invalid Credentials", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else
	{
		// file not found
		MessageBox::Show("Username does not exist, Create an Account.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		// If checked, show the password as plain text
		txtpassword->PasswordChar = '\0';
	}
	else {
		// If not checked, hide the password with asterisks
		txtpassword->PasswordChar = '*';
	}
}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	String^ Username = txtusername->Text;
	Home^ home = gcnew Home();
	home->Show();
}
};
}
