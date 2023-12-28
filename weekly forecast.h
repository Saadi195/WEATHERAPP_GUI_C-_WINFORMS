#pragma once

namespace WeatherCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for weeklyforecast
	/// </summary>
	public ref class weeklyforecast : public System::Windows::Forms::Form
	{
	public:
		weeklyforecast(void)
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
		~weeklyforecast()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;




	private: System::Windows::Forms::Label^ lbltemperature;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblWind;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblfeelslike;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::PictureBox^ pictureBox11;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(weeklyforecast::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblfeelslike = (gcnew System::Windows::Forms::Label());
			this->lblWind = (gcnew System::Windows::Forms::Label());
			this->lbltemperature = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->lblfeelslike);
			this->panel1->Controls->Add(this->lblWind);
			this->panel1->Controls->Add(this->lbltemperature);
			this->panel1->Location = System::Drawing::Point(35, 112);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(242, 338);
			this->panel1->TabIndex = 0;
			// 
			// lblfeelslike
			// 
			this->lblfeelslike->AutoSize = true;
			this->lblfeelslike->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblfeelslike->Location = System::Drawing::Point(43, 244);
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
			this->lblWind->Location = System::Drawing::Point(24, 216);
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
			this->lbltemperature->Location = System::Drawing::Point(74, 110);
			this->lbltemperature->Name = L"lbltemperature";
			this->lbltemperature->Size = System::Drawing::Size(167, 106);
			this->lbltemperature->TabIndex = 6;
			this->lbltemperature->Text = L"19°";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(328, 112);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(242, 338);
			this->panel2->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(51, 244);
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
			this->label3->Location = System::Drawing::Point(31, 216);
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
			this->label1->Location = System::Drawing::Point(73, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 106);
			this->label1->TabIndex = 6;
			this->label1->Text = L"19°";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(625, 112);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(242, 338);
			this->panel3->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(61, 244);
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
			this->label4->Location = System::Drawing::Point(37, 216);
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
			this->label2->Location = System::Drawing::Point(74, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 106);
			this->label2->TabIndex = 6;
			this->label2->Text = L"19°";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Location = System::Drawing::Point(903, 112);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(242, 338);
			this->panel4->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(61, 244);
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
			this->label8->Location = System::Drawing::Point(37, 216);
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
			this->label9->Location = System::Drawing::Point(74, 110);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(167, 106);
			this->label9->TabIndex = 6;
			this->label9->Text = L"19°";
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->BackColor = System::Drawing::Color::Transparent;
			this->label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->ForeColor = System::Drawing::Color::SeaShell;
			this->label->Location = System::Drawing::Point(30, 75);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(187, 31);
			this->label->TabIndex = 10;
			this->label->Text = L"Weekly Forecast";
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(35, 12);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(46, 46);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox11->TabIndex = 11;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &weeklyforecast::pictureBox11_Click);
			// 
			// weeklyforecast
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1157, 624);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->label);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"weeklyforecast";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"weeklyforecast";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
