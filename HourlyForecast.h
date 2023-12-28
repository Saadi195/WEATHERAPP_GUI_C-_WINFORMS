#pragma once

namespace WeatherCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HourlyForecast
	/// </summary>
	public ref class HourlyForecast : public System::Windows::Forms::Form
	{

        HourlyForecast(String^ receivedData)
        {
         
        }
   
    public:
        HourlyForecast(void)
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
		~HourlyForecast()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Panel^ panel1;
    protected:
    private: System::Windows::Forms::Panel^ panel12;
    private: System::Windows::Forms::Label^ label194;
    private: System::Windows::Forms::Label^ label185;
    private: System::Windows::Forms::Label^ label95;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Panel^ panel11;
    private: System::Windows::Forms::Label^ label86;
    private: System::Windows::Forms::Label^ label94;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Panel^ panel10;
    private: System::Windows::Forms::Label^ label77;
    private: System::Windows::Forms::Label^ label85;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Panel^ panel9;
    private: System::Windows::Forms::Label^ label70;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::Panel^ panel8;
    private: System::Windows::Forms::Label^ label59;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::Label^ label58;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::PictureBox^ pictureBox6;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label130;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label121;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::PictureBox^ pictureBox9;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Label^ label112;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::PictureBox^ pictureBox10;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Timer^ date_timer;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Label^ label;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label157;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label49;
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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HourlyForecast::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label194 = (gcnew System::Windows::Forms::Label());
            this->label95 = (gcnew System::Windows::Forms::Label());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->label94 = (gcnew System::Windows::Forms::Label());
            this->label185 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->label85 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label86 = (gcnew System::Windows::Forms::Label());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->label70 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->label77 = (gcnew System::Windows::Forms::Label());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->label157 = (gcnew System::Windows::Forms::Label());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label130 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label121 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label112 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->date_timer = (gcnew System::Windows::Forms::Timer(this->components));
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->label = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->panel12->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->panel11->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->panel8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->panel7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            this->panel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            this->panel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Transparent;
            this->panel1->Controls->Add(this->panel12);
            this->panel1->Controls->Add(this->panel11);
            this->panel1->Controls->Add(this->panel10);
            this->panel1->Controls->Add(this->panel9);
            this->panel1->Controls->Add(this->panel8);
            this->panel1->Controls->Add(this->panel7);
            this->panel1->Controls->Add(this->panel6);
            this->panel1->Controls->Add(this->panel5);
            this->panel1->Controls->Add(this->panel4);
            this->panel1->Controls->Add(this->panel3);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Location = System::Drawing::Point(104, 92);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(469, 424);
            this->panel1->TabIndex = 1;
            // 
            // panel12
            // 
            this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel12->Controls->Add(this->label15);
            this->panel12->Controls->Add(this->label194);
            this->panel12->Controls->Add(this->label95);
            this->panel12->Controls->Add(this->pictureBox3);
            this->panel12->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel12->Location = System::Drawing::Point(0, 425);
            this->panel12->Margin = System::Windows::Forms::Padding(0);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(469, 50);
            this->panel12->TabIndex = 10;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->BackColor = System::Drawing::Color::Transparent;
            this->label15->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::White;
            this->label15->Location = System::Drawing::Point(392, 10);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(45, 23);
            this->label15->TabIndex = 23;
            this->label15->Text = L"76%";
            // 
            // label194
            // 
            this->label194->AutoSize = true;
            this->label194->BackColor = System::Drawing::Color::Transparent;
            this->label194->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label194->ForeColor = System::Drawing::Color::White;
            this->label194->Location = System::Drawing::Point(16, 14);
            this->label194->Name = L"label194";
            this->label194->Size = System::Drawing::Size(72, 23);
            this->label194->TabIndex = 22;
            this->label194->Text = L"9:00pm";
            // 
            // label95
            // 
            this->label95->AutoSize = true;
            this->label95->BackColor = System::Drawing::Color::Transparent;
            this->label95->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label95->ForeColor = System::Drawing::Color::White;
            this->label95->Location = System::Drawing::Point(209, 10);
            this->label95->Name = L"label95";
            this->label95->Size = System::Drawing::Size(47, 23);
            this->label95->TabIndex = 4;
            this->label95->Text = L"19°C";
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(118, 1);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(49, 43);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox3->TabIndex = 1;
            this->pictureBox3->TabStop = false;
            // 
            // panel11
            // 
            this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel11->Controls->Add(this->label94);
            this->panel11->Controls->Add(this->label185);
            this->panel11->Controls->Add(this->label13);
            this->panel11->Controls->Add(this->pictureBox2);
            this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel11->Location = System::Drawing::Point(0, 382);
            this->panel11->Margin = System::Windows::Forms::Padding(0);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(469, 43);
            this->panel11->TabIndex = 9;
            // 
            // label94
            // 
            this->label94->AutoSize = true;
            this->label94->BackColor = System::Drawing::Color::Transparent;
            this->label94->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label94->ForeColor = System::Drawing::Color::White;
            this->label94->Location = System::Drawing::Point(391, 7);
            this->label94->Name = L"label94";
            this->label94->Size = System::Drawing::Size(45, 23);
            this->label94->TabIndex = 12;
            this->label94->Text = L"73%";
            // 
            // label185
            // 
            this->label185->AutoSize = true;
            this->label185->BackColor = System::Drawing::Color::Transparent;
            this->label185->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label185->ForeColor = System::Drawing::Color::White;
            this->label185->Location = System::Drawing::Point(209, 7);
            this->label185->Name = L"label185";
            this->label185->Size = System::Drawing::Size(47, 23);
            this->label185->TabIndex = 13;
            this->label185->Text = L"19°C";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->BackColor = System::Drawing::Color::Transparent;
            this->label13->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::White;
            this->label13->Location = System::Drawing::Point(16, 7);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(72, 23);
            this->label13->TabIndex = 3;
            this->label13->Text = L"8:00pm";
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(119, -2);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(49, 43);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox2->TabIndex = 1;
            this->pictureBox2->TabStop = false;
            // 
            // panel10
            // 
            this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel10->Controls->Add(this->label85);
            this->panel10->Controls->Add(this->label12);
            this->panel10->Controls->Add(this->label11);
            this->panel10->Controls->Add(this->pictureBox1);
            this->panel10->Controls->Add(this->label86);
            this->panel10->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel10->Location = System::Drawing::Point(0, 339);
            this->panel10->Margin = System::Windows::Forms::Padding(0);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(469, 43);
            this->panel10->TabIndex = 8;
            // 
            // label85
            // 
            this->label85->AutoSize = true;
            this->label85->BackColor = System::Drawing::Color::Transparent;
            this->label85->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label85->ForeColor = System::Drawing::Color::White;
            this->label85->Location = System::Drawing::Point(391, 8);
            this->label85->Name = L"label85";
            this->label85->Size = System::Drawing::Size(45, 23);
            this->label85->TabIndex = 12;
            this->label85->Text = L"69%";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::Transparent;
            this->label12->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::White;
            this->label12->Location = System::Drawing::Point(16, 7);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(72, 23);
            this->label12->TabIndex = 3;
            this->label12->Text = L"7:00pm";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::Transparent;
            this->label11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::White;
            this->label11->Location = System::Drawing::Point(20, 8);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(0, 23);
            this->label11->TabIndex = 3;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(119, -2);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(49, 43);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // label86
            // 
            this->label86->AutoSize = true;
            this->label86->BackColor = System::Drawing::Color::Transparent;
            this->label86->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label86->ForeColor = System::Drawing::Color::White;
            this->label86->Location = System::Drawing::Point(209, 8);
            this->label86->Name = L"label86";
            this->label86->Size = System::Drawing::Size(47, 23);
            this->label86->TabIndex = 4;
            this->label86->Text = L"19°C";
            // 
            // panel9
            // 
            this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel9->Controls->Add(this->label70);
            this->panel9->Controls->Add(this->label10);
            this->panel9->Controls->Add(this->pictureBox4);
            this->panel9->Controls->Add(this->label77);
            this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel9->Location = System::Drawing::Point(0, 296);
            this->panel9->Margin = System::Windows::Forms::Padding(0);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(469, 43);
            this->panel9->TabIndex = 7;
            // 
            // label70
            // 
            this->label70->AutoSize = true;
            this->label70->BackColor = System::Drawing::Color::Transparent;
            this->label70->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label70->ForeColor = System::Drawing::Color::White;
            this->label70->Location = System::Drawing::Point(391, 7);
            this->label70->Name = L"label70";
            this->label70->Size = System::Drawing::Size(45, 23);
            this->label70->TabIndex = 6;
            this->label70->Text = L"68%";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::Transparent;
            this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::White;
            this->label10->Location = System::Drawing::Point(18, 8);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(72, 23);
            this->label10->TabIndex = 3;
            this->label10->Text = L"6:00pm";
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(119, -1);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(49, 43);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox4->TabIndex = 1;
            this->pictureBox4->TabStop = false;
            // 
            // label77
            // 
            this->label77->AutoSize = true;
            this->label77->BackColor = System::Drawing::Color::Transparent;
            this->label77->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label77->ForeColor = System::Drawing::Color::White;
            this->label77->Location = System::Drawing::Point(209, 8);
            this->label77->Name = L"label77";
            this->label77->Size = System::Drawing::Size(47, 23);
            this->label77->TabIndex = 4;
            this->label77->Text = L"19°C";
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel8->Controls->Add(this->label157);
            this->panel8->Controls->Add(this->label59);
            this->panel8->Controls->Add(this->label9);
            this->panel8->Controls->Add(this->pictureBox5);
            this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel8->Location = System::Drawing::Point(0, 253);
            this->panel8->Margin = System::Windows::Forms::Padding(0);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(469, 43);
            this->panel8->TabIndex = 6;
            // 
            // label157
            // 
            this->label157->AutoSize = true;
            this->label157->BackColor = System::Drawing::Color::Transparent;
            this->label157->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label157->ForeColor = System::Drawing::Color::White;
            this->label157->Location = System::Drawing::Point(391, 10);
            this->label157->Name = L"label157";
            this->label157->Size = System::Drawing::Size(45, 23);
            this->label157->TabIndex = 21;
            this->label157->Text = L"71%";
            // 
            // label59
            // 
            this->label59->AutoSize = true;
            this->label59->BackColor = System::Drawing::Color::Transparent;
            this->label59->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label59->ForeColor = System::Drawing::Color::White;
            this->label59->Location = System::Drawing::Point(209, 7);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(47, 23);
            this->label59->TabIndex = 4;
            this->label59->Text = L"21°C";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::White;
            this->label9->Location = System::Drawing::Point(18, 8);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(72, 23);
            this->label9->TabIndex = 3;
            this->label9->Text = L"5:00pm";
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(119, 0);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(49, 43);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox5->TabIndex = 1;
            this->pictureBox5->TabStop = false;
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel7->Controls->Add(this->label54);
            this->panel7->Controls->Add(this->label58);
            this->panel7->Controls->Add(this->label8);
            this->panel7->Controls->Add(this->pictureBox6);
            this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel7->Location = System::Drawing::Point(0, 210);
            this->panel7->Margin = System::Windows::Forms::Padding(0);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(469, 43);
            this->panel7->TabIndex = 5;
            // 
            // label54
            // 
            this->label54->AutoSize = true;
            this->label54->BackColor = System::Drawing::Color::Transparent;
            this->label54->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label54->ForeColor = System::Drawing::Color::White;
            this->label54->Location = System::Drawing::Point(391, 7);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(45, 23);
            this->label54->TabIndex = 8;
            this->label54->Text = L"60%";
            // 
            // label58
            // 
            this->label58->AutoSize = true;
            this->label58->BackColor = System::Drawing::Color::Transparent;
            this->label58->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label58->ForeColor = System::Drawing::Color::White;
            this->label58->Location = System::Drawing::Point(209, 10);
            this->label58->Name = L"label58";
            this->label58->Size = System::Drawing::Size(47, 23);
            this->label58->TabIndex = 12;
            this->label58->Text = L"21°C";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::White;
            this->label8->Location = System::Drawing::Point(18, 8);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(72, 23);
            this->label8->TabIndex = 3;
            this->label8->Text = L"4:00pm";
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(119, 2);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(49, 43);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox6->TabIndex = 1;
            this->pictureBox6->TabStop = false;
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel6->Controls->Add(this->label41);
            this->panel6->Controls->Add(this->label49);
            this->panel6->Controls->Add(this->label7);
            this->panel6->Controls->Add(this->pictureBox7);
            this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel6->Location = System::Drawing::Point(0, 167);
            this->panel6->Margin = System::Windows::Forms::Padding(0);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(469, 43);
            this->panel6->TabIndex = 4;
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->BackColor = System::Drawing::Color::Transparent;
            this->label41->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->ForeColor = System::Drawing::Color::White;
            this->label41->Location = System::Drawing::Point(209, 8);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(47, 23);
            this->label41->TabIndex = 4;
            this->label41->Text = L"22°C";
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->BackColor = System::Drawing::Color::Transparent;
            this->label49->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->ForeColor = System::Drawing::Color::White;
            this->label49->Location = System::Drawing::Point(391, 8);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(45, 23);
            this->label49->TabIndex = 12;
            this->label49->Text = L"63%";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::White;
            this->label7->Location = System::Drawing::Point(18, 8);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(72, 23);
            this->label7->TabIndex = 3;
            this->label7->Text = L"3:00pm";
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(118, 0);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(49, 43);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox7->TabIndex = 1;
            this->pictureBox7->TabStop = false;
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel5->Controls->Add(this->label32);
            this->panel5->Controls->Add(this->label130);
            this->panel5->Controls->Add(this->label6);
            this->panel5->Controls->Add(this->pictureBox8);
            this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel5->Location = System::Drawing::Point(0, 124);
            this->panel5->Margin = System::Windows::Forms::Padding(0);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(469, 43);
            this->panel5->TabIndex = 3;
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->BackColor = System::Drawing::Color::Transparent;
            this->label32->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->ForeColor = System::Drawing::Color::White;
            this->label32->Location = System::Drawing::Point(209, 10);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(47, 23);
            this->label32->TabIndex = 4;
            this->label32->Text = L"22°C";
            // 
            // label130
            // 
            this->label130->AutoSize = true;
            this->label130->BackColor = System::Drawing::Color::Transparent;
            this->label130->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label130->ForeColor = System::Drawing::Color::White;
            this->label130->Location = System::Drawing::Point(391, 10);
            this->label130->Name = L"label130";
            this->label130->Size = System::Drawing::Size(45, 23);
            this->label130->TabIndex = 39;
            this->label130->Text = L"61%";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(18, 8);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(72, 23);
            this->label6->TabIndex = 3;
            this->label6->Text = L"2:00pm";
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(118, 1);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(49, 43);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox8->TabIndex = 1;
            this->pictureBox8->TabStop = false;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Controls->Add(this->label23);
            this->panel4->Controls->Add(this->label121);
            this->panel4->Controls->Add(this->label5);
            this->panel4->Controls->Add(this->pictureBox9);
            this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel4->Location = System::Drawing::Point(0, 81);
            this->panel4->Margin = System::Windows::Forms::Padding(0);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(469, 43);
            this->panel4->TabIndex = 2;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->BackColor = System::Drawing::Color::Transparent;
            this->label23->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::Color::White;
            this->label23->Location = System::Drawing::Point(209, 10);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(47, 23);
            this->label23->TabIndex = 4;
            this->label23->Text = L"24°C";
            // 
            // label121
            // 
            this->label121->AutoSize = true;
            this->label121->BackColor = System::Drawing::Color::Transparent;
            this->label121->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label121->ForeColor = System::Drawing::Color::White;
            this->label121->Location = System::Drawing::Point(391, 10);
            this->label121->Name = L"label121";
            this->label121->Size = System::Drawing::Size(45, 23);
            this->label121->TabIndex = 30;
            this->label121->Text = L"61%";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(18, 8);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(72, 23);
            this->label5->TabIndex = 3;
            this->label5->Text = L"1:00pm";
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(117, -1);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(49, 43);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox9->TabIndex = 1;
            this->pictureBox9->TabStop = false;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Controls->Add(this->label112);
            this->panel3->Controls->Add(this->label14);
            this->panel3->Controls->Add(this->label4);
            this->panel3->Controls->Add(this->pictureBox10);
            this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel3->Location = System::Drawing::Point(0, 38);
            this->panel3->Margin = System::Windows::Forms::Padding(0);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(469, 43);
            this->panel3->TabIndex = 1;
            // 
            // label112
            // 
            this->label112->AutoSize = true;
            this->label112->BackColor = System::Drawing::Color::Transparent;
            this->label112->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label112->ForeColor = System::Drawing::Color::White;
            this->label112->Location = System::Drawing::Point(391, 7);
            this->label112->Name = L"label112";
            this->label112->Size = System::Drawing::Size(45, 23);
            this->label112->TabIndex = 21;
            this->label112->Text = L"65%";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->BackColor = System::Drawing::Color::Transparent;
            this->label14->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::White;
            this->label14->Location = System::Drawing::Point(209, 6);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(47, 23);
            this->label14->TabIndex = 4;
            this->label14->Text = L"23°C";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(18, 8);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(82, 23);
            this->label4->TabIndex = 2;
            this->label4->Text = L"12:00pm";
            // 
            // pictureBox10
            // 
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(116, 0);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(49, 43);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox10->TabIndex = 1;
            this->pictureBox10->TabStop = false;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::White;
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel2->Controls->Add(this->label3);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Margin = System::Windows::Forms::Padding(0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(469, 38);
            this->panel2->TabIndex = 0;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(367, 4);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(100, 28);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Humidity";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(185, 4);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(91, 28);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Forecast";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(17, 4);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(59, 28);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Time";
            // 
            // date_timer
            // 
            this->date_timer->Interval = 1;
            // 
            // pictureBox11
            // 
            this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
            this->pictureBox11->Location = System::Drawing::Point(29, 11);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(46, 46);
            this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox11->TabIndex = 4;
            this->pictureBox11->TabStop = false;
            this->pictureBox11->Click += gcnew System::EventHandler(this, &HourlyForecast::pictureBox11_Click);
            // 
            // label
            // 
            this->label->AutoSize = true;
            this->label->BackColor = System::Drawing::Color::Transparent;
            this->label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label->ForeColor = System::Drawing::Color::SeaShell;
            this->label->Location = System::Drawing::Point(102, 58);
            this->label->Name = L"label";
            this->label->Size = System::Drawing::Size(183, 31);
            this->label->TabIndex = 10;
            this->label->Text = L"Hourly Forecast";
            // 
            // HourlyForecast
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(664, 548);
            this->Controls->Add(this->label);
            this->Controls->Add(this->pictureBox11);
            this->Controls->Add(this->panel1);
            this->DoubleBuffered = true;
            this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Name = L"HourlyForecast";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"HourlyForecast";
            this->Load += gcnew System::EventHandler(this, &HourlyForecast::HourlyForecast_Load);
            this->panel1->ResumeLayout(false);
            this->panel12->ResumeLayout(false);
            this->panel12->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->panel11->ResumeLayout(false);
            this->panel11->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel9->ResumeLayout(false);
            this->panel9->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
       

private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    
}

private: System::Void HourlyForecast_Load(System::Object^ sender, System::EventArgs^ e) {
    date_timer->Start();

}

private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
}
};
}
