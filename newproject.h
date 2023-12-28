#pragma once
#include <fstream>
#include <string>
#include <Windows.h>
#include <msclr\marshal_cppstd.h>
namespace WeatherCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for newproject
	/// </summary>
	public ref class newproject : public System::Windows::Forms::Form
	{
	public:
		newproject(void)
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
		~newproject()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	protected:
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblfeelslike;
	private: System::Windows::Forms::Label^ lblWind;
	private: System::Windows::Forms::Label^ lbltemperature;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ labelDate1;
	private: System::Windows::Forms::Label^ labelDate4;





	private: System::Windows::Forms::Label^ labelDate3;

	private: System::Windows::Forms::Label^ labelDate2;

	private: System::Windows::Forms::Timer^ update;
	private: System::Windows::Forms::Panel^ panel5;


	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(newproject::typeid));
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->labelDate4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelDate3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelDate2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblfeelslike = (gcnew System::Windows::Forms::Label());
			this->lblWind = (gcnew System::Windows::Forms::Label());
			this->lbltemperature = (gcnew System::Windows::Forms::Label());
			this->labelDate1 = (gcnew System::Windows::Forms::Label());
			this->update = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(12, 8);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(58, 46);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 17;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &newproject::pictureBox11_Click);
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->BackColor = System::Drawing::Color::Transparent;
			this->label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->ForeColor = System::Drawing::Color::SeaShell;
			this->label->Location = System::Drawing::Point(109, 16);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(209, 38);
			this->label->TabIndex = 16;
			this->label->Text = L"4 Day Forecast";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Location = System::Drawing::Point(896, 154);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(242, 338);
			this->panel4->TabIndex = 15;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(5, 60);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(117, 94);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(61, 282);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(142, 28);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Feels like: 20°";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(37, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(184, 28);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Wind Speed: 1m/s";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(74, 148);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(167, 106);
			this->label9->TabIndex = 6;
			this->label9->Text = L"16°";
			// 
			// labelDate4
			// 
			this->labelDate4->AutoSize = true;
			this->labelDate4->BackColor = System::Drawing::Color::Transparent;
			this->labelDate4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate4->ForeColor = System::Drawing::Color::White;
			this->labelDate4->Location = System::Drawing::Point(890, 94);
			this->labelDate4->Name = L"labelDate4";
			this->labelDate4->Size = System::Drawing::Size(187, 31);
			this->labelDate4->TabIndex = 22;
			this->labelDate4->Text = L"Weekly Forecast";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(612, 154);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(242, 338);
			this->panel3->TabIndex = 14;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(7, 61);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(117, 95);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(60, 283);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 28);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Feels like: 20°";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(36, 255);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(184, 28);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Wind Speed: 1m/s";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(73, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 106);
			this->label2->TabIndex = 6;
			this->label2->Text = L"15°";
			// 
			// labelDate3
			// 
			this->labelDate3->AutoSize = true;
			this->labelDate3->BackColor = System::Drawing::Color::Transparent;
			this->labelDate3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate3->ForeColor = System::Drawing::Color::White;
			this->labelDate3->Location = System::Drawing::Point(607, 93);
			this->labelDate3->Name = L"labelDate3";
			this->labelDate3->Size = System::Drawing::Size(187, 31);
			this->labelDate3->TabIndex = 22;
			this->labelDate3->Text = L"Weekly Forecast";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(316, 154);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(242, 338);
			this->panel2->TabIndex = 13;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 59);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(101, 95);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(50, 281);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 28);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Feels like: 20°";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(30, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 28);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Wind Speed: 1m/s";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(72, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 106);
			this->label1->TabIndex = 6;
			this->label1->Text = L"20°";
			// 
			// labelDate2
			// 
			this->labelDate2->AutoSize = true;
			this->labelDate2->BackColor = System::Drawing::Color::Transparent;
			this->labelDate2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate2->ForeColor = System::Drawing::Color::White;
			this->labelDate2->Location = System::Drawing::Point(311, 93);
			this->labelDate2->Name = L"labelDate2";
			this->labelDate2->Size = System::Drawing::Size(187, 31);
			this->labelDate2->TabIndex = 22;
			this->labelDate2->Text = L"Weekly Forecast";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->lblfeelslike);
			this->panel1->Controls->Add(this->lblWind);
			this->panel1->Controls->Add(this->lbltemperature);
			this->panel1->Location = System::Drawing::Point(24, 154);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(242, 338);
			this->panel1->TabIndex = 12;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 58);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(117, 95);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// lblfeelslike
			// 
			this->lblfeelslike->AutoSize = true;
			this->lblfeelslike->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblfeelslike->ForeColor = System::Drawing::Color::White;
			this->lblfeelslike->Location = System::Drawing::Point(43, 285);
			this->lblfeelslike->Name = L"lblfeelslike";
			this->lblfeelslike->Size = System::Drawing::Size(142, 28);
			this->lblfeelslike->TabIndex = 20;
			this->lblfeelslike->Text = L"Feels like: 20°";
			// 
			// lblWind
			// 
			this->lblWind->AutoSize = true;
			this->lblWind->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWind->ForeColor = System::Drawing::Color::White;
			this->lblWind->Location = System::Drawing::Point(24, 257);
			this->lblWind->Name = L"lblWind";
			this->lblWind->Size = System::Drawing::Size(184, 28);
			this->lblWind->TabIndex = 19;
			this->lblWind->Text = L"Wind Speed: 1m/s";
			// 
			// lbltemperature
			// 
			this->lbltemperature->AutoSize = true;
			this->lbltemperature->BackColor = System::Drawing::Color::Transparent;
			this->lbltemperature->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltemperature->ForeColor = System::Drawing::Color::White;
			this->lbltemperature->Location = System::Drawing::Point(74, 151);
			this->lbltemperature->Name = L"lbltemperature";
			this->lbltemperature->Size = System::Drawing::Size(167, 106);
			this->lbltemperature->TabIndex = 6;
			this->lbltemperature->Text = L"17°";
			// 
			// labelDate1
			// 
			this->labelDate1->AutoSize = true;
			this->labelDate1->BackColor = System::Drawing::Color::Transparent;
			this->labelDate1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate1->ForeColor = System::Drawing::Color::White;
			this->labelDate1->Location = System::Drawing::Point(19, 93);
			this->labelDate1->Name = L"labelDate1";
			this->labelDate1->Size = System::Drawing::Size(187, 31);
			this->labelDate1->TabIndex = 21;
			this->labelDate1->Text = L"Weekly Forecast";
			// 
			// update
			// 
			this->update->Interval = 1;
			this->update->Tick += gcnew System::EventHandler(this, &newproject::update_Tick);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->panel5->Controls->Add(this->label);
			this->panel5->Controls->Add(this->pictureBox11);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1182, 57);
			this->panel5->TabIndex = 23;
			// 
			// newproject
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 629);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->labelDate4);
			this->Controls->Add(this->labelDate3);
			this->Controls->Add(this->labelDate2);
			this->Controls->Add(this->labelDate1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"newproject";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Weekly Forecast";
			this->Load += gcnew System::EventHandler(this, &newproject::newproject_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void update_Tick(System::Object^ sender, System::EventArgs^ e) {
		UpdateDates();
	}
		   void UpdateDates()
		   {
			   // Get the current date
			   DateTime currentDate = DateTime::Now;

			   // Display the next 4 days' dates on labels
			   for (int i = 0; i < 4; ++i)
			   {
				   // Add one day to the current date
				   currentDate = currentDate.AddDays(1);

				   // Display the date in the desired format on the corresponding label
				   String^ dateString = currentDate.ToString(L"dddd,\n"" MMMM dd");
				   switch (i)
				   {
				   case 0:
					   labelDate1->Text = dateString;
					   break;
				   case 1:
					   labelDate2->Text = dateString;
					   break;
				   case 2:
					   labelDate3->Text = dateString;
					   break;
				   case 3:
					   labelDate4->Text = dateString;
					   break;
				   }
			   }
		   }
		

private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void newproject_Load(System::Object^ sender, System::EventArgs^ e) {
	update->Start();
}
};
}
