#include <Windows.h>
#include <wininet.h>
#include <string>
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include <vcclr.h>
#include "HourlyForecast.h"
#include "newproject.h"

#pragma comment(lib, "wininet.lib")

namespace WeatherCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;


	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
    {
  
	public:
        
		Home(void)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
       
		bool  menuExpand;
		bool sidebarExpand;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ btnMenu;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ sidebarPanel;
	private: System::Windows::Forms::Panel^ weatherpanel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ forecastpanel;
	private: System::Windows::Forms::Button^ btnForecast;
	private: System::Windows::Forms::Panel^ hourlypanel;
	private: System::Windows::Forms::Button^ btnHourly;
	private: System::Windows::Forms::FlowLayoutPanel^ ForecastContainer;
	private: System::Windows::Forms::Panel^ weeklypanel;
	private: System::Windows::Forms::Button^ btnWeekly;
	private: System::Windows::Forms::Panel^ logoutpanel;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Timer^ ForecastTransition;
	private: System::Windows::Forms::Timer^ sidebartransition;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ date_timer;
	private: System::Windows::Forms::TextBox^ txtCity;
	private: System::Windows::Forms::Label^ lbltemperature;
	private: System::Windows::Forms::Label^ lblCity;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblpressure;
	private: System::Windows::Forms::Label^ lblhumidity;
	private: System::Windows::Forms::Label^ lbltemp_min;
	private: System::Windows::Forms::Label^ lbltemp_max;
	private: System::Windows::Forms::Label^ lblfeelslike;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblWind;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::ComboBox^ FavBox;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::PictureBox^ pictureBox4;


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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->btnMenu = (gcnew System::Windows::Forms::PictureBox());
            this->sidebarPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->weatherpanel = (gcnew System::Windows::Forms::Panel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->ForecastContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->forecastpanel = (gcnew System::Windows::Forms::Panel());
            this->btnForecast = (gcnew System::Windows::Forms::Button());
            this->hourlypanel = (gcnew System::Windows::Forms::Panel());
            this->btnHourly = (gcnew System::Windows::Forms::Button());
            this->weeklypanel = (gcnew System::Windows::Forms::Panel());
            this->btnWeekly = (gcnew System::Windows::Forms::Button());
            this->logoutpanel = (gcnew System::Windows::Forms::Panel());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->ForecastTransition = (gcnew System::Windows::Forms::Timer(this->components));
            this->sidebartransition = (gcnew System::Windows::Forms::Timer(this->components));
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->lblCity = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->lblfeelslike = (gcnew System::Windows::Forms::Label());
            this->lbltemp_min = (gcnew System::Windows::Forms::Label());
            this->lbltemp_max = (gcnew System::Windows::Forms::Label());
            this->lblpressure = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->lblhumidity = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->lbltemperature = (gcnew System::Windows::Forms::Label());
            this->date_timer = (gcnew System::Windows::Forms::Timer(this->components));
            this->txtCity = (gcnew System::Windows::Forms::TextBox());
            this->label = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->lblWind = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->FavBox = (gcnew System::Windows::Forms::ComboBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMenu))->BeginInit();
            this->sidebarPanel->SuspendLayout();
            this->weatherpanel->SuspendLayout();
            this->ForecastContainer->SuspendLayout();
            this->forecastpanel->SuspendLayout();
            this->hourlypanel->SuspendLayout();
            this->weeklypanel->SuspendLayout();
            this->logoutpanel->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->btnMenu);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1153, 39);
            this->panel1->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(85, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(157, 23);
            this->label1->TabIndex = 1;
            this->label1->Text = L"WEATHER SPHERE";
            // 
            // btnMenu
            // 
            this->btnMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->btnMenu->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMenu.Image")));
            this->btnMenu->Location = System::Drawing::Point(12, 1);
            this->btnMenu->Name = L"btnMenu";
            this->btnMenu->Size = System::Drawing::Size(42, 36);
            this->btnMenu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->btnMenu->TabIndex = 0;
            this->btnMenu->TabStop = false;
            this->btnMenu->Click += gcnew System::EventHandler(this, &Home::btnMenu_Click);
            // 
            // sidebarPanel
            // 
            this->sidebarPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->sidebarPanel->Controls->Add(this->weatherpanel);
            this->sidebarPanel->Controls->Add(this->ForecastContainer);
            this->sidebarPanel->Controls->Add(this->logoutpanel);
            this->sidebarPanel->Dock = System::Windows::Forms::DockStyle::Left;
            this->sidebarPanel->Location = System::Drawing::Point(0, 39);
            this->sidebarPanel->MaximumSize = System::Drawing::Size(303, 0);
            this->sidebarPanel->MinimumSize = System::Drawing::Size(101, 0);
            this->sidebarPanel->Name = L"sidebarPanel";
            this->sidebarPanel->Size = System::Drawing::Size(303, 581);
            this->sidebarPanel->TabIndex = 1;
            this->sidebarPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::flowLayoutPanel1_Paint);
            // 
            // weatherpanel
            // 
            this->weatherpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->weatherpanel->Controls->Add(this->button1);
            this->weatherpanel->Cursor = System::Windows::Forms::Cursors::Hand;
            this->weatherpanel->Location = System::Drawing::Point(0, 0);
            this->weatherpanel->Margin = System::Windows::Forms::Padding(0);
            this->weatherpanel->Name = L"weatherpanel";
            this->weatherpanel->Size = System::Drawing::Size(298, 119);
            this->weatherpanel->TabIndex = 2;
            this->weatherpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::panel2_Paint);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::White;
            this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
            this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button1->Location = System::Drawing::Point(1, 0);
            this->button1->Name = L"button1";
            this->button1->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
            this->button1->Size = System::Drawing::Size(297, 119);
            this->button1->TabIndex = 3;
            this->button1->Text = L"   Weather";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Home::button1_Click);
            // 
            // ForecastContainer
            // 
            this->ForecastContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->ForecastContainer->Controls->Add(this->forecastpanel);
            this->ForecastContainer->Controls->Add(this->hourlypanel);
            this->ForecastContainer->Controls->Add(this->weeklypanel);
            this->ForecastContainer->Location = System::Drawing::Point(0, 119);
            this->ForecastContainer->Margin = System::Windows::Forms::Padding(0);
            this->ForecastContainer->MaximumSize = System::Drawing::Size(302, 348);
            this->ForecastContainer->MinimumSize = System::Drawing::Size(0, 122);
            this->ForecastContainer->Name = L"ForecastContainer";
            this->ForecastContainer->Size = System::Drawing::Size(302, 348);
            this->ForecastContainer->TabIndex = 5;
            // 
            // forecastpanel
            // 
            this->forecastpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->forecastpanel->Controls->Add(this->btnForecast);
            this->forecastpanel->Cursor = System::Windows::Forms::Cursors::Hand;
            this->forecastpanel->Location = System::Drawing::Point(0, 0);
            this->forecastpanel->Margin = System::Windows::Forms::Padding(0);
            this->forecastpanel->Name = L"forecastpanel";
            this->forecastpanel->Size = System::Drawing::Size(301, 119);
            this->forecastpanel->TabIndex = 3;
            // 
            // btnForecast
            // 
            this->btnForecast->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->btnForecast->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnForecast->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnForecast->ForeColor = System::Drawing::Color::White;
            this->btnForecast->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnForecast.Image")));
            this->btnForecast->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnForecast->Location = System::Drawing::Point(0, 2);
            this->btnForecast->Name = L"btnForecast";
            this->btnForecast->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
            this->btnForecast->Size = System::Drawing::Size(298, 116);
            this->btnForecast->TabIndex = 3;
            this->btnForecast->Text = L"    Forecast";
            this->btnForecast->UseVisualStyleBackColor = false;
            this->btnForecast->Click += gcnew System::EventHandler(this, &Home::btnForecast_Click);
            // 
            // hourlypanel
            // 
            this->hourlypanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->hourlypanel->Controls->Add(this->btnHourly);
            this->hourlypanel->Cursor = System::Windows::Forms::Cursors::Hand;
            this->hourlypanel->Location = System::Drawing::Point(0, 119);
            this->hourlypanel->Margin = System::Windows::Forms::Padding(0);
            this->hourlypanel->Name = L"hourlypanel";
            this->hourlypanel->Size = System::Drawing::Size(301, 117);
            this->hourlypanel->TabIndex = 4;
            // 
            // btnHourly
            // 
            this->btnHourly->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->btnHourly->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnHourly->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnHourly->ForeColor = System::Drawing::Color::White;
            this->btnHourly->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHourly.Image")));
            this->btnHourly->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnHourly->Location = System::Drawing::Point(1, 2);
            this->btnHourly->Name = L"btnHourly";
            this->btnHourly->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
            this->btnHourly->Size = System::Drawing::Size(297, 113);
            this->btnHourly->TabIndex = 3;
            this->btnHourly->Text = L"  Hourly Forecast";
            this->btnHourly->UseVisualStyleBackColor = false;
            this->btnHourly->Click += gcnew System::EventHandler(this, &Home::btnHourly_Click);
            // 
            // weeklypanel
            // 
            this->weeklypanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->weeklypanel->Controls->Add(this->btnWeekly);
            this->weeklypanel->Cursor = System::Windows::Forms::Cursors::Hand;
            this->weeklypanel->Location = System::Drawing::Point(0, 236);
            this->weeklypanel->Margin = System::Windows::Forms::Padding(0);
            this->weeklypanel->Name = L"weeklypanel";
            this->weeklypanel->Size = System::Drawing::Size(299, 111);
            this->weeklypanel->TabIndex = 5;
            // 
            // btnWeekly
            // 
            this->btnWeekly->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->btnWeekly->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnWeekly->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnWeekly->ForeColor = System::Drawing::Color::White;
            this->btnWeekly->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWeekly.Image")));
            this->btnWeekly->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnWeekly->Location = System::Drawing::Point(1, 0);
            this->btnWeekly->Name = L"btnWeekly";
            this->btnWeekly->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
            this->btnWeekly->Size = System::Drawing::Size(297, 108);
            this->btnWeekly->TabIndex = 3;
            this->btnWeekly->Text = L"  4 Day Forecast";
            this->btnWeekly->UseVisualStyleBackColor = false;
            this->btnWeekly->Click += gcnew System::EventHandler(this, &Home::btnWeekly_Click);
            // 
            // logoutpanel
            // 
            this->logoutpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->logoutpanel->Controls->Add(this->button2);
            this->logoutpanel->Cursor = System::Windows::Forms::Cursors::Hand;
            this->logoutpanel->Location = System::Drawing::Point(0, 467);
            this->logoutpanel->Margin = System::Windows::Forms::Padding(0);
            this->logoutpanel->Name = L"logoutpanel";
            this->logoutpanel->Size = System::Drawing::Size(301, 112);
            this->logoutpanel->TabIndex = 6;
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::White;
            this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
            this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button2->Location = System::Drawing::Point(1, 0);
            this->button2->Name = L"button2";
            this->button2->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
            this->button2->Size = System::Drawing::Size(297, 112);
            this->button2->TabIndex = 3;
            this->button2->Text = L"Logout\r\n";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &Home::button2_Click);
            // 
            // ForecastTransition
            // 
            this->ForecastTransition->Interval = 10;
            this->ForecastTransition->Tick += gcnew System::EventHandler(this, &Home::ForecastTransition_Tick);
            // 
            // sidebartransition
            // 
            this->sidebartransition->Interval = 15;
            this->sidebartransition->Tick += gcnew System::EventHandler(this, &Home::sidebartransition_Tick);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Transparent;
            this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->panel2->Controls->Add(this->label3);
            this->panel2->Controls->Add(this->lblCity);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Location = System::Drawing::Point(367, 145);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(480, 131);
            this->panel2->TabIndex = 2;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::panel2_Paint_1);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(21, 95);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(84, 23);
            this->label3->TabIndex = 11;
            this->label3->Text = L"12:12:60";
            // 
            // lblCity
            // 
            this->lblCity->AutoSize = true;
            this->lblCity->Font = (gcnew System::Drawing::Font(L"Engravers MT", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblCity->Location = System::Drawing::Point(13, 23);
            this->lblCity->Name = L"lblCity";
            this->lblCity->Size = System::Drawing::Size(366, 50);
            this->lblCity->TabIndex = 0;
            this->lblCity->Text = L"islamabad";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(20, 69);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(288, 25);
            this->label2->TabIndex = 0;
            this->label2->Text = L"saturday,december 23,2023";
            // 
            // lblfeelslike
            // 
            this->lblfeelslike->AutoSize = true;
            this->lblfeelslike->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblfeelslike->Location = System::Drawing::Point(292, 80);
            this->lblfeelslike->Name = L"lblfeelslike";
            this->lblfeelslike->Size = System::Drawing::Size(142, 28);
            this->lblfeelslike->TabIndex = 13;
            this->lblfeelslike->Text = L"Feels like: 20°";
            // 
            // lbltemp_min
            // 
            this->lbltemp_min->AutoSize = true;
            this->lbltemp_min->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbltemp_min->Location = System::Drawing::Point(46, 199);
            this->lbltemp_min->Name = L"lbltemp_min";
            this->lbltemp_min->Size = System::Drawing::Size(36, 23);
            this->lbltemp_min->TabIndex = 11;
            this->lbltemp_min->Text = L"17°";
            // 
            // lbltemp_max
            // 
            this->lbltemp_max->AutoSize = true;
            this->lbltemp_max->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbltemp_max->Location = System::Drawing::Point(168, 199);
            this->lbltemp_max->Name = L"lbltemp_max";
            this->lbltemp_max->Size = System::Drawing::Size(36, 23);
            this->lbltemp_max->TabIndex = 12;
            this->lbltemp_max->Text = L"20°";
            // 
            // lblpressure
            // 
            this->lblpressure->AutoSize = true;
            this->lblpressure->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblpressure->Location = System::Drawing::Point(275, 198);
            this->lblpressure->Name = L"lblpressure";
            this->lblpressure->Size = System::Drawing::Size(82, 23);
            this->lblpressure->TabIndex = 13;
            this->lblpressure->Text = L"1018 mb";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(373, 177);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(103, 23);
            this->label8->TabIndex = 15;
            this->label8->Text = L"Humidity(%)";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(257, 176);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(109, 23);
            this->label7->TabIndex = 14;
            this->label7->Text = L"Pressure(mb)";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(131, 176);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(115, 23);
            this->label6->TabIndex = 13;
            this->label6->Text = L"Temp Max(°C)";
            // 
            // lblhumidity
            // 
            this->lblhumidity->AutoSize = true;
            this->lblhumidity->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblhumidity->Location = System::Drawing::Point(407, 200);
            this->lblhumidity->Name = L"lblhumidity";
            this->lblhumidity->Size = System::Drawing::Size(45, 23);
            this->lblhumidity->TabIndex = 10;
            this->lblhumidity->Text = L"65%";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(8, 176);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(112, 23);
            this->label5->TabIndex = 12;
            this->label5->Text = L"Temp Min(°C)";
            // 
            // lbltemperature
            // 
            this->lbltemperature->AutoSize = true;
            this->lbltemperature->BackColor = System::Drawing::Color::Transparent;
            this->lbltemperature->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbltemperature->Location = System::Drawing::Point(131, 47);
            this->lbltemperature->Name = L"lbltemperature";
            this->lbltemperature->Size = System::Drawing::Size(167, 106);
            this->lbltemperature->TabIndex = 5;
            this->lbltemperature->Text = L"19°";
            // 
            // date_timer
            // 
            this->date_timer->Interval = 1;
            this->date_timer->Tick += gcnew System::EventHandler(this, &Home::date_timer_Tick);
            // 
            // txtCity
            // 
            this->txtCity->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3097) {
                L"Afghanistan", L"Albania", L"Algeria",
                    L"Andorra", L"Angola", L"Antigua & Deps", L"Argentina", L"Armenia", L"Australia", L"Austria", L"Azerbaijan", L"Bahamas", L"Bahrain",
                    L"Bangladesh", L"Barbados", L"Belarus", L"Belgium", L"Belize", L"Benin", L"Bhutan", L"Bolivia", L"Bosnia Herzegovina", L"Botswana",
                    L"Brazil", L"Brunei", L"Bulgaria", L"Burkina", L"Burundi", L"Cambodia", L"Cameroon", L"Canada", L"Cape Verde", L"Central African Rep",
                    L"Chad", L"Chile", L"China", L"Colombia", L"Comoros", L"Congo", L"Congo {Democratic Rep}", L"Costa Rica", L"Croatia", L"Cuba",
                    L"Cyprus", L"Czech Republic", L"Denmark", L"Djibouti", L"Dominica", L"Dominican Republic", L"East Timor", L"Ecuador", L"Egypt",
                    L"El Salvador", L"Equatorial Guinea", L"Eritrea", L"Estonia", L"Ethiopia", L"Fiji", L"Finland", L"France", L"Gabon", L"Gambia",
                    L"Georgia", L"Germany", L"Ghana", L"Greece", L"Grenada", L"Guatemala", L"Guinea", L"Guinea-Bissau", L"Guyana", L"Haiti", L"Honduras",
                    L"Hungary", L"Iceland", L"India", L"Indonesia", L"Iran", L"Iraq", L"Ireland {Republic}", L"Israel", L"Italy", L"Ivory Coast",
                    L"Jamaica", L"Japan", L"Jordan", L"Kazakhstan", L"Kenya", L"Kiribati", L"Korea North", L"Korea South", L"Kosovo", L"Kuwait",
                    L"Kyrgyzstan", L"Laos", L"Latvia", L"Lebanon", L"Lesotho", L"Liberia", L"Libya", L"Liechtenstein", L"Lithuania", L"Luxembourg",
                    L"Macedonia", L"Madagascar", L"Malawi", L"Malaysia", L"Maldives", L"Mali", L"Malta", L"Marshall Islands", L"Mauritania", L"Mauritius",
                    L"Mexico", L"Micronesia", L"Moldova", L"Monaco", L"Mongolia", L"Montenegro", L"Morocco", L"Mozambique", L"Myanmar, {Burma}",
                    L"Namibia", L"Nauru", L"Nepal", L"Netherlands", L"New Zealand", L"Nicaragua", L"Niger", L"Nigeria", L"Norway", L"Oman", L"Pakistan",
                    L"Palau", L"Panama", L"Papua New Guinea", L"Paraguay", L"Peru", L"Philippines", L"Poland", L"Portugal", L"Qatar", L"Romania",
                    L"Russian Federation", L"Rwanda", L"St Kitts & Nevis", L"St Lucia", L"Saint Vincent & the Grenadines", L"Samoa", L"San Marino",
                    L"Sao Tome & Principe", L"Saudi Arabia", L"Senegal", L"Serbia", L"Seychelles", L"Sierra Leone", L"Singapore", L"Slovakia", L"Slovenia",
                    L"Solomon Islands", L"Somalia", L"South Africa", L"South Sudan", L"Spain", L"Sri Lanka", L"Sudan", L"Suriname", L"Swaziland",
                    L"Sweden", L"Switzerland", L"Syria", L"Taiwan", L"Tajikistan", L"Tanzania", L"Thailand", L"Togo", L"Tonga", L"Trinidad & Tobago",
                    L"Tunisia", L"Turkey", L"Turkmenistan", L"Tuvalu", L"Uganda", L"Ukraine", L"United Arab Emirates", L"United Kingdom", L"United States",
                    L"Uruguay", L"Uzbekistan", L"Vanuatu", L"Vatican City", L"Venezuela", L"Vietnam", L"Yemen", L"Zambia", L"Zimbabwe", L"Tokyo",
                    L"Jakarta", L"Delhi", L"Guangzhou", L"Mumbai", L"Manila", L"Shanghai", L"São Paulo", L"Seoul", L"Mexico City", L"Cairo", L"New York",
                    L"Dhaka", L"Beijing", L"Kolkāta", L"Bangkok", L"Shenzhen", L"Moscow", L"Buenos Aires", L"Lagos", L"Istanbul", L"Karachi", L"Bangalore",
                    L"Ho Chi Minh City", L"Ōsaka", L"Chengdu", L"Tehran", L"Kinshasa", L"Rio de Janeiro", L"Chennai", L"Xi’an", L"Lahore", L"Chongqing",
                    L"Los Angeles", L"Baoding", L"London", L"Paris", L"Linyi", L"Dongguan", L"Hyderābād", L"Tianjin", L"Lima", L"Wuhan", L"Nanyang",
                    L"Hangzhou", L"Foshan", L"Nagoya", L"Taipei", L"Tongshan", L"Luanda", L"Zhoukou", L"Ganzhou", L"Kuala Lumpur", L"Heze", L"Quanzhou",
                    L"Chicago", L"Nanjing", L"Jining", L"Hanoi", L"Pune", L"Fuyang", L"Ahmedabad", L"Johannesburg", L"Bogotá", L"Dar es Salaam",
                    L"Shenyang", L"Khartoum", L"Shangqiu", L"Cangzhou", L"Hong Kong", L"Shaoyang", L"Zhanjiang", L"Yancheng", L"Hengyang", L"Riyadh",
                    L"Zhumadian", L"Santiago", L"Xingtai", L"Chattogram", L"Bijie", L"Shangrao", L"Zunyi", L"Sūrat", L"Surabaya", L"Huanggang", L"Maoming",
                    L"Nanchong", L"Xinyang", L"Madrid", L"Baghdad", L"Qujing", L"Jieyang", L"Singapore", L"Prayagraj", L"Liaocheng", L"Dalian", L"Yulin",
                    L"Changde", L"Qingdao", L"Douala", L"Miami", L"Nangandao", L"Pudong", L"Xiangyang", L"Dallas", L"Houston", L"Zhengzhou", L"Lu’an",
                    L"Dezhou", L"Jinan", L"Giza", L"Zhaotong", L"Yichun", L"Nairobi", L"Guadalajara", L"Philadelphia", L"Ankara", L"Tai’an", L"Dazhou",
                    L"Langfang", L"Yongzhou", L"Toronto", L"Suihua", L"Saint Petersburg", L"Qiqihar", L"Suzhou", L"Monterrey", L"Belo Horizonte",
                    L"Weinan", L"Rangoon", L"Zhangzhou", L"Yuncheng", L"Xianyang", L"Guilin", L"Atlanta", L"Taizhou", L"Kāshān", L"Bozhou", L"Abidjan",
                    L"Suqian", L"Huaihua", L"Ji’an", L"Xiaoganzhan", L"Pingdingshan", L"Jiujiang", L"Alexandria", L"Mianyang", L"Sydney", L"Huanglongsi",
                    L"Washington", L"Barcelona", L"Changsha", L"Chenzhou", L"Anqing", L"Jiangmen", L"Xinpu", L"Yibin", L"Yangzhou", L"Melbourne",
                    L"Berlin", L"Hengshui", L"Timbío", L"Kunming", L"Yiyang", L"Guigang", L"Changchun", L"Jiangguanchi", L"Casablanca", L"Meizhou",
                    L"Zhangjiakou", L"Chifeng", L"Ürümqi", L"Suzhou", L"İzmir", L"Linfen", L"Shantou", L"Kabul", L"Mogadishu", L"Luzhou", L"Hefei",
                    L"Boston", L"Liuzhou", L"Zhaoqing", L"Xiaoxita", L"Shijiazhuang", L"Ningbo", L"Fuzhou", L"Phoenix", L"Zhuzhou", L"Amman", L"Chuzhou",
                    L"Jeddah", L"Qingyuan", L"Loudi", L"Binzhou", L"Deyang", L"Taiyuan", L"Kano", L"Wuhu", L"Nanning", L"Harbin", L"Abuja", L"Yokohama",
                    L"Baojishi", L"Zaozhuang", L"Xiamen", L"Neijiang", L"Fuzhou", L"Baicheng", L"Anshan", L"Medan", L"Yulinshi", L"Wenzhou", L"Changzhou",
                    L"Puyang", L"Jiaozuo", L"Nanchang", L"Ibadan", L"Hechi", L"Detroit", L"Montréal", L"Busan", L"Hohhot", L"Seattle", L"Algiers",
                    L"Hanzhong", L"Tangshan", L"Shiyan", L"Lucknow", L"Siping", L"Mashhad", L"Boankra", L"Changzhi", L"Dubai", L"Qinzhou", L"Guiyang",
                    L"Bengbu", L"San Francisco", L"Bazhou", L"Qincheng", L"Suining", L"Wuxi", L"Leshan", L"Putian", L"Zhenjiang", L"Faisalabad",
                    L"Guang’an", L"Tongren", L"Santa Cruz", L"Qinhuangdao", L"Tongliao", L"Jinzhou", L"Heyuan", L"San Diego", L"Jaipur", L"Xinzhou",
                    L"Lanzhou", L"Wuzhou", L"Athens", L"Addis Ababa", L"Chaoyang", L"Brasília", L"Taichung", L"Kuwait City", L"Budapest", L"Shaoguan",
                    L"Shanwei", L"Quezon City", L"Rizhao", L"Kyiv", L"Sanaa", L"Meishan", L"Incheon", L"Guatemala City", L"Birmingham", L"Zhongshan",
                    L"Ningde", L"Weihai", L"Daqing", L"Bursa", L"Salvador", L"Rome", L"Haikou", L"La Paz", L"Xiangtan", L"Pyongyang", L"Minneapolis",
                    L"Omdurman", L"Malang", L"Mudanjiang", L"Stuttgart", L"Brooklyn", L"Kaohsiung", L"Guayaquil", L"Lisbon", L"Longyan", L"Tieling",
                    L"Manchester", L"Baotou", L"Handan", L"Cawnpore", L"Dingxi", L"Nanping", L"Tampa", L"Zigong", L"Maracaibo", L"Chaozhou", L"Mbuji-Mayi",
                    L"Denver", L"Gulou", L"Weifang", L"Huai’an", L"Zibo", L"Ankang", L"Baoshan", L"Antananarivo", L"Huludao", L"Munich", L"Yanjiang",
                    L"Santo Domingo", L"Sanming", L"Tashkent", L"Longba", L"Yangjiang", L"Jiamusi", L"Luohe", L"Lincang", L"Medellín", L"Xuanzhou",
                    L"Yunfu", L"Shaoxing", L"Yantai", L"Huizhou", L"Lishui", L"Mirzāpur", L"Hamburg", L"Guangyuan", L"Cali", L"Lusaka", L"Huangshi",
                    L"Xining", L"Ouagadougou", L"Daegu", L"Fortaleza", L"Yaoundé", L"Jilin", L"Dandong", L"Zhuhai", L"Lianshan", L"Yingkou", L"Antalya",
                    L"Nāgpur", L"Queens", L"Accra", L"Bekasi", L"Ghāziābād", L"Yuxi", L"Luoyang", L"Brisbane", L"Anshun", L"Depok", L"Shangzhou",
                    L"Huainan", L"Colombo", L"Kuaidamao", L"Baku", L"Fukuoka", L"Yan’an", L"Jincheng", L"Vancouver", L"Nantong", L"Tangerang", L"Caracas",
                    L"Sanmenxia", L"Laibin", L"Konya", L"Manaus", L"Eşfahān", L"Qinbaling", L"Baltimore", L"Ma’anshan", L"Shengli", L"Gaoping", L"Taizhou",
                    L"Harare", L"Kowloon", L"Las Vegas", L"Havana", L"Perth", L"Phnom Penh", L"Puning", L"Huaibei", L"Qingyang", L"Haiphong", L"Chongzuo",
                    L"Rawalpindi", L"Yushan", L"St. Louis", L"Kumasi", L"Vadodara", L"Hezhou", L"Pingliang", L"Portland", L"Vishākhapatnam", L"Gujranwala",
                    L"Baicheng", L"Gaziantep", L"Fushun", L"Riverside", L"Bamako", L"Quito", L"Minsk", L"Tijuana", L"Bamenda", L"Boosaaso", L"Indore",
                    L"Şanlıurfa", L"Vienna", L"Karaj", L"Kananga", L"Peshawar", L"Sapporo", L"Ecatepec", L"Pingxiang", L"Orlando", L"Aleppo", L"Sacramento",
                    L"Almaty", L"San Juan", L"San Antonio", L"Yinchuan", L"Thāne", L"Santos", L"Blantyre", L"Bucharest", L"Curitiba", L"Multan",
                    L"Tainan", L"Xiping", L"Port Harcourt", L"Warsaw", L"Jixi", L"Saidu Sharif", L"Liaoyang", L"Beihai", L"Meru", L"Brazzaville",
                    L"Fuxin", L"Wuwei", L"Mersin", L"Bhopāl", L"Lubumbashi", L"Denpasar", L"Davao", L"Shuyangzha", L"Adana", L"Damascus", L"Brussels",
                    L"Hyderabad City", L"Diyarbakır", L"San Jose", L"Chinchvad", L"Montevideo", L"Pittsburgh", L"Shuozhou", L"Cincinnati", L"Benxi",
                    L"Baiyin", L"Mosul", L"Manhattan", L"Caloocan City", L"Kampala", L"Patna", L"Tegucigalpa", L"Cleveland", L"Sanzhou", L"Changshu",
                    L"Mecca", L"Heihe", L"Jingdezhen", L"Conakry", L"Recife", L"Indianapolis", L"Austin", L"Sangereng", L"Kansas City", L"Zhongli",
                    L"Novosibirsk", L"Bilāspur", L"Semarang", L"Ludhiāna", L"Nārāyanganj", L"Stockholm", L"Chengtangcun", L"Āgra", L"Balandougou",
                    L"Agwār", L"León de los Aldama", L"Yopougon", L"Puebla", L"Madurai", L"Hebi", L"Córdoba", L"Shīrāz", L"Jamshedpur", L"Tabrīz",
                    L"Huzhou", L"Columbus", L"Sofia", L"Kawasaki", L"San José", L"Aba", L"Palembang", L"Zhangjiajie", L"Kōbe", L"Jiaxing", L"Charlotte",
                    L"Guiping", L"Lianjiang", L"Ximeicun", L"Jianguang", L"Yucheng", L"Panama City", L"Xushan", L"Belém", L"Virginia Beach", L"Leizhou",
                    L"Gwangju", L"Nāsik", L"Porto Alegre", L"Valencia", L"Onitsha", L"Abu Dhabi", L"Daejeon", L"Zapopan", L"Bronx", L"Yekaterinburg",
                    L"Huazhou", L"Kyōto", L"Jinhua", L"Amsterdam", L"Shuangyashan", L"Pizhou", L"El Kelaa des Srarhna", L"Dakar", L"Kharkiv", L"Yangshe",
                    L"Guyuan", L"Rui’an", L"Khulna", L"Muscat", L"Wenling", L"Gaozhou", L"Farīdābād", L"Chizhou", L"Tel Aviv-Yafo", L"Ulaanbaatar",
                    L"Goiânia", L"Fuqing", L"Kayseri", L"Wuzhong", L"Belgrade", L"Pingdu", L"Milan", L"Aurangābād", L"Copenhagen", L"Yangquan", L"Yutan",
                    L"Huangshan", L"Auckland", L"Makassar", L"Santiago", L"Milwaukee", L"Rājkot", L"Prague", L"Samsun", L"Liangshi", L"Barranquilla",
                    L"Saitama", L"Guarulhos", L"Al Başrah", L"Mandalay", L"Juárez", L"Xintai", L"Wusong", L"Meerut", L"Yushu", L"Rongcheng", L"Huazhou",
                    L"Adelaide", L"Baishan", L"Dayan", L"Haicheng", L"Tripoli", L"Jiangyin", L"Yicheng", L"Huaiyin", L"Porto", L"Cacuaco", L"Soweto",
                    L"Rosario", L"Canagatan", L"Helsinki", L"Jabalpur", L"Providence", L"Rucheng", L"Nizhniy Novgorod", L"Ahvāz", L"Jepara", L"Shaoyang",
                    L"Comayagüela", L"Laiwu", L"Sharjah", L"Kalamboli", L"Jingling", L"Kazan", L"Suwon", L"Yongcheng", L"Sumedang", L"Calgary", L"Cần Thơ",
                    L"Yiwu", L"Bagam", L"Beidao", L"Vasai", L"Xiangshui", L"Jacksonville", L"Akçaabat", L"Campinas", L"Dadukou", L"Mombasa", L"Lingcheng",
                    L"Najafgarh", L"Vila Velha", L"Gāzipura", L"Chelyabinsk", L"Vārānasi", L"Xinyu", L"Qom", L"Hargeysa", L"Zhangye", L"Hiroshima",
                    L"Maiduguri", L"Chiang Mai", L"Doha", L"Maputo", L"Mbandaka", L"Pikine", L"Medina", L"Srīnagar", L"Omsk", L"Dublin", L"Liaoyuan",
                    L"Cilacap", L"Yingtan", L"Bandar Lampung", L"Samara", L"Guankou", L"Ulsan", L"Dhanbād", L"Dingzhou", L"Lianyuan", L"Rongcheng",
                    L"Kaiyuan", L"Nay Pyi Taw", L"Zhuji", L"Kigali", L"Bukavu", L"Leiyang", L"Bafoussam", L"Yichun", L"Benin City", L"Rostov", L"Xiantao",
                    L"Amritsar", L"Callao", L"Salt Lake City", L"Alīgarh", L"Shagamu", L"Yingchuan", L"Ciudad Nezahualcóyotl", L"Tbilisi", L"Guwāhāti",
                    L"Ufa", L"Fès", L"São Luís", L"Biên Hòa", L"Sevilla", L"N’Djamena", L"Mexicali", L"Nezahualcóyotl", L"Ikare", L"Nashville", L"Tamale",
                    L"Xibeijie", L"Yuyao", L"Hāora", L"Hanchuan", L"Gongzhuling", L"Krasnoyarsk", L"Cologne", L"Bujumbura", L"Bishkek", L"Zhufeng",
                    L"São Gonçalo", L"Yerevan", L"Ezhou", L"Nur-Sultan", L"Tongjin", L"Nouakchott", L"Xiashi", L"Rānchi", L"Taixing", L"Vereeniging",
                    L"Gwalior", L"Zhongwei", L"Goyang", L"Oslo", L"Vijayavāda", L"Chandīgarh", L"Edmonton", L"Sendai", L"Raleigh", L"Mizhou", L"Tunis",
                    L"Xishan", L"Barquisimeto", L"Hegang", L"Voronezh", L"Perm", L"Changwon", L"Fangchenggang", L"Shouguang", L"Bogor", L"Cartagena",
                    L"Matola", L"Jodhpur", L"Memphis", L"Ogbomoso", L"Rangapukur", L"Managua", L"Sanya", L"Shymkent", L"Wutong", L"Niamey", L"Shubrā al Khaymah",
                    L"Linhai", L"Denizli", L"Maceió", L"Monrovia", L"Wafangdian", L"Zhongxiang", L"Louisville", L"Odesa", L"Thủ Đức", L"Volgograd",
                    L"Islamabad", L"Port-au-Prince", L"Xinyi", L"Raipur", L"Arequipa", L"Richmond", L"Zaoyang", L"Buffalo", L"Shuizhai", L"Xingyi",
                    L"Kota", L"Quetta", L"Kathmandu", L"Ottawa", L"Lilongwe", L"Asmara", L"Freetown", L"Vientiane", L"Jerusalem", L"Riga", L"Bangui",
                    L"Dushanbe", L"Lomé", L"Ashgabat", L"Zagreb", L"Libreville", L"Cotonou", L"Pretoria", L"Vilnius", L"Winnipeg", L"Quebec City",
                    L"Chisinau", L"Port Moresby", L"Skopje", L"Djibouti", L"Gaza", L"Kingston", L"Rabat", L"San Salvador", L"The Hague", L"Asunción",
                    L"Juba", L"Maseru", L"Bissau", L"Valletta", L"Bratislava", L"Kitchener", L"Manama", L"Tallinn", L"Beirut", L"Cape Town", L"Tirana",
                    L"Sarajevo", L"Wellington", L"Banjul", L"Halifax", L"Canberra", L"Yamoussoukro", L"Victoria", L"Nicosia", L"Windhoek", L"Saint-Denis",
                    L"Porto-Novo", L"Sucre", L"Ljubljana", L"Nassau", L"Bloemfontein", L"Fort-de-France", L"New Delhi", L"Gaborone", L"Paramaribo",
                    L"Dili", L"Dodoma", L"Georgetown", L"Gibraltar", L"Malabo", L"Suva", L"Nouméa", L"Pristina", L"Male", L"Port Louis", L"Podgorica",
                    L"Willemstad", L"Bern", L"Gitega", L"Reykjavík", L"Luxembourg", L"Papeete", L"Praia", L"Sri Jayewardenepura Kotte", L"Bridgetown",
                    L"Moroni", L"Thimphu", L"Mbabane", L"Honiara", L"Port of Spain", L"Castries", L"Putrajaya", L"Cayenne", L"São Tomé", L"Port-Vila",
                    L"Bandar Seri Begawan", L"Monaco", L"Apia", L"Tarawa", L"Oranjestad", L"Saint Helier", L"Mamoudzou", L"Majuro", L"Douglas", L"George Town",
                    L"Victoria", L"Kingstown", L"Andorra la Vella", L"Saint John’s", L"Nuku‘alofa", L"Nuuk", L"Belmopan", L"Roseau", L"Basseterre",
                    L"Tórshavn", L"Road Town", L"Pago Pago", L"Grand Turk", L"Marigot", L"Palikir", L"Funafuti", L"Vaduz", L"Lobamba", L"Avarua",
                    L"Saint George’s", L"San Marino", L"Tifariti", L"Philipsburg", L"Capitol Hill", L"Stanley", L"Hamilton", L"Vatican City", L"Alofi",
                    L"Basse-Terre", L"Hagåtña", L"Jamestown", L"Brades", L"Yaren", L"Gustavia", L"Ngerulmud", L"Saint-Pierre", L"The Valley", L"Mata-Utu",
                    L"Kingston", L"Longyearbyen", L"Adamstown", L"Flying Fish Cove", L"King Edward Point", L"Bareilly", L"Quảng Hà", L"Domaa-Ahenkro",
                    L"Oklahoma City", L"Xingcheng", L"Dongtai", L"Yingcheng", L"Chiba", L"Al Mijlad", L"Pekanbaru", L"Luocheng", L"Dnipro", L"Danyang",
                    L"Godē", L"Natal", L"Nada", L"Zamboanga City", L"Kirkuk", L"Bridgeport", L"Naples", L"Wuchuan", L"Huilong", L"Morelia", L"Málaga",
                    L"Cebu City", L"Al Manşūrah", L"Coimbatore", L"Santo Domingo Este", L"Setagaya", L"Sŏngnam", L"Taishan", L"Teresina", L"Solāpur",
                    L"Tangier", L"Kermānshāh", L"Krasnodar", L"Baidoa", L"Gaalkacyo", L"Anqiu", L"Feicheng", L"Seberang Jaya", L"El Alto", L"Kitakyūshū",
                    L"Meishan", L"Khartoum North", L"Kisangani", L"Aguascalientes", L"Marrakech", L"Donetsk", L"Trujillo", L"New Orleans", L"Taihe",
                    L"Trichinopoly", L"Xin’an", L"Taihecun", L"Kashgar", L"Naucalpan de Juárez", L"Çankaya", L"Santiago de Cuba", L"Owerri", L"Padang",
                    L"Qingzhou", L"Lichuan", L"Santiago del Estero", L"Daye", L"Hengzhou", L"Fort Worth", L"Hartford", L"Esenyurt", L"Campo Grande",
                    L"Zhuanghe", L"Bobo-Dioulasso", L"Ad Dammām", L"Quzhou", L"Lhasa", L"Jiaozhou", L"Bunia", L"Taguig City", L"Cancún", L"Mérida",
                    L"Yangchun", L"Dengtalu", L"Morādābād", L"Antipolo", L"Abeokuta", L"Bucheon", L"Zhoushan", L"Tiruppūr", L"Natal", L"Chihuahua",
                    L"Klang", L"As Sulaymānīyah", L"Gurgaon", L"Turin", L"Tucson", L"Hai’an", L"Ar Ramādī", L"Laiyang", L"Sale", L"Jalandhar", L"Marseille",
                    L"Bucaramanga", L"Kaifeng Chengguanzhen", L"Ikeja", L"Eskişehir", L"Saltillo", L"Gaomi", L"Liverpool", L"Ipoh", L"Oran", L"Portsmouth",
                    L"Southampton", L"Hermosillo", L"Cochabamba", L"Weichanglu", L"Shache", L"Wuxi", L"Leping", L"Hailun", L"Macheng", L"Akure",
                    L"Ilorin", L"Yuci", L"Saratov", L"Erbil", L"Iguaçu", L"Pasig City", L"Dehui", L"Kālkāji Devi", L"Bhubaneshwar", L"Honolulu",
                    L"Tongchuan", L"Cheongju", L"Chengxiang", L"Thessaloníki", L"Warri", L"Sakai", L"Pointe-Noire", L"Rongjiawan", L"Mediouna", L"Butterworth",
                    L"Renqiu", L"Xindi", L"Bhayandar", L"Wu’an", L"São Bernardo do Campo", L"Māndvi", L"Barinas", L"Zijinglu", L"Gaoyou", L"Culiacán",
                    L"Hejian", L"Yiyang", L"Puxi", L"Androtsy", L"McAllen", L"Qingping", L"Omaha", L"João Pessoa", L"Dongyang", L"Querétaro", L"Kraków",
                    L"George Town", L"Abaeté", L"Palermo", L"Valencia", L"Xigazê", L"El Paso", L"Seyhan", L"Niigata", L"Hempstead", L"Leeds", L"Hamamatsu",
                    L"Bağcılar", L"Xiangxiang", L"Bilbao", L"Chaohucun", L"Fuyang", L"Homs", L"Küçükçekmece", L"Lubango", L"Zouping", L"Khŭjand",
                    L"San Luis Potosí", L"Nottingham", L"Cencheng", L"Dali", L"Hamhŭng", L"Korla", L"Rājshāhi", L"Erzurum", L"Frankfurt", L"Al ‘Ayn",
                    L"Songzi", L"Albuquerque", L"Patiāla", L"Laixi", L"Bahawalpur", L"Zhongba", L"Kaduna", L"Qingnian", L"San Pedro Sula", L"Qamdo",
                    L"Xinhualu", L"Nerima", L"Guangshui", L"Pietermaritzburg", L"Baardheere", L"Tlajomulco de Zúñiga", L"Samarinda", L"Changhua",
                    L"Sizhan", L"Ciudad Guayana", L"Cúcuta", L"Dhūlia", L"Burco", L"Licheng", L"Ōta-ku", L"Thiruvananthapuram", L"Tyumen", L"Nampula",
                    L"Zaporizhzhia", L"Kyaukse", L"Chengguan", L"Kumamoto", L"Nehe", L"Osogbo", L"Cabinda", L"Kermān", L"Zunhua", L"Rochester", L"Valenzuela",
                    L"Orūmīyeh", L"Wugang", L"Shuangqiao", L"Tshikapa", L"São José dos Campos", L"Comodoro Rivadavia", L"Cagayan de Oro", L"Tondo",
                    L"Langzhong", L"Qian’an", L"Lviv", L"Sarasota", L"Reynosa", L"Santo André", L"An Najaf", L"Sagamihara", L"Guli", L"Mississauga",
                    L"Concepción", L"Okayama", L"Anlu", L"Mwanza", L"Fresno", L"Changsha", L"Torreón", L"Shihezi", L"Enugu", L"Jaboatão", L"Tulsa",
                    L"Yanggok", L"Yatou", L"Edogawa", L"Allentown", L"Ribeirão Prêto", L"Xichang", L"Latakia", L"Bhiwandi", L"City of Parañaque",
                    L"Dasmariñas", L"Dayton", L"Sahāranpur", L"Warangal", L"Soledad", L"Osasco", L"Dashiqiao", L"Birmingham", L"Nampo", L"Shiliguri",
                    L"Banjarmasin", L"Sha Tin", L"Salem", L"General Santos", L"Cocody", L"Ḩamāh", L"Pendik", L"Bacoor", L"Vellore", L"Shishi", L"Guadalupe",
                    L"Adachi", L"Qianxi", L"Tolyatti", L"Macau", L"Bauchi", L"Hamilton", L"Łódź", L"Miluo Chengguanzhen", L"Gaizhou", L"Karbalā’",
                    L"Leling", L"Jianshe", L"Shizuoka", L"Charleston", L"Jingcheng", L"Kochi", L"Mar del Plata", L"Cape Coral", L"Tasikmalaya", L"Rasht",
                    L"Xinmin", L"Shanhu", L"Zhongshu", L"Gorakhpur", L"Zaragoza", L"Wrocław", L"Acapulco de Juárez", L"Bahār", L"Kumul", L"Murcia",
                    L"Pinghu", L"Palermo", L"Guankou", L"Tlaquepaque", L"Songyang", L"Ch’ŏngjin", L"Puyang Chengguanzhen", L"Qionghu", L"Zhaodong",
                    L"Narela", L"Huambo", L"Wenchang", L"Villavicencio", L"Shulan", L"Tlalnepantla", L"Catia La Mar", L"Sargodha", L"Al Hufūf", L"Durango",
                    L"Jalingo", L"Bouaké", L"Mazatlán", L"San Jose del Monte", L"Ansan", L"Abomey-Calavi", L"Lingbao Chengguanzhen", L"Hwasu-dong",
                    L"Sialkot City", L"Huế", L"Bulawayo", L"Xiping", L"Sanhe", L"Ch’ŏnan", L"Contagem", L"Jieshou", L"Selçuklu", L"Ērer Sātā", L"Honchō",
                    L"Düsseldorf", L"Izhevsk", L"Guntūr", L"Guixi", L"Sorocaba", L"Yıldırım", L"Petaling Jaya", L"Tengyue", L"Wuxue", L"Rasūlpur",
                    L"Bhāvnagar", L"Brahmapur", L"Qufu", L"Gaobeidian", L"Ruiming", L"Columbia", L"Concord", L"Noida", L"Gold Coast", L"Xinshi",
                    L"Ta‘izz", L"Aracaju", L"Jeonju", L"Bhāngar", L"Jin’e", L"Barnaul", L"Makati City", L"Rotterdam", L"Changping", L"Benghazi",
                    L"Kryvyi Rih", L"Ḩalwān", L"Colorado Springs", L"Suohe", L"Chimalhuacán", L"Xinxing", L"Bhilai", L"Mangalore", L"Port-Bouët",
                    L"Zhuangyuan", L"Glasgow", L"Namangan", L"Ulyanovsk", L"Tân An", L"Irkutsk", L"Bhilai", L"Nāgercoil", L"Jos", L"Pontianak", L"Bazhou",
                    L"Turpan", L"Villa Nueva", L"Las Piñas City", L"Springfield", L"Knoxville", L"Meihekou", L"Jurong", L"Feira de Santana", L"Khabarovsk",
                    L"Zhugang", L"Leipzig", L"Xinji", L"Serang", L"Jambi", L"Kandahār", L"San Miguel de Tucumán", L"Gothenburg", L"Yaroslavl", L"Baton Rouge",
                    L"Zhangshu", L"Vladivostok", L"Ogden", L"Kuantan", L"Raurkela", L"Cuttack", L"Ar Rayyān", L"Haifa", L"Malanje", L"Bacolod", L"Zhuozhou",
                    L"Grand Rapids", L"Uberlândia", L"Albany", L"Tianchang", L"Kawaguchi", L"Itabashi", L"Suginami-ku", L"Cimahi", L"Tuxtla", L"Garoua",
                    L"Ḩafr al Bāţin", L"Tumkūr", L"Balikpapan", L"Durban", L"Kagoshima", L"Al Ḩillah", L"Makhachkala", L"Sihui", L"Irapuato", L"Brampton",
                    L"Luocheng", L"Mbale", L"Pereira", L"Bakersfield", L"Uvira", L"Dortmund", L"Chuxiong", L"Mission Viejo", L"Zāhedān", L"New Haven",
                    L"Shah Alam", L"Wenlan", L"Cuiabá", L"Shangzhi", L"Essen", L"Botou", L"Mymensingh", L"Anyang", L"Genoa", L"Durgāpur", L"Port Sudan",
                    L"Al Mafraq", L"Puente Alto", L"Dehra Dūn", L"Aţ Ţā’if", L"Wancheng", L"Hachiōji", L"Xiulin", L"Fu’an", L"Tomsk", L"Tonalá",
                    L"Juiz de Fora", L"Worcester", L"Kolwezi", L"Chāpra", L"Bristol", L"Luofeng", L"Lingyuan", L"Irbid", L"Al Maḩallah al Kubrá",
                    L"Wencheng", L"Bremen", L"Ciudad Bolívar", L"Orenburg", L"Shenzhou", L"Āsansol", L"Kuiju", L"Zhenzhou", L"Surakarta", L"Dresden",
                    L"Kolhāpur", L"Benguela", L"Ensenada", L"Kemerovo", L"Lanxi", L"Dangyang", L"Farīdpur", L"Herāt", L"Luanzhou", L"Hamadān", L"Novokuznetsk",
                    L"Nellore", L"Palma", L"Chiclayo", L"Nānded", L"Ajmer", L"Al Ḩudaydah", L"Kimhae", L"Provo", L"Rustenburg", L"Amrāvati", L"Poznań",
                    L"Huanghua", L"Muntinlupa City", L"Londrina", L"Nansana", L"Tabūk", L"Heroica Matamoros", L"Akron", L"Samarkand", L"Xingcheng",
                    L"Kaiyuan", L"Hannover", L"Valledupar", L"Fengcheng", L"Ixtapaluca", L"Ghulja", L"City of Calamba", L"Ananindeua", L"Xiangyang",
                    L"Fuding", L"An Nāşirīyah", L"Al Ḩillah", L"Ibagué", L"Ryazan", L"Kassala", L"Tripoli", L"Chang’an", L"Kōtō-ku", L"Naberezhnyye Chelny",
                    L"Aksu", L"Salta", L"Astrakhan", L"Gulbarga", L"Cadaado", L"Lyon", L"Wuhai", L"Mingguang", L"Antwerp", L"Yazd", L"Touba", L"Ardabīl",
                    L"Bīkaner", L"Agartala", L"Ndola", L"Himeji", L"Palm Bay", L"Tultitlán de Mariano Escobedo", L"Ailan Mubage", L"Bandar ‘Abbās",
                    L"Bắc Ninh", L"Ciudad Apodaca", L"Santa Teresa del Tuy", L"Maipú", L"Penza", L"Soacha", L"Al Qaţīf", L"Port Said", L"Loni", L"Yucheng",
                    L"Sevastopol", L"Meknès", L"Mixco", L"Arāk", L"Pohang", L"Longzhou", L"Anda", L"Jinghong", L"Sheffield", L"Utsunomiya", L"Suez",
                    L"Nuremberg", L"Surrey", L"Heshan", L"Ujjain", L"Jiaji", L"Santa Marta", L"Joinvile", L"Beining", L"Des Moines", L"Hải Dương",
                    L"Carrefour", L"Maturín", L"Homyel’", L"Leicester", L"Yanji", L"Macapá", L"Yicheng", L"Ulhāsnagar", L"Al ‘Āshir min Ramaḑān",
                    L"Lipetsk", L"Al ‘Amārah", L"Bhīlwāra", L"Encheng", L"Murrieta", L"Aden", L"Kitwe", L"Matsuyama", L"Jhānsi", L"Pingtung", L"Lapu-Lapu City",
                    L"Matsudo", L"Montería", L"Ichikawa", L"Nagqu", L"Imus", L"Hsinchu", L"Kimberley", L"Jammu", L"Belas", L"Talatona", L"Ile-Ife",
                    L"Purnea", L"Kirov", L"Mykolaiv", L"Meicheng", L"Tinnevelly", L"Niterói", L"Farāh", L"Sukkur", L"Oujda-Angad", L"Taozhou", L"Marka",
                    L"Higashi-ōsaka", L"Johor Bahru", L"Hongjiang", L"Bello", L"Chimbote", L"Duisburg", L"Qaraghandy", L"Mesa", L"Toulouse", L"Likasi",
                    L"Dengtacun", L"Lembok", L"Zhijiang", L"Chengjiao", L"Beipiao", L"Suoluntun", L"Staten Island", L"Kota Bharu", L"Ciudad López Mateos",
                    L"Celaya", L"Vinh", L"Duyun", L"Los Mochis", L"‘Ajmān", L"Nyala", L"Larkana", L"Wichita", L"Nishinomiya-hama", L"Cheboksary",
                    L"Yuanping", L"Toledo", L"Yueqing", L"Edinburgh", L"Belgaum", L"Tula", L"Gdańsk", L"Shahe", L"Serra", L"Brookhaven", L"Gaoping",
                    L"Dunhua", L"Az Zarqā’", L"Sylhet", L"Kaihua", L"Caerdydd", L"Jāmnagar", L"Fuyuan", L"Gaya", L"Florianópolis", L"Chiniot", L"Jiannan",
                    L"Ōita", L"Berbera", L"Kaliningrad", L"Mbeya", L"Nangong", L"Ambattūr", L"Katlehong", L"Kurashiki", L"Barura", L"San Juan", L"Vila Velha",
                    L"Mazār-e Sharīf", L"Shekhupura", L"Worthing", L"Piura", L"Mandaluyong City", L"Kartal", L"Jiaojiangcun", L"Harrisburg", L"Laohekou",
                    L"Kâğıthane", L"Agege", L"Angeles City", L"São José do Rio Prêto", L"Pasay City", L"Beian", L"Fujin", L"Salt Lake City", L"Balashikha",
                    L"Xiaoyi", L"Port St. Lucie", L"Lanús", L"Qingzhen", L"Jiangshan", L"Ba‘qūbah", L"Katsushika-ku", L"Buraydah", L"Longjiang",
                    L"Tân Uyên", L"Long Beach", L"Marikina City", L"Manado", L"Campos", L"Kanazawa", L"Iloilo", L"Reno", L"Calabar", L"Kuqa", L"Piraeus",
                    L"Madison", L"Jalgaon", L"Cranbourne", L"Kowloon City", L"Mauá", L"Fukuyama", L"Xicheng", L"Kikwit", L"Amagasaki", L"Pyeongtaek",
                    L"Kurnool", L"Little Rock", L"Melaka", L"General Trias", L"Jian’ou", L"Esenler", L"Huadian", L"Ţanţā", L"Kota Kinabalu", L"Kursk",
                    L"Minzhu", L"Stavropol", L"Udaipur", L"Mogi das Cruzes", L"Mariupol", L"Eslāmshahr", L"San Nicolás de los Garza", L"Greenville",
                    L"Sham Shui Po", L"Barcelona", L"Constantine", L"Tanbei", L"Ado-Ekiti", L"Batman", L"Bandung", L"Baisha", L"Avcılar", L"Denton",
                    L"Rodriguez", L"Taoyuan District", L"Yongji", L"Chauddagram", L"Danjiangkou", L"Kahramanmaraş", L"Fujisawa", L"Andijon", L"Mathura",
                    L"Zürich", L"Diadema", L"Machida", L"Ulan-Ude", L"Spokane", L"Ning’an", L"Zhangjiakou Shi Xuanhua Qu", L"Sunch’ŏn", L"Jinchang",
                    L"Kashiwa", L"Guangming", L"Sāngli", L"Oakland", L"Beira", L"Kupang", L"Jeju", L"Davangere", L"Caxias do Sul", L"Manizales",
                    L"Yogyakarta", L"Calicut", L"Koumassi", L"Veracruz", L"Zanjān", L"Welkom", L"Shinagawa-ku", L"Kenitra", L"Agadir", L"Somolu",
                    L"Uyo", L"Sokoto", L"Lancaster", L"Masan", L"Huili Chengguanzhen", L"Sidi Bouzid", L"Cusco", L"Porto Velho", L"Sihŭng", L"Xalapa",
                    L"Florencio Varela", L"Tver", L"Trabzon", L"Malatya", L"Xunyang", L"Uijeongbu", L"Akola", L"Aomori", L"Yan’an Beilu", L"Owo",
                    L"Aves", L"Buenaventura", L"Poughkeepsie", L"Laval", L"Boise", L"Toyota", L"Santa Rosa", L"Daloa", L"Elazığ", L"Hpa-An", L"Rahimyar Khan",
                    L"Bettiah", L"Ugep", L"Winston-Salem", L"Kushtia", L"Mishan", L"Hailin", L"Seremban", L"Boa Vista", L"Lecheng", L"Zhengjiatun",
                    L"Luhansk", L"Pencheng", L"Magnitogorsk", L"Thủ Dầu Một", L"Takamatsu", L"Syracuse", L"El Obeid", L"Da’an", L"Xingren", L"Biñan",
                    L"Arusha", L"Fenyang", L"Ajdābiyā", L"Paju", L"Mataram", L"Carapicuíba", L"Jhang City", L"Tepic", L"Jayapura", L"Rio Branco",
                    L"Toyama", L"Fangting", L"Sanandaj", L"Delhi Cantonment", L"Linghai", L"Shorāpur", L"Toyonaka", L"Sochi", L"Bhāgalpur", L"Bellary",
                    L"Ivanovo", L"Kisumu", L"Augusta", L"Türkmenabat", L"Zaria", L"Bryansk", L"Kumi", L"Asyūţ", L"Wanyuan", L"Maracay", L"Padiāla",
                    L"Yüreğir", L"Jiexiu", L"Stockton", L"Bogra", L"Santa Fe", L"Campina Grande", L"Nagasaki", L"Szczecin", L"Maringá", L"Palm Coast",
                    L"Chattanooga", L"Qazvīn", L"Quilon", L"Jundiaí", L"Hirakata", L"Gifu", L"Khayelitsha", L"Kūkatpalli", L"Jiangjiafan", L"Maungdaw",
                    L"Kissimmee", L"Durham", L"Dera Ghazi Khan", L"Miyazaki", L"Bhātpāra", L"Hazāribāgh", L"Sandakan", L"Taytay", L"Hejin", L"Olinda",
                    L"Thanh Hóa", L"Surgut", L"Nnewi", L"Minamisuita", L"Thiès", L"Betsiboka", L"Belgorod", L"Tāngāil", L"Yokosuka", L"Nha Trang",
                    L"Malabon", L"Al Jahrā’", L"Yola", L"Pasto", L"Lobito", L"Al Jubayl", L"Saurimo", L"Bologna", L"Arlington", L"Gujrat", L"Ad Dīwānīyah",
                    L"Piracicaba", L"Hancheng", L"Karamay", L"Kākināda", L"San-Pédro", L"Tieli", L"Cilegon", L"Darbhanga", L"Victorville", L"Gwoza",
                    L"Saki", L"Tétouan", L"Aqtöbe", L"Bibā", L"Plovdiv", L"Oyo", L"Ilesa", L"Tarlac City", L"city", L"Tokyo", L"Jakarta", L"Delhi",
                    L"Guangzhou", L"Mumbai", L"Manila", L"Shanghai", L"São Paulo", L"Seoul", L"Mexico City", L"Cairo", L"New York", L"Dhaka", L"Beijing",
                    L"Kolkāta", L"Bangkok", L"Shenzhen", L"Moscow", L"Buenos Aires", L"Lagos", L"Istanbul", L"Karachi", L"Bangalore", L"Ho Chi Minh City",
                    L"Ōsaka", L"Chengdu", L"Tehran", L"Kinshasa", L"Rio de Janeiro", L"Chennai", L"Xi’an", L"Lahore", L"Chongqing", L"Los Angeles",
                    L"Baoding", L"London", L"Paris", L"Linyi", L"Dongguan", L"Hyderābād", L"Tianjin", L"Lima", L"Wuhan", L"Nanyang", L"Hangzhou",
                    L"Foshan", L"Nagoya", L"Taipei", L"Tongshan", L"Luanda", L"Zhoukou", L"Ganzhou", L"Kuala Lumpur", L"Heze", L"Quanzhou", L"Chicago",
                    L"Nanjing", L"Jining", L"Hanoi", L"Pune", L"Fuyang", L"Ahmedabad", L"Johannesburg", L"Bogotá", L"Dar es Salaam", L"Shenyang",
                    L"Khartoum", L"Shangqiu", L"Cangzhou", L"Hong Kong", L"Shaoyang", L"Zhanjiang", L"Yancheng", L"Hengyang", L"Riyadh", L"Zhumadian",
                    L"Santiago", L"Xingtai", L"Chattogram", L"Bijie", L"Shangrao", L"Zunyi", L"Sūrat", L"Surabaya", L"Huanggang", L"Maoming", L"Nanchong",
                    L"Xinyang", L"Madrid", L"Baghdad", L"Qujing", L"Jieyang", L"Singapore", L"Prayagraj", L"Liaocheng", L"Dalian", L"Yulin", L"Changde",
                    L"Qingdao", L"Douala", L"Miami", L"Nangandao", L"Pudong", L"Xiangyang", L"Dallas", L"Houston", L"Zhengzhou", L"Lu’an", L"Dezhou",
                    L"Jinan", L"Giza", L"Zhaotong", L"Yichun", L"Nairobi", L"Guadalajara", L"Philadelphia", L"Ankara", L"Tai’an", L"Dazhou", L"Langfang",
                    L"Yongzhou", L"Toronto", L"Suihua", L"Saint Petersburg", L"Qiqihar", L"Suzhou", L"Monterrey", L"Belo Horizonte", L"Weinan", L"Rangoon",
                    L"Zhangzhou", L"Yuncheng", L"Xianyang", L"Guilin", L"Atlanta", L"Taizhou", L"Kāshān", L"Bozhou", L"Abidjan", L"Suqian", L"Huaihua",
                    L"Ji’an", L"Xiaoganzhan", L"Pingdingshan", L"Jiujiang", L"Alexandria", L"Mianyang", L"Sydney", L"Huanglongsi", L"Washington",
                    L"Barcelona", L"Changsha", L"Chenzhou", L"Anqing", L"Jiangmen", L"Xinpu", L"Yibin", L"Yangzhou", L"Melbourne", L"Berlin", L"Hengshui",
                    L"Timbío", L"Kunming", L"Yiyang", L"Guigang", L"Changchun", L"Jiangguanchi", L"Casablanca", L"Meizhou", L"Zhangjiakou", L"Chifeng",
                    L"Ürümqi", L"Suzhou", L"İzmir", L"Linfen", L"Shantou", L"Kabul", L"Mogadishu", L"Luzhou", L"Hefei", L"Boston", L"Liuzhou", L"Zhaoqing",
                    L"Xiaoxita", L"Shijiazhuang", L"Ningbo", L"Fuzhou", L"Phoenix", L"Zhuzhou", L"Amman", L"Chuzhou", L"Jeddah", L"Qingyuan", L"Loudi",
                    L"Binzhou", L"Deyang", L"Taiyuan", L"Kano", L"Wuhu", L"Nanning", L"Harbin", L"Abuja", L"Yokohama", L"Baojishi", L"Zaozhuang",
                    L"Xiamen", L"Neijiang", L"Fuzhou", L"Baicheng", L"Anshan", L"Medan", L"Yulinshi", L"Wenzhou", L"Changzhou", L"Puyang", L"Jiaozuo",
                    L"Nanchang", L"Ibadan", L"Hechi", L"Detroit", L"Montréal", L"Busan", L"Hohhot", L"Seattle", L"Algiers", L"Hanzhong", L"Tangshan",
                    L"Shiyan", L"Lucknow", L"Siping", L"Mashhad", L"Boankra", L"Changzhi", L"Dubai", L"Qinzhou", L"Guiyang", L"Bengbu", L"San Francisco",
                    L"Bazhou", L"Qincheng", L"Suining", L"Wuxi", L"Leshan", L"Putian", L"Zhenjiang", L"Faisalabad", L"Guang’an", L"Tongren", L"Santa Cruz",
                    L"Qinhuangdao", L"Tongliao", L"Jinzhou", L"Heyuan", L"San Diego", L"Jaipur", L"Xinzhou", L"Lanzhou", L"Wuzhou", L"Athens", L"Addis Ababa",
                    L"Chaoyang", L"Brasília", L"Taichung", L"Kuwait City", L"Budapest", L"Shaoguan", L"Shanwei", L"Quezon City", L"Rizhao", L"Kyiv",
                    L"Sanaa", L"Meishan", L"Incheon", L"Guatemala City", L"Birmingham", L"Zhongshan", L"Ningde", L"Weihai", L"Daqing", L"Bursa",
                    L"Salvador", L"Rome", L"Haikou", L"La Paz", L"Xiangtan", L"Pyongyang", L"Minneapolis", L"Omdurman", L"Malang", L"Mudanjiang",
                    L"Stuttgart", L"Brooklyn", L"Kaohsiung", L"Guayaquil", L"Lisbon", L"Longyan", L"Tieling", L"Manchester", L"Baotou", L"Handan",
                    L"Cawnpore", L"Dingxi", L"Nanping", L"Tampa", L"Zigong", L"Maracaibo", L"Chaozhou", L"Mbuji-Mayi", L"Denver", L"Gulou", L"Weifang",
                    L"Huai’an", L"Zibo", L"Ankang", L"Baoshan", L"Antananarivo", L"Huludao", L"Munich", L"Yanjiang", L"Santo Domingo", L"Sanming",
                    L"Tashkent", L"Longba", L"Yangjiang", L"Jiamusi", L"Luohe", L"Lincang", L"Medellín", L"Xuanzhou", L"Yunfu", L"Shaoxing", L"Yantai",
                    L"Huizhou", L"Lishui", L"Mirzāpur", L"Hamburg", L"Guangyuan", L"Cali", L"Lusaka", L"Huangshi", L"Xining", L"Ouagadougou", L"Daegu",
                    L"Fortaleza", L"Yaoundé", L"Jilin", L"Dandong", L"Zhuhai", L"Lianshan", L"Yingkou", L"Antalya", L"Nāgpur", L"Queens", L"Accra",
                    L"Bekasi", L"Ghāziābād", L"Yuxi", L"Luoyang", L"Brisbane", L"Anshun", L"Depok", L"Shangzhou", L"Huainan", L"Colombo", L"Kuaidamao",
                    L"Baku", L"Fukuoka", L"Yan’an", L"Jincheng", L"Vancouver", L"Nantong", L"Tangerang", L"Caracas", L"Sanmenxia", L"Laibin", L"Konya",
                    L"Manaus", L"Eşfahān", L"Qinbaling", L"Baltimore", L"Ma’anshan", L"Shengli", L"Gaoping", L"Taizhou", L"Harare", L"Kowloon", L"Las Vegas",
                    L"Havana", L"Perth", L"Phnom Penh", L"Puning", L"Huaibei", L"Qingyang", L"Haiphong", L"Chongzuo", L"Rawalpindi", L"Yushan", L"St. Louis",
                    L"Kumasi", L"Vadodara", L"Hezhou", L"Pingliang", L"Portland", L"Vishākhapatnam", L"Gujranwala", L"Baicheng", L"Gaziantep", L"Fushun",
                    L"Riverside", L"Bamako", L"Quito", L"Minsk", L"Tijuana", L"Bamenda", L"Boosaaso", L"Indore", L"Şanlıurfa", L"Vienna", L"Karaj",
                    L"Kananga", L"Peshawar", L"Sapporo", L"Ecatepec", L"Pingxiang", L"Orlando", L"Aleppo", L"Sacramento", L"Almaty", L"San Juan",
                    L"San Antonio", L"Yinchuan", L"Thāne", L"Santos", L"Blantyre", L"Bucharest", L"Curitiba", L"Multan", L"Tainan", L"Xiping", L"Port Harcourt",
                    L"Warsaw", L"Jixi", L"Saidu Sharif", L"Liaoyang", L"Beihai", L"Meru", L"Brazzaville", L"Fuxin", L"Wuwei", L"Mersin", L"Bhopāl",
                    L"Lubumbashi", L"Denpasar", L"Davao", L"Shuyangzha", L"Adana", L"Damascus", L"Brussels", L"Hyderabad City", L"Diyarbakır", L"San Jose",
                    L"Chinchvad", L"Montevideo", L"Pittsburgh", L"Shuozhou", L"Cincinnati", L"Benxi", L"Baiyin", L"Mosul", L"Manhattan", L"Caloocan City",
                    L"Kampala", L"Patna", L"Tegucigalpa", L"Cleveland", L"Sanzhou", L"Changshu", L"Mecca", L"Heihe", L"Jingdezhen", L"Conakry", L"Recife",
                    L"Indianapolis", L"Austin", L"Sangereng", L"Kansas City", L"Zhongli", L"Novosibirsk", L"Bilāspur", L"Semarang", L"Ludhiāna",
                    L"Nārāyanganj", L"Stockholm", L"Chengtangcun", L"Āgra", L"Balandougou", L"Agwār", L"León de los Aldama", L"Yopougon", L"Puebla",
                    L"Madurai", L"Hebi", L"Córdoba", L"Shīrāz", L"Jamshedpur", L"Tabrīz", L"Huzhou", L"Columbus", L"Sofia", L"Kawasaki", L"San José",
                    L"Aba", L"Palembang", L"Zhangjiajie", L"Kōbe", L"Jiaxing", L"Charlotte", L"Guiping", L"Lianjiang", L"Ximeicun", L"Jianguang",
                    L"Yucheng", L"Panama City", L"Xushan", L"Belém", L"Virginia Beach", L"Leizhou", L"Gwangju", L"Nāsik", L"Porto Alegre", L"Valencia",
                    L"Onitsha", L"Abu Dhabi", L"Daejeon", L"Zapopan", L"Bronx", L"Yekaterinburg", L"Huazhou", L"Kyōto", L"Jinhua", L"Amsterdam",
                    L"Shuangyashan", L"Pizhou", L"El Kelaa des Srarhna", L"Dakar", L"Kharkiv", L"Yangshe", L"Guyuan", L"Rui’an", L"Khulna", L"Muscat",
                    L"Wenling", L"Gaozhou", L"Farīdābād", L"Chizhou", L"Tel Aviv-Yafo", L"Ulaanbaatar", L"Goiânia", L"Fuqing", L"Kayseri", L"Wuzhong",
                    L"Belgrade", L"Pingdu", L"Milan", L"Aurangābād", L"Copenhagen", L"Yangquan", L"Yutan", L"Huangshan", L"Auckland", L"Makassar",
                    L"Santiago", L"Milwaukee", L"Rājkot", L"Prague", L"Samsun", L"Liangshi", L"Barranquilla", L"Saitama", L"Guarulhos", L"Al Başrah",
                    L"Mandalay", L"Juárez", L"Xintai", L"Wusong", L"Meerut", L"Yushu", L"Rongcheng", L"Huazhou", L"Adelaide", L"Baishan", L"Dayan",
                    L"Haicheng", L"Tripoli", L"Jiangyin", L"Yicheng", L"Huaiyin", L"Porto", L"Cacuaco", L"Soweto", L"Rosario", L"Canagatan", L"Helsinki",
                    L"Jabalpur", L"Providence", L"Rucheng", L"Nizhniy Novgorod", L"Ahvāz", L"Jepara", L"Shaoyang", L"Comayagüela", L"Laiwu", L"Sharjah",
                    L"Kalamboli", L"Jingling", L"Kazan", L"Suwon", L"Yongcheng", L"Sumedang", L"Calgary", L"Cần Thơ", L"Yiwu", L"Bagam", L"Beidao",
                    L"Vasai", L"Xiangshui", L"Jacksonville", L"Akçaabat", L"Campinas", L"Dadukou", L"Mombasa", L"Lingcheng", L"Najafgarh", L"Vila Velha",
                    L"Gāzipura", L"Chelyabinsk", L"Vārānasi", L"Xinyu", L"Qom", L"Hargeysa", L"Zhangye", L"Hiroshima", L"Maiduguri", L"Chiang Mai",
                    L"Doha", L"Maputo", L"Mbandaka", L"Pikine", L"Medina", L"Srīnagar", L"Omsk", L"Dublin", L"Liaoyuan", L"Cilacap", L"Yingtan",
                    L"Bandar Lampung", L"Samara", L"Guankou", L"Ulsan", L"Dhanbād", L"Dingzhou", L"Lianyuan", L"Rongcheng", L"Kaiyuan", L"Nay Pyi Taw",
                    L"Zhuji", L"Kigali", L"Bukavu", L"Leiyang", L"Bafoussam", L"Yichun", L"Benin City", L"Rostov", L"Xiantao", L"Amritsar", L"Callao",
                    L"Salt Lake City", L"Alīgarh", L"Shagamu", L"Yingchuan", L"Ciudad Nezahualcóyotl", L"Tbilisi", L"Guwāhāti", L"Ufa", L"Fès", L"São Luís",
                    L"Biên Hòa", L"Sevilla", L"N’Djamena", L"Mexicali", L"Nezahualcóyotl", L"Ikare", L"Nashville", L"Tamale", L"Xibeijie", L"Yuyao",
                    L"Hāora", L"Hanchuan", L"Gongzhuling", L"Krasnoyarsk", L"Cologne", L"Bujumbura", L"Bishkek", L"Zhufeng", L"São Gonçalo", L"Yerevan",
                    L"Ezhou", L"Nur-Sultan", L"Tongjin", L"Nouakchott", L"Xiashi", L"Rānchi", L"Taixing", L"Vereeniging", L"Gwalior", L"Zhongwei",
                    L"Goyang", L"Oslo", L"Vijayavāda", L"Chandīgarh", L"Edmonton", L"Sendai", L"Raleigh", L"Mizhou", L"Tunis", L"Xishan", L"Barquisimeto",
                    L"Hegang", L"Voronezh", L"Perm", L"Changwon", L"Fangchenggang", L"Shouguang", L"Bogor", L"Cartagena", L"Matola", L"Jodhpur",
                    L"Memphis", L"Ogbomoso", L"Rangapukur", L"Managua", L"Sanya", L"Shymkent", L"Wutong", L"Niamey", L"Shubrā al Khaymah", L"Linhai",
                    L"Denizli", L"Maceió", L"Monrovia", L"Wafangdian", L"Zhongxiang", L"Louisville", L"Odesa", L"Thủ Đức", L"Volgograd", L"Islamabad",
                    L"Port-au-Prince", L"Xinyi", L"Raipur", L"Arequipa", L"Richmond", L"Zaoyang", L"Buffalo", L"Shuizhai", L"Xingyi", L"Kota", L"Quetta",
                    L"Kathmandu", L"Ottawa", L"Lilongwe", L"Asmara", L"Freetown", L"Vientiane", L"Jerusalem", L"Riga", L"Bangui", L"Dushanbe", L"Lomé",
                    L"Ashgabat", L"Zagreb", L"Libreville", L"Cotonou", L"Pretoria", L"Vilnius", L"Winnipeg", L"Quebec City", L"Chisinau", L"Port Moresby",
                    L"Skopje", L"Djibouti", L"Gaza", L"Kingston", L"Rabat", L"San Salvador", L"The Hague", L"Asunción", L"Juba", L"Maseru", L"Bissau",
                    L"Valletta", L"Bratislava", L"Kitchener", L"Manama", L"Tallinn", L"Beirut", L"Cape Town", L"Tirana", L"Sarajevo", L"Wellington",
                    L"Banjul", L"Halifax", L"Canberra", L"Yamoussoukro", L"Victoria", L"Nicosia", L"Windhoek", L"Saint-Denis", L"Porto-Novo", L"Sucre",
                    L"Ljubljana", L"Nassau", L"Bloemfontein", L"Fort-de-France", L"New Delhi", L"Gaborone", L"Paramaribo", L"Dili", L"Dodoma", L"Georgetown",
                    L"Gibraltar", L"Malabo", L"Suva", L"Nouméa", L"Pristina", L"Male", L"Port Louis", L"Podgorica", L"Willemstad", L"Bern", L"Gitega",
                    L"Reykjavík", L"Luxembourg", L"Papeete", L"Praia", L"Sri Jayewardenepura Kotte", L"Bridgetown", L"Moroni", L"Thimphu", L"Mbabane",
                    L"Honiara", L"Port of Spain", L"Castries", L"Putrajaya", L"Cayenne", L"São Tomé", L"Port-Vila", L"Bandar Seri Begawan", L"Monaco",
                    L"Apia", L"Tarawa", L"Oranjestad", L"Saint Helier", L"Mamoudzou", L"Majuro", L"Douglas", L"George Town", L"Victoria", L"Kingstown",
                    L"Andorra la Vella", L"Saint John’s", L"Nuku‘alofa", L"Nuuk", L"Belmopan", L"Roseau", L"Basseterre", L"Tórshavn", L"Road Town",
                    L"Pago Pago", L"Grand Turk", L"Marigot", L"Palikir", L"Funafuti", L"Vaduz", L"Lobamba", L"Avarua", L"Saint George’s", L"San Marino",
                    L"Tifariti", L"Philipsburg", L"Capitol Hill", L"Stanley", L"Hamilton", L"Vatican City", L"Alofi", L"Basse-Terre", L"Hagåtña",
                    L"Jamestown", L"Brades", L"Yaren", L"Gustavia", L"Ngerulmud", L"Saint-Pierre", L"The Valley", L"Mata-Utu", L"Kingston", L"Longyearbyen",
                    L"Adamstown", L"Flying Fish Cove", L"King Edward Point", L"Bareilly", L"Quảng Hà", L"Domaa-Ahenkro", L"Oklahoma City", L"Xingcheng",
                    L"Dongtai", L"Yingcheng", L"Chiba", L"Al Mijlad", L"Pekanbaru", L"Luocheng", L"Dnipro", L"Danyang", L"Godē", L"Natal", L"Nada",
                    L"Zamboanga City", L"Kirkuk", L"Bridgeport", L"Naples", L"Wuchuan", L"Huilong", L"Morelia", L"Málaga", L"Cebu City", L"Al Manşūrah",
                    L"Coimbatore", L"Santo Domingo Este", L"Setagaya", L"Sŏngnam", L"Taishan", L"Teresina", L"Solāpur", L"Tangier", L"Kermānshāh",
                    L"Krasnodar", L"Baidoa", L"Gaalkacyo", L"Anqiu", L"Feicheng", L"Seberang Jaya", L"El Alto", L"Kitakyūshū", L"Meishan", L"Khartoum North",
                    L"Kisangani", L"Aguascalientes", L"Marrakech", L"Donetsk", L"Trujillo", L"New Orleans", L"Taihe", L"Trichinopoly", L"Xin’an",
                    L"Taihecun", L"Kashgar", L"Naucalpan de Juárez", L"Çankaya", L"Santiago de Cuba", L"Owerri", L"Padang", L"Qingzhou", L"Lichuan",
                    L"Santiago del Estero", L"Daye", L"Hengzhou", L"Fort Worth", L"Hartford", L"Esenyurt", L"Campo Grande", L"Zhuanghe", L"Bobo-Dioulasso",
                    L"Ad Dammām", L"Quzhou", L"Lhasa", L"Jiaozhou", L"Bunia", L"Taguig City", L"Cancún", L"Mérida", L"Yangchun", L"Dengtalu", L"Morādābād",
                    L"Antipolo", L"Abeokuta", L"Bucheon", L"Zhoushan", L"Tiruppūr", L"Natal", L"Chihuahua", L"Klang", L"As Sulaymānīyah", L"Gurgaon",
                    L"Turin", L"Tucson", L"Hai’an", L"Ar Ramādī", L"Laiyang", L"Sale", L"Jalandhar", L"Marseille"
            });
            this->txtCity->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
            this->txtCity->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
            this->txtCity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->txtCity->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->txtCity->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCity->ForeColor = System::Drawing::Color::White;
            this->txtCity->Location = System::Drawing::Point(3, 6);
            this->txtCity->Name = L"txtCity";
            this->txtCity->Size = System::Drawing::Size(437, 27);
            this->txtCity->TabIndex = 4;
            this->txtCity->Text = L"Pakistan";
            this->txtCity->TextChanged += gcnew System::EventHandler(this, &Home::txtCity_TextChanged);
            // 
            // label
            // 
            this->label->AutoSize = true;
            this->label->BackColor = System::Drawing::Color::Transparent;
            this->label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label->ForeColor = System::Drawing::Color::SeaShell;
            this->label->Location = System::Drawing::Point(17, 0);
            this->label->Name = L"label";
            this->label->Size = System::Drawing::Size(191, 31);
            this->label->TabIndex = 9;
            this->label->Text = L"Current Weather";
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::Transparent;
            this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
            this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel3->Controls->Add(this->lblWind);
            this->panel3->Controls->Add(this->pictureBox1);
            this->panel3->Controls->Add(this->lbltemperature);
            this->panel3->Controls->Add(this->label);
            this->panel3->Controls->Add(this->lblfeelslike);
            this->panel3->Controls->Add(this->lbltemp_min);
            this->panel3->Controls->Add(this->label5);
            this->panel3->Controls->Add(this->lbltemp_max);
            this->panel3->Controls->Add(this->lblhumidity);
            this->panel3->Controls->Add(this->lblpressure);
            this->panel3->Controls->Add(this->label6);
            this->panel3->Controls->Add(this->label7);
            this->panel3->Controls->Add(this->label8);
            this->panel3->Location = System::Drawing::Point(367, 293);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(480, 234);
            this->panel3->TabIndex = 16;
            // 
            // lblWind
            // 
            this->lblWind->AutoSize = true;
            this->lblWind->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblWind->Location = System::Drawing::Point(266, 113);
            this->lblWind->Name = L"lblWind";
            this->lblWind->Size = System::Drawing::Size(184, 28);
            this->lblWind->TabIndex = 18;
            this->lblWind->Text = L"Wind Speed: 1m/s";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(29, 43);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(118, 103);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox1->TabIndex = 16;
            this->pictureBox1->TabStop = false;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->panel4->Controls->Add(this->txtCity);
            this->panel4->Controls->Add(this->pictureBox2);
            this->panel4->Location = System::Drawing::Point(364, 58);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(474, 36);
            this->panel4->TabIndex = 17;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(438, 1);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(36, 36);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 18;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &Home::pictureBox2_Click);
            // 
            // FavBox
            // 
            this->FavBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(176)));
            this->FavBox->Cursor = System::Windows::Forms::Cursors::Hand;
            this->FavBox->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->FavBox->ForeColor = System::Drawing::Color::White;
            this->FavBox->Location = System::Drawing::Point(872, 149);
            this->FavBox->Name = L"FavBox";
            this->FavBox->Size = System::Drawing::Size(268, 36);
            this->FavBox->TabIndex = 19;
            this->FavBox->Text = L"Favourites";
            this->FavBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::FavBox_SelectedIndexChanged);
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(868, 59);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(34, 32);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 20;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &Home::pictureBox3_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(901, 63);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(179, 28);
            this->label4->TabIndex = 21;
            this->label4->Text = L"Add to Favourites";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(901, 105);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(163, 28);
            this->label9->TabIndex = 22;
            this->label9->Text = L"Clear Favourites";
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(869, 101);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(33, 34);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox4->TabIndex = 23;
            this->pictureBox4->TabStop = false;
            this->pictureBox4->Click += gcnew System::EventHandler(this, &Home::pictureBox4_Click);
            // 
            // Home
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 23);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1153, 620);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->FavBox);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->sidebarPanel);
            this->Controls->Add(this->panel1);
            this->DoubleBuffered = true;
            this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ForeColor = System::Drawing::Color::White;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
            this->Name = L"Home";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Home";
            this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMenu))->EndInit();
            this->sidebarPanel->ResumeLayout(false);
            this->weatherpanel->ResumeLayout(false);
            this->ForecastContainer->ResumeLayout(false);
            this->forecastpanel->ResumeLayout(false);
            this->hourlypanel->ResumeLayout(false);
            this->weeklypanel->ResumeLayout(false);
            this->logoutpanel->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnForecast_Click(System::Object^ sender, System::EventArgs^ e) {
        ForecastTransition->Start();
	}
	private: System::Void ForecastTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (menuExpand)
		{
			ForecastContainer->Height += 10;
			if (ForecastContainer->Height == ForecastContainer->MaximumSize.Height) {
				menuExpand = false;
				ForecastTransition->Stop();
			}
		}
		else {
			ForecastContainer->Height -= 10;
			if (ForecastContainer->Height <= ForecastContainer->MinimumSize.Height)
			{
				menuExpand = true;
				ForecastTransition->Stop();

			}
		}
	}
	private: System::Void sidebartransition_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		if (sidebarExpand)
		{
			//if sidebar is expand, minimize
			sidebarPanel->Width -= 15;
			if (sidebarPanel->Width == sidebarPanel->MinimumSize.Width)
			{
				sidebarExpand = false;
				sidebartransition->Stop();
				weatherpanel->Width = sidebarPanel->Width;
				ForecastContainer->Width = sidebarPanel->Width;
				weeklypanel->Width = sidebarPanel->Width;
				hourlypanel->Width = sidebarPanel->Width;
				logoutpanel->Width = sidebarPanel->Width;

			}
		}
		else {
			sidebarPanel->Width += 10;
			if (sidebarPanel->Width == sidebarPanel->MaximumSize.Width)
			{
				sidebarExpand = true;
				sidebartransition->Stop();
				weatherpanel->Width = sidebarPanel->Width;
				ForecastContainer->Width = sidebarPanel->Width;
				weeklypanel->Width = sidebarPanel->Width;
				hourlypanel->Width = sidebarPanel->Width;
				logoutpanel->Width = sidebarPanel->Width;

			}
		}
	}
	private: System::Void btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		sidebartransition->Start();
	}
	private: System::Void date_timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = DateTime::Now.ToLongTimeString();
		label2->Text = DateTime::Now.ToLongDateString();
	}
	private: System::Void panel2_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		date_timer->Start();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Are you sure you want to logout?", "Exit from WeatherSphere", MessageBoxButtons::OKCancel, MessageBoxIcon::Asterisk);
        Application::Exit();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnHourly_Click(System::Object^ sender, System::EventArgs^ e) {
        
        HourlyForecast^ hrfc = gcnew HourlyForecast();
        hrfc->Show();
        
    }
	private: System::Void btnWeekly_Click(System::Object^ sender, System::EventArgs^ e) {

        newproject^ proj = gcnew newproject();
        proj->ShowDialog();
    }
	private: System::Void txtCity_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: std::string PerformHttpRequest(const std::wstring& url)
	{

		HINTERNET hInternet = InternetOpen(L"WinINet Weather App", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);

		if (!hInternet) {
			return "Error initializing WinINet.";
		}

		HINTERNET hConnect = InternetOpenUrl(hInternet, url.c_str(), NULL, 0, INTERNET_FLAG_RELOAD, 0);

		if (!hConnect) {
			InternetCloseHandle(hInternet);
			return "Error opening URL.";
		}

		std::ostringstream responseStream;
		char buffer[1024];
		DWORD bytesRead = 0;

		while (InternetReadFile(hConnect, buffer, sizeof(buffer), &bytesRead) && bytesRead > 0) {
			responseStream.write(buffer, bytesRead);
		}

		InternetCloseHandle(hConnect);
		InternetCloseHandle(hInternet);

		return responseStream.str();
	}

private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	lblCity->Text = txtCity->Text;
	String^ City = txtCity->Text;
	// Get city from the textbox
	String^ city = txtCity->Text;

	// Convert city to std::wstring
	std::wstring cityWStr = msclr::interop::marshal_as<std::wstring>(city);

	// Construct the API URL
	std::wstring apiUrl = L"http://api.openweathermap.org/data/2.5/weather?q=" + cityWStr + L"&appid=57b9761aef0a90b22943d0c97f2e3fc8";

	// Perform HTTP request
	std::string weatherInfo = PerformHttpRequest(apiUrl);

	// Display temperature
	DisplayWeatherInfo(weatherInfo);
}

       void DisplayWeatherInfo(const std::string& weatherInfo)
       {
           // Find the position of the "temp" key
           size_t tempPos = weatherInfo.find("\"temp\":");

           if (tempPos != std::string::npos) {
               // Find the start position of the temperature value
               size_t valueStartPos = weatherInfo.find_first_of("+-0123456789", tempPos);

               if (valueStartPos != std::string::npos) {
                   // Find the end position of the temperature value
                   size_t valueEndPos = weatherInfo.find_first_not_of("0123456789.eE", valueStartPos);

                   if (valueEndPos != std::string::npos) {
                       // Extract and convert the temperature value to Celsius without decimal points
                       std::string temperatureStr = weatherInfo.substr(valueStartPos, valueEndPos - valueStartPos);
                       double temperatureKelvin = std::stod(temperatureStr);
                       int temperatureCelsius = static_cast<int>(temperatureKelvin - 273.15);

                       // Display temperature
                       lbltemperature->Text = gcnew String(std::to_string(temperatureCelsius).c_str()) + "°";

                   }
               }
           }
           // Find the position of the "humidity" key
           size_t humidityPos = weatherInfo.find("\"humidity\":");

           if (humidityPos != std::string::npos) {
               // Find the start position of the humidity value
               size_t valueStartPos = weatherInfo.find_first_of("0123456789", humidityPos);

               if (valueStartPos != std::string::npos) {
                   // Find the end position of the humidity value
                   size_t valueEndPos = weatherInfo.find_first_not_of("0123456789", valueStartPos);

                   if (valueEndPos != std::string::npos) {
                       // Extract and convert the humidity value
                       std::string humidityStr = weatherInfo.substr(valueStartPos, valueEndPos - valueStartPos);
                       int humidity = std::stoi(humidityStr);

                       // Display humidity
                       lblhumidity->Text = gcnew String(std::to_string(humidity).c_str()) + "%";
                   }
               }
           }

           // Find the position of the "feels_like" key
           size_t feelsLikePos = weatherInfo.find("\"feels_like\":");

           if (feelsLikePos != std::string::npos) {
               // Find the start position of the feels_like value
               size_t valueStartPos = weatherInfo.find_first_of("+-0123456789", feelsLikePos);

               if (valueStartPos != std::string::npos) {
                   // Find the end position of the feels_like value
                   size_t valueEndPos = weatherInfo.find_first_not_of("0123456789.eE", valueStartPos);

                   if (valueEndPos != std::string::npos) {
                       // Extract and convert the feels_like value to Celsius without decimal points
                       std::string feelsLikeStr = weatherInfo.substr(valueStartPos, valueEndPos - valueStartPos);
                       double feelsLikeKelvin = std::stod(feelsLikeStr);
                       int feelsLikeCelsius = static_cast<int>(feelsLikeKelvin - 273.15);

                       // Display feels like temperature
                       lblfeelslike->Text = "Feels like: " + gcnew String(std::to_string(feelsLikeCelsius).c_str()) + "°";
                   }
               }
           }
           // Find the position of the "temp_min" key
           size_t tempMinPos = weatherInfo.find("\"temp_min\":");

           if (tempMinPos != std::string::npos) {
               // Find the start position of the temp_min value
               size_t valueStartPos = weatherInfo.find_first_of("+-0123456789", tempMinPos);

               if (valueStartPos != std::string::npos) {
                   // Find the end position of the temp_min value
                   size_t valueEndPos = weatherInfo.find_first_not_of("0123456789.eE", valueStartPos);

                   if (valueEndPos != std::string::npos) {
                       // Extract and convert the temp_min value to Celsius without decimal points
                       std::string tempMinStr = weatherInfo.substr(valueStartPos, valueEndPos - valueStartPos);
                       double tempMinKelvin = std::stod(tempMinStr);
                       int tempMinCelsius = static_cast<int>(tempMinKelvin - 273.15);

                       // Display min temperature
                       lbltemp_min->Text = gcnew String(std::to_string(tempMinCelsius).c_str()) + "°";
                   }
               }
           }

           // Find the position of the "temp_max" key
           size_t tempMaxPos = weatherInfo.find("\"temp_max\":");

           if (tempMaxPos != std::string::npos) {
               // Find the start position of the temp_max value
               size_t valueStartPos = weatherInfo.find_first_of("+-0123456789", tempMaxPos);

               if (valueStartPos != std::string::npos) {
                   // Find the end position of the temp_max value
                   size_t valueEndPos = weatherInfo.find_first_not_of("0123456789.eE", valueStartPos);

                   if (valueEndPos != std::string::npos) {
                       // Extract and convert the temp_max value to Celsius without decimal points
                       std::string tempMaxStr = weatherInfo.substr(valueStartPos, valueEndPos - valueStartPos);
                       double tempMaxKelvin = std::stod(tempMaxStr);
                       int tempMaxCelsius = static_cast<int>(tempMaxKelvin - 273.15);

                       // Display max temperature
                       lbltemp_max->Text = gcnew String(std::to_string(tempMaxCelsius).c_str()) + "°";
                   }
               }
           }
           size_t windSpeedPos = weatherInfo.find("\"speed\":");
           if (windSpeedPos != std::string::npos) {
               size_t windSpeedStartPos = weatherInfo.find_first_of("0123456789", windSpeedPos);
               size_t windSpeedEndPos = weatherInfo.find_first_not_of("0123456789.eE", windSpeedStartPos);
               if (windSpeedStartPos != std::string::npos && windSpeedEndPos != std::string::npos) {
                   std::string windSpeedStr = weatherInfo.substr(windSpeedStartPos, windSpeedEndPos - windSpeedStartPos);
                   int windSpeed = std::stod(windSpeedStr);

                   // Display the wind speed
                   lblWind->Text = "Wind Speed: " + gcnew String(std::to_string(windSpeed).c_str()) + " m/s";
               }
           }
       }

private: System::Void FavBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    txtCity->Text = FavBox->Text;
}

private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
    FavBox->Items->Add(txtCity->Text);
    // Save ComboBox items to file
    SaveDataToFile();
    
}

private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
    // Clear ComboBox and remove data from file
    FavBox->Items->Clear();
    RemoveDataFromFile();
}
       void SaveDataToFile()
       {
           try {
               StreamWriter^ writer = gcnew StreamWriter("data.txt");

               for each (String ^ item in FavBox->Items)
               {
                   writer->WriteLine(item);
               }

               writer->Close();
           }
           catch (Exception^ ex) {
               //MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
           }
       }
       void RemoveDataFromFile()
       {
           try {
               File::Delete("data.txt");
           }
           catch (Exception^ ex) {
              // MessageBox::Show("Error : " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
           }
       }
       void LoadDataFromFile()
       {
           try {
               StreamReader^ reader = gcnew StreamReader("data.txt");

               String^ line;
               while ((line = reader->ReadLine()) != nullptr)
               {
                   FavBox->Items->Add(line);
               }

               reader->Close();
           }
           catch (Exception^ ex) {
               
               //file doesn't exist initially
           }
       }
};
}

