#pragma once
#include "BackEnd.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm()
		{
			// Initializing Train
			Train = new train;
			// Initializing Interface
			InitializeComponent();
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ INTRO;
	private: System::Windows::Forms::PictureBox^ AnimationTrain;
	private: System::Windows::Forms::Button^ AddBogie;
	private: System::Windows::Forms::Button^ RemoveBogie;
	private: System::Windows::Forms::Button^ SearchBogie;
	private: System::Windows::Forms::Button^ PrintTrain;
	private: System::Windows::Forms::Button^ Quit;
	private: System::Windows::Forms::Button^ AddPassengers;
	private: System::Windows::Forms::Button^ PrintBogie;
	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::Button^ Adult;
	private: System::Windows::Forms::Button^ Kid;
		   train* Train; // Train Pointer
	private: System::Windows::Forms::Label^ AdultName;
	private: System::Windows::Forms::Label^ Heading;
	private: System::Windows::Forms::Label^ AdultAge;
	private: System::Windows::Forms::Label^ AdultGender;
	private: System::Windows::Forms::Label^ AdultOccupation;
	private: System::Windows::Forms::Label^ AdultQualification;
	private: System::Windows::Forms::Label^ AdultNIC;
	private: System::Windows::Forms::Label^ KidName;
	private: System::Windows::Forms::Label^ KidAge;
	private: System::Windows::Forms::Label^ KidGender;
	private: System::Windows::Forms::Label^ KidBForm;
	private: System::Windows::Forms::TextBox^ NameText;
	private: System::Windows::Forms::TextBox^ AgeText;
	private: System::Windows::Forms::TextBox^ GenderText;
	private: System::Windows::Forms::TextBox^ OccupationText;
	private: System::Windows::Forms::TextBox^ QualificationText;
	private: System::Windows::Forms::TextBox^ NICText;
	private: System::Windows::Forms::TextBox^ BFormText;
	private: System::Windows::Forms::Button^ AdultSubmit;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::TextBox^ IDText;
	private: System::Windows::Forms::Button^ SubmitID;
	private: System::Windows::Forms::Button^ RemoveIDSubmit;
	private: System::Windows::Forms::Button^ SearchID;
	private: System::Windows::Forms::Label^ BoogieEvent;
	private: System::Windows::Forms::Button^ PassengerSubmit;
	private: System::Windows::Forms::Button^ KidSubmit;
	private: System::Windows::Forms::Label^ PassengerEvent;
	private: System::Windows::Forms::Button^ BackToAddPassenger;
	private: System::Windows::Forms::Button^ PrintBogieSubmit;
	private: System::Windows::Forms::Label^ KidPassengerInfo;
	private: System::Windows::Forms::Label^ AdultPassengerInfo;
	private: System::Windows::Forms::Label^ TrainPrint;
	private: System::Windows::Forms::Button^ AddFamilyName;
	private: System::Windows::Forms::Label^ FamilyNameLabel;
	private: System::Windows::Forms::Button^ FamilyNameSubmit;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->AnimationTrain = (gcnew System::Windows::Forms::PictureBox());
			this->AddBogie = (gcnew System::Windows::Forms::Button());
			this->RemoveBogie = (gcnew System::Windows::Forms::Button());
			this->SearchBogie = (gcnew System::Windows::Forms::Button());
			this->PrintTrain = (gcnew System::Windows::Forms::Button());
			this->Quit = (gcnew System::Windows::Forms::Button());
			this->AddPassengers = (gcnew System::Windows::Forms::Button());
			this->PrintBogie = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->Adult = (gcnew System::Windows::Forms::Button());
			this->Kid = (gcnew System::Windows::Forms::Button());
			this->AdultName = (gcnew System::Windows::Forms::Label());
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->AdultAge = (gcnew System::Windows::Forms::Label());
			this->AdultGender = (gcnew System::Windows::Forms::Label());
			this->AdultOccupation = (gcnew System::Windows::Forms::Label());
			this->AdultQualification = (gcnew System::Windows::Forms::Label());
			this->AdultNIC = (gcnew System::Windows::Forms::Label());
			this->KidName = (gcnew System::Windows::Forms::Label());
			this->KidAge = (gcnew System::Windows::Forms::Label());
			this->KidGender = (gcnew System::Windows::Forms::Label());
			this->KidBForm = (gcnew System::Windows::Forms::Label());
			this->NameText = (gcnew System::Windows::Forms::TextBox());
			this->AgeText = (gcnew System::Windows::Forms::TextBox());
			this->GenderText = (gcnew System::Windows::Forms::TextBox());
			this->OccupationText = (gcnew System::Windows::Forms::TextBox());
			this->QualificationText = (gcnew System::Windows::Forms::TextBox());
			this->NICText = (gcnew System::Windows::Forms::TextBox());
			this->BFormText = (gcnew System::Windows::Forms::TextBox());
			this->AdultSubmit = (gcnew System::Windows::Forms::Button());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->IDText = (gcnew System::Windows::Forms::TextBox());
			this->SubmitID = (gcnew System::Windows::Forms::Button());
			this->RemoveIDSubmit = (gcnew System::Windows::Forms::Button());
			this->SearchID = (gcnew System::Windows::Forms::Button());
			this->BoogieEvent = (gcnew System::Windows::Forms::Label());
			this->PassengerSubmit = (gcnew System::Windows::Forms::Button());
			this->KidSubmit = (gcnew System::Windows::Forms::Button());
			this->PassengerEvent = (gcnew System::Windows::Forms::Label());
			this->BackToAddPassenger = (gcnew System::Windows::Forms::Button());
			this->PrintBogieSubmit = (gcnew System::Windows::Forms::Button());
			this->KidPassengerInfo = (gcnew System::Windows::Forms::Label());
			this->AdultPassengerInfo = (gcnew System::Windows::Forms::Label());
			this->TrainPrint = (gcnew System::Windows::Forms::Label());
			this->AddFamilyName = (gcnew System::Windows::Forms::Button());
			this->FamilyNameLabel = (gcnew System::Windows::Forms::Label());
			this->FamilyNameSubmit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AnimationTrain))->BeginInit();
			this->SuspendLayout();
			// 
			// AnimationTrain
			// 
			this->AnimationTrain->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AnimationTrain.Image")));
			this->AnimationTrain->Location = System::Drawing::Point(322, 119);
			this->AnimationTrain->Name = L"AnimationTrain";
			this->AnimationTrain->Size = System::Drawing::Size(803, 508);
			this->AnimationTrain->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->AnimationTrain->TabIndex = 3;
			this->AnimationTrain->TabStop = false;
			// 
			// AddBogie
			// 
			this->AddBogie->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AddBogie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->AddBogie->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddBogie->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddBogie->ForeColor = System::Drawing::Color::White;
			this->AddBogie->Location = System::Drawing::Point(247, 679);
			this->AddBogie->Name = L"AddBogie";
			this->AddBogie->Size = System::Drawing::Size(343, 54);
			this->AddBogie->TabIndex = 5;
			this->AddBogie->Text = L"ADD BOGIE";
			this->AddBogie->UseVisualStyleBackColor = false;
			this->AddBogie->Click += gcnew System::EventHandler(this, &MyForm::AddBogie_Click);
			// 
			// RemoveBogie
			// 
			this->RemoveBogie->AutoSize = true;
			this->RemoveBogie->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->RemoveBogie->BackColor = System::Drawing::Color::Tomato;
			this->RemoveBogie->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveBogie->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveBogie->ForeColor = System::Drawing::Color::White;
			this->RemoveBogie->Location = System::Drawing::Point(626, 679);
			this->RemoveBogie->Name = L"RemoveBogie";
			this->RemoveBogie->Size = System::Drawing::Size(307, 54);
			this->RemoveBogie->TabIndex = 6;
			this->RemoveBogie->Text = L"REMOVE BOGIE";
			this->RemoveBogie->UseVisualStyleBackColor = false;
			this->RemoveBogie->Click += gcnew System::EventHandler(this, &MyForm::RemoveBogie_Click);
			// 
			// SearchBogie
			// 
			this->SearchBogie->AutoSize = true;
			this->SearchBogie->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->SearchBogie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->SearchBogie->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SearchBogie->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchBogie->ForeColor = System::Drawing::Color::White;
			this->SearchBogie->Location = System::Drawing::Point(976, 679);
			this->SearchBogie->Name = L"SearchBogie";
			this->SearchBogie->Size = System::Drawing::Size(295, 54);
			this->SearchBogie->TabIndex = 7;
			this->SearchBogie->Text = L"SEARCH BOGIE";
			this->SearchBogie->UseVisualStyleBackColor = false;
			this->SearchBogie->Click += gcnew System::EventHandler(this, &MyForm::SearchBogie_Click);
			// 
			// PrintTrain
			// 
			this->PrintTrain->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->PrintTrain->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->PrintTrain->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PrintTrain->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PrintTrain->ForeColor = System::Drawing::Color::White;
			this->PrintTrain->Location = System::Drawing::Point(626, 762);
			this->PrintTrain->Name = L"PrintTrain";
			this->PrintTrain->Size = System::Drawing::Size(307, 54);
			this->PrintTrain->TabIndex = 8;
			this->PrintTrain->Text = L"PRINT TRAIN";
			this->PrintTrain->UseVisualStyleBackColor = false;
			this->PrintTrain->Click += gcnew System::EventHandler(this, &MyForm::PrintTrain_Click);
			// 
			// Quit
			// 
			this->Quit->AutoSize = true;
			this->Quit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Quit->BackColor = System::Drawing::Color::SlateGray;
			this->Quit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Quit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quit->ForeColor = System::Drawing::Color::White;
			this->Quit->Location = System::Drawing::Point(1298, 57);
			this->Quit->Name = L"Quit";
			this->Quit->Size = System::Drawing::Size(111, 54);
			this->Quit->TabIndex = 9;
			this->Quit->Text = L"QUIT";
			this->Quit->UseVisualStyleBackColor = false;
			this->Quit->Click += gcnew System::EventHandler(this, &MyForm::Quit_Click);
			// 
			// AddPassengers
			// 
			this->AddPassengers->AutoSize = true;
			this->AddPassengers->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AddPassengers->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->AddPassengers->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddPassengers->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddPassengers->ForeColor = System::Drawing::Color::White;
			this->AddPassengers->Location = System::Drawing::Point(247, 762);
			this->AddPassengers->Name = L"AddPassengers";
			this->AddPassengers->Size = System::Drawing::Size(343, 54);
			this->AddPassengers->TabIndex = 10;
			this->AddPassengers->Text = L"ADD PASSENGERS";
			this->AddPassengers->UseVisualStyleBackColor = false;
			this->AddPassengers->Click += gcnew System::EventHandler(this, &MyForm::AddPassengers_Click);
			// 
			// PrintBogie
			// 
			this->PrintBogie->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->PrintBogie->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->PrintBogie->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PrintBogie->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PrintBogie->ForeColor = System::Drawing::Color::White;
			this->PrintBogie->Location = System::Drawing::Point(976, 762);
			this->PrintBogie->Name = L"PrintBogie";
			this->PrintBogie->Size = System::Drawing::Size(295, 54);
			this->PrintBogie->TabIndex = 11;
			this->PrintBogie->Text = L"PRINT BOGIE";
			this->PrintBogie->UseVisualStyleBackColor = false;
			this->PrintBogie->Click += gcnew System::EventHandler(this, &MyForm::PrintBogie_Click);
			// 
			// Back
			// 
			this->Back->AutoSize = true;
			this->Back->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Back->BackColor = System::Drawing::Color::SlateGray;
			this->Back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Back->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back->ForeColor = System::Drawing::Color::White;
			this->Back->Location = System::Drawing::Point(108, 57);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(128, 54);
			this->Back->TabIndex = 12;
			this->Back->Text = L"BACK";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Visible = false;
			this->Back->Click += gcnew System::EventHandler(this, &MyForm::Back_Click);
			// 
			// Adult
			// 
			this->Adult->AutoSize = true;
			this->Adult->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Adult->BackColor = System::Drawing::Color::SlateGray;
			this->Adult->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Adult->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adult->ForeColor = System::Drawing::Color::White;
			this->Adult->Location = System::Drawing::Point(322, 245);
			this->Adult->Name = L"Adult";
			this->Adult->Size = System::Drawing::Size(230, 54);
			this->Adult->TabIndex = 13;
			this->Adult->Text = L"ADD ADULT";
			this->Adult->UseVisualStyleBackColor = false;
			this->Adult->Visible = false;
			this->Adult->Click += gcnew System::EventHandler(this, &MyForm::Adult_Click);
			// 
			// Kid
			// 
			this->Kid->AutoSize = true;
			this->Kid->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Kid->BackColor = System::Drawing::Color::SlateGray;
			this->Kid->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Kid->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Kid->ForeColor = System::Drawing::Color::White;
			this->Kid->Location = System::Drawing::Point(1010, 245);
			this->Kid->Name = L"Kid";
			this->Kid->Size = System::Drawing::Size(181, 54);
			this->Kid->TabIndex = 14;
			this->Kid->Text = L"ADD KID";
			this->Kid->UseVisualStyleBackColor = false;
			this->Kid->Visible = false;
			this->Kid->Click += gcnew System::EventHandler(this, &MyForm::Kid_Click);
			// 
			// AdultName
			// 
			this->AdultName->AutoSize = true;
			this->AdultName->ForeColor = System::Drawing::Color::White;
			this->AdultName->Location = System::Drawing::Point(324, 317);
			this->AdultName->Name = L"AdultName";
			this->AdultName->Size = System::Drawing::Size(228, 44);
			this->AdultName->TabIndex = 16;
			this->AdultName->Text = L"Enter Name";
			this->AdultName->Visible = false;
			// 
			// Heading
			// 
			this->Heading->AutoSize = true;
			this->Heading->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Heading->ForeColor = System::Drawing::Color::White;
			this->Heading->Location = System::Drawing::Point(533, 44);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(388, 66);
			this->Heading->TabIndex = 17;
			this->Heading->Text = L"TRAIN SYSTEM";
			// 
			// AdultAge
			// 
			this->AdultAge->AutoSize = true;
			this->AdultAge->ForeColor = System::Drawing::Color::White;
			this->AdultAge->Location = System::Drawing::Point(324, 377);
			this->AdultAge->Name = L"AdultAge";
			this->AdultAge->Size = System::Drawing::Size(193, 44);
			this->AdultAge->TabIndex = 18;
			this->AdultAge->Text = L"Enter Age";
			this->AdultAge->Visible = false;
			// 
			// AdultGender
			// 
			this->AdultGender->AutoSize = true;
			this->AdultGender->ForeColor = System::Drawing::Color::White;
			this->AdultGender->Location = System::Drawing::Point(324, 437);
			this->AdultGender->Name = L"AdultGender";
			this->AdultGender->Size = System::Drawing::Size(255, 44);
			this->AdultGender->TabIndex = 19;
			this->AdultGender->Text = L"Enter Gender";
			this->AdultGender->Visible = false;
			// 
			// AdultOccupation
			// 
			this->AdultOccupation->AutoSize = true;
			this->AdultOccupation->ForeColor = System::Drawing::Color::White;
			this->AdultOccupation->Location = System::Drawing::Point(324, 500);
			this->AdultOccupation->Name = L"AdultOccupation";
			this->AdultOccupation->Size = System::Drawing::Size(333, 44);
			this->AdultOccupation->TabIndex = 20;
			this->AdultOccupation->Text = L"Enter Occupation";
			this->AdultOccupation->Visible = false;
			// 
			// AdultQualification
			// 
			this->AdultQualification->AutoSize = true;
			this->AdultQualification->ForeColor = System::Drawing::Color::White;
			this->AdultQualification->Location = System::Drawing::Point(324, 557);
			this->AdultQualification->Name = L"AdultQualification";
			this->AdultQualification->Size = System::Drawing::Size(346, 44);
			this->AdultQualification->TabIndex = 21;
			this->AdultQualification->Text = L"Enter Qualification";
			this->AdultQualification->Visible = false;
			// 
			// AdultNIC
			// 
			this->AdultNIC->AutoSize = true;
			this->AdultNIC->ForeColor = System::Drawing::Color::White;
			this->AdultNIC->Location = System::Drawing::Point(324, 618);
			this->AdultNIC->Name = L"AdultNIC";
			this->AdultNIC->Size = System::Drawing::Size(184, 44);
			this->AdultNIC->TabIndex = 22;
			this->AdultNIC->Text = L"Enter NIC";
			this->AdultNIC->Visible = false;
			// 
			// KidName
			// 
			this->KidName->AutoSize = true;
			this->KidName->ForeColor = System::Drawing::Color::White;
			this->KidName->Location = System::Drawing::Point(324, 317);
			this->KidName->Name = L"KidName";
			this->KidName->Size = System::Drawing::Size(228, 44);
			this->KidName->TabIndex = 23;
			this->KidName->Text = L"Enter Name";
			this->KidName->Visible = false;
			// 
			// KidAge
			// 
			this->KidAge->AutoSize = true;
			this->KidAge->ForeColor = System::Drawing::Color::White;
			this->KidAge->Location = System::Drawing::Point(324, 377);
			this->KidAge->Name = L"KidAge";
			this->KidAge->Size = System::Drawing::Size(193, 44);
			this->KidAge->TabIndex = 24;
			this->KidAge->Text = L"Enter Age";
			this->KidAge->Visible = false;
			// 
			// KidGender
			// 
			this->KidGender->AutoSize = true;
			this->KidGender->ForeColor = System::Drawing::Color::White;
			this->KidGender->Location = System::Drawing::Point(324, 437);
			this->KidGender->Name = L"KidGender";
			this->KidGender->Size = System::Drawing::Size(255, 44);
			this->KidGender->TabIndex = 25;
			this->KidGender->Text = L"Enter Gender";
			this->KidGender->Visible = false;
			// 
			// KidBForm
			// 
			this->KidBForm->AutoSize = true;
			this->KidBForm->ForeColor = System::Drawing::Color::White;
			this->KidBForm->Location = System::Drawing::Point(324, 500);
			this->KidBForm->Name = L"KidBForm";
			this->KidBForm->Size = System::Drawing::Size(258, 44);
			this->KidBForm->TabIndex = 26;
			this->KidBForm->Text = L"Enter B-FORM";
			this->KidBForm->Visible = false;
			// 
			// NameText
			// 
			this->NameText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.29091F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameText->Location = System::Drawing::Point(705, 315);
			this->NameText->Name = L"NameText";
			this->NameText->Size = System::Drawing::Size(286, 46);
			this->NameText->TabIndex = 27;
			this->NameText->Visible = false;
			// 
			// AgeText
			// 
			this->AgeText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.29091F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AgeText->Location = System::Drawing::Point(705, 375);
			this->AgeText->Name = L"AgeText";
			this->AgeText->Size = System::Drawing::Size(286, 46);
			this->AgeText->TabIndex = 28;
			this->AgeText->Visible = false;
			// 
			// GenderText
			// 
			this->GenderText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.29091F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GenderText->Location = System::Drawing::Point(705, 435);
			this->GenderText->Name = L"GenderText";
			this->GenderText->Size = System::Drawing::Size(286, 46);
			this->GenderText->TabIndex = 29;
			this->GenderText->Visible = false;
			// 
			// OccupationText
			// 
			this->OccupationText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.29091F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OccupationText->Location = System::Drawing::Point(705, 498);
			this->OccupationText->Name = L"OccupationText";
			this->OccupationText->Size = System::Drawing::Size(286, 46);
			this->OccupationText->TabIndex = 30;
			this->OccupationText->Visible = false;
			// 
			// QualificationText
			// 
			this->QualificationText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.29091F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QualificationText->Location = System::Drawing::Point(705, 555);
			this->QualificationText->Name = L"QualificationText";
			this->QualificationText->Size = System::Drawing::Size(286, 46);
			this->QualificationText->TabIndex = 31;
			this->QualificationText->Visible = false;
			// 
			// NICText
			// 
			this->NICText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.29091F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NICText->Location = System::Drawing::Point(705, 616);
			this->NICText->Name = L"NICText";
			this->NICText->Size = System::Drawing::Size(286, 46);
			this->NICText->TabIndex = 32;
			this->NICText->Visible = false;
			// 
			// BFormText
			// 
			this->BFormText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.29091F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BFormText->Location = System::Drawing::Point(705, 498);
			this->BFormText->Name = L"BFormText";
			this->BFormText->Size = System::Drawing::Size(286, 46);
			this->BFormText->TabIndex = 33;
			this->BFormText->Visible = false;
			// 
			// AdultSubmit
			// 
			this->AdultSubmit->AutoSize = true;
			this->AdultSubmit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AdultSubmit->BackColor = System::Drawing::Color::SlateGray;
			this->AdultSubmit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AdultSubmit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdultSubmit->ForeColor = System::Drawing::Color::White;
			this->AdultSubmit->Location = System::Drawing::Point(1082, 437);
			this->AdultSubmit->Name = L"AdultSubmit";
			this->AdultSubmit->Size = System::Drawing::Size(151, 54);
			this->AdultSubmit->TabIndex = 34;
			this->AdultSubmit->Text = L"SUBMIT";
			this->AdultSubmit->UseVisualStyleBackColor = false;
			this->AdultSubmit->Visible = false;
			this->AdultSubmit->Click += gcnew System::EventHandler(this, &MyForm::AdultSubmit_Click);
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->ForeColor = System::Drawing::Color::White;
			this->ID->Location = System::Drawing::Point(442, 198);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(154, 44);
			this->ID->TabIndex = 35;
			this->ID->Text = L"Enter ID";
			this->ID->Visible = false;
			// 
			// IDText
			// 
			this->IDText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.29091F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDText->Location = System::Drawing::Point(667, 200);
			this->IDText->Name = L"IDText";
			this->IDText->Size = System::Drawing::Size(286, 46);
			this->IDText->TabIndex = 36;
			this->IDText->Visible = false;
			// 
			// SubmitID
			// 
			this->SubmitID->AutoSize = true;
			this->SubmitID->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->SubmitID->BackColor = System::Drawing::Color::SlateGray;
			this->SubmitID->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SubmitID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SubmitID->ForeColor = System::Drawing::Color::White;
			this->SubmitID->Location = System::Drawing::Point(667, 312);
			this->SubmitID->Name = L"SubmitID";
			this->SubmitID->Size = System::Drawing::Size(151, 54);
			this->SubmitID->TabIndex = 37;
			this->SubmitID->Text = L"SUBMIT";
			this->SubmitID->UseVisualStyleBackColor = false;
			this->SubmitID->Visible = false;
			this->SubmitID->Click += gcnew System::EventHandler(this, &MyForm::SubmitID_Click);
			// 
			// RemoveIDSubmit
			// 
			this->RemoveIDSubmit->AutoSize = true;
			this->RemoveIDSubmit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->RemoveIDSubmit->BackColor = System::Drawing::Color::SlateGray;
			this->RemoveIDSubmit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveIDSubmit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveIDSubmit->ForeColor = System::Drawing::Color::White;
			this->RemoveIDSubmit->Location = System::Drawing::Point(667, 312);
			this->RemoveIDSubmit->Name = L"RemoveIDSubmit";
			this->RemoveIDSubmit->Size = System::Drawing::Size(151, 54);
			this->RemoveIDSubmit->TabIndex = 38;
			this->RemoveIDSubmit->Text = L"SUBMIT";
			this->RemoveIDSubmit->UseVisualStyleBackColor = false;
			this->RemoveIDSubmit->Visible = false;
			this->RemoveIDSubmit->Click += gcnew System::EventHandler(this, &MyForm::RemoveIDSubmit_Click);
			// 
			// SearchID
			// 
			this->SearchID->AutoSize = true;
			this->SearchID->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->SearchID->BackColor = System::Drawing::Color::SlateGray;
			this->SearchID->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SearchID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchID->ForeColor = System::Drawing::Color::White;
			this->SearchID->Location = System::Drawing::Point(667, 312);
			this->SearchID->Name = L"SearchID";
			this->SearchID->Size = System::Drawing::Size(151, 54);
			this->SearchID->TabIndex = 39;
			this->SearchID->Text = L"SUBMIT";
			this->SearchID->UseVisualStyleBackColor = false;
			this->SearchID->Visible = false;
			this->SearchID->Click += gcnew System::EventHandler(this, &MyForm::SearchID_Click);
			// 
			// BoogieEvent
			// 
			this->BoogieEvent->ForeColor = System::Drawing::Color::White;
			this->BoogieEvent->Location = System::Drawing::Point(659, 424);
			this->BoogieEvent->Name = L"BoogieEvent";
			this->BoogieEvent->Size = System::Drawing::Size(532, 56);
			this->BoogieEvent->TabIndex = 40;
			this->BoogieEvent->Visible = false;
			// 
			// PassengerSubmit
			// 
			this->PassengerSubmit->AutoSize = true;
			this->PassengerSubmit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->PassengerSubmit->BackColor = System::Drawing::Color::SlateGray;
			this->PassengerSubmit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PassengerSubmit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PassengerSubmit->ForeColor = System::Drawing::Color::White;
			this->PassengerSubmit->Location = System::Drawing::Point(667, 312);
			this->PassengerSubmit->Name = L"PassengerSubmit";
			this->PassengerSubmit->Size = System::Drawing::Size(151, 54);
			this->PassengerSubmit->TabIndex = 41;
			this->PassengerSubmit->Text = L"SUBMIT";
			this->PassengerSubmit->UseVisualStyleBackColor = false;
			this->PassengerSubmit->Visible = false;
			this->PassengerSubmit->Click += gcnew System::EventHandler(this, &MyForm::PassengerSubmit_Click);
			// 
			// KidSubmit
			// 
			this->KidSubmit->AutoSize = true;
			this->KidSubmit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->KidSubmit->BackColor = System::Drawing::Color::SlateGray;
			this->KidSubmit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->KidSubmit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KidSubmit->ForeColor = System::Drawing::Color::White;
			this->KidSubmit->Location = System::Drawing::Point(1082, 437);
			this->KidSubmit->Name = L"KidSubmit";
			this->KidSubmit->Size = System::Drawing::Size(151, 54);
			this->KidSubmit->TabIndex = 42;
			this->KidSubmit->Text = L"SUBMIT";
			this->KidSubmit->UseVisualStyleBackColor = false;
			this->KidSubmit->Visible = false;
			this->KidSubmit->Click += gcnew System::EventHandler(this, &MyForm::KidSubmit_Click);
			// 
			// PassengerEvent
			// 
			this->PassengerEvent->ForeColor = System::Drawing::Color::White;
			this->PassengerEvent->Location = System::Drawing::Point(1082, 512);
			this->PassengerEvent->Name = L"PassengerEvent";
			this->PassengerEvent->Size = System::Drawing::Size(254, 56);
			this->PassengerEvent->TabIndex = 43;
			this->PassengerEvent->Visible = false;
			// 
			// BackToAddPassenger
			// 
			this->BackToAddPassenger->AutoSize = true;
			this->BackToAddPassenger->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackToAddPassenger->BackColor = System::Drawing::Color::SlateGray;
			this->BackToAddPassenger->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BackToAddPassenger->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BackToAddPassenger->ForeColor = System::Drawing::Color::White;
			this->BackToAddPassenger->Location = System::Drawing::Point(108, 57);
			this->BackToAddPassenger->Name = L"BackToAddPassenger";
			this->BackToAddPassenger->Size = System::Drawing::Size(128, 54);
			this->BackToAddPassenger->TabIndex = 44;
			this->BackToAddPassenger->Text = L"BACK";
			this->BackToAddPassenger->UseVisualStyleBackColor = false;
			this->BackToAddPassenger->Visible = false;
			this->BackToAddPassenger->Click += gcnew System::EventHandler(this, &MyForm::BackToAddPassenger_Click);
			// 
			// PrintBogieSubmit
			// 
			this->PrintBogieSubmit->AutoSize = true;
			this->PrintBogieSubmit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->PrintBogieSubmit->BackColor = System::Drawing::Color::SlateGray;
			this->PrintBogieSubmit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PrintBogieSubmit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PrintBogieSubmit->ForeColor = System::Drawing::Color::White;
			this->PrintBogieSubmit->Location = System::Drawing::Point(667, 312);
			this->PrintBogieSubmit->Name = L"PrintBogieSubmit";
			this->PrintBogieSubmit->Size = System::Drawing::Size(151, 54);
			this->PrintBogieSubmit->TabIndex = 45;
			this->PrintBogieSubmit->Text = L"SUBMIT";
			this->PrintBogieSubmit->UseVisualStyleBackColor = false;
			this->PrintBogieSubmit->Visible = false;
			this->PrintBogieSubmit->Click += gcnew System::EventHandler(this, &MyForm::PrintBogieSubmit_Click);
			// 
			// KidPassengerInfo
			// 
			this->KidPassengerInfo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.163636F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KidPassengerInfo->ForeColor = System::Drawing::Color::White;
			this->KidPassengerInfo->Location = System::Drawing::Point(877, 57);
			this->KidPassengerInfo->Name = L"KidPassengerInfo";
			this->KidPassengerInfo->Size = System::Drawing::Size(422, 759);
			this->KidPassengerInfo->TabIndex = 46;
			this->KidPassengerInfo->Visible = false;
			// 
			// AdultPassengerInfo
			// 
			this->AdultPassengerInfo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.163636F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AdultPassengerInfo->ForeColor = System::Drawing::Color::White;
			this->AdultPassengerInfo->Location = System::Drawing::Point(380, 57);
			this->AdultPassengerInfo->Name = L"AdultPassengerInfo";
			this->AdultPassengerInfo->Size = System::Drawing::Size(491, 759);
			this->AdultPassengerInfo->TabIndex = 47;
			this->AdultPassengerInfo->Visible = false;
			// 
			// TrainPrint
			// 
			this->TrainPrint->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.78182F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TrainPrint->ForeColor = System::Drawing::Color::White;
			this->TrainPrint->Location = System::Drawing::Point(204, 198);
			this->TrainPrint->Name = L"TrainPrint";
			this->TrainPrint->Size = System::Drawing::Size(1111, 393);
			this->TrainPrint->TabIndex = 48;
			this->TrainPrint->Visible = false;
			// 
			// AddFamilyName
			// 
			this->AddFamilyName->AutoSize = true;
			this->AddFamilyName->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AddFamilyName->BackColor = System::Drawing::Color::SlateGray;
			this->AddFamilyName->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddFamilyName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddFamilyName->ForeColor = System::Drawing::Color::White;
			this->AddFamilyName->Location = System::Drawing::Point(602, 245);
			this->AddFamilyName->Name = L"AddFamilyName";
			this->AddFamilyName->Size = System::Drawing::Size(361, 54);
			this->AddFamilyName->TabIndex = 49;
			this->AddFamilyName->Text = L"ADD FAMILY NAME";
			this->AddFamilyName->UseVisualStyleBackColor = false;
			this->AddFamilyName->Visible = false;
			this->AddFamilyName->Click += gcnew System::EventHandler(this, &MyForm::AddFamilyName_Click);
			// 
			// FamilyNameLabel
			// 
			this->FamilyNameLabel->AutoSize = true;
			this->FamilyNameLabel->ForeColor = System::Drawing::Color::White;
			this->FamilyNameLabel->Location = System::Drawing::Point(324, 317);
			this->FamilyNameLabel->Name = L"FamilyNameLabel";
			this->FamilyNameLabel->Size = System::Drawing::Size(354, 44);
			this->FamilyNameLabel->TabIndex = 50;
			this->FamilyNameLabel->Text = L"Enter Family Name";
			this->FamilyNameLabel->Visible = false;
			// 
			// FamilyNameSubmit
			// 
			this->FamilyNameSubmit->AutoSize = true;
			this->FamilyNameSubmit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->FamilyNameSubmit->BackColor = System::Drawing::Color::SlateGray;
			this->FamilyNameSubmit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FamilyNameSubmit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FamilyNameSubmit->ForeColor = System::Drawing::Color::White;
			this->FamilyNameSubmit->Location = System::Drawing::Point(1082, 437);
			this->FamilyNameSubmit->Name = L"FamilyNameSubmit";
			this->FamilyNameSubmit->Size = System::Drawing::Size(151, 54);
			this->FamilyNameSubmit->TabIndex = 51;
			this->FamilyNameSubmit->Text = L"SUBMIT";
			this->FamilyNameSubmit->UseVisualStyleBackColor = false;
			this->FamilyNameSubmit->Visible = false;
			this->FamilyNameSubmit->Click += gcnew System::EventHandler(this, &MyForm::FamilyNameSubmit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(110, 110);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1582, 857);
			this->Controls->Add(this->FamilyNameSubmit);
			this->Controls->Add(this->FamilyNameLabel);
			this->Controls->Add(this->AddFamilyName);
			this->Controls->Add(this->BackToAddPassenger);
			this->Controls->Add(this->PassengerEvent);
			this->Controls->Add(this->KidSubmit);
			this->Controls->Add(this->BoogieEvent);
			this->Controls->Add(this->IDText);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->AdultSubmit);
			this->Controls->Add(this->BFormText);
			this->Controls->Add(this->NICText);
			this->Controls->Add(this->QualificationText);
			this->Controls->Add(this->OccupationText);
			this->Controls->Add(this->GenderText);
			this->Controls->Add(this->AgeText);
			this->Controls->Add(this->NameText);
			this->Controls->Add(this->KidGender);
			this->Controls->Add(this->KidAge);
			this->Controls->Add(this->KidName);
			this->Controls->Add(this->AdultNIC);
			this->Controls->Add(this->AdultGender);
			this->Controls->Add(this->AdultAge);
			this->Controls->Add(this->Heading);
			this->Controls->Add(this->AdultName);
			this->Controls->Add(this->Kid);
			this->Controls->Add(this->Adult);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->PrintBogie);
			this->Controls->Add(this->AddPassengers);
			this->Controls->Add(this->Quit);
			this->Controls->Add(this->PrintTrain);
			this->Controls->Add(this->SearchBogie);
			this->Controls->Add(this->RemoveBogie);
			this->Controls->Add(this->AddBogie);
			this->Controls->Add(this->TrainPrint);
			this->Controls->Add(this->AdultPassengerInfo);
			this->Controls->Add(this->KidPassengerInfo);
			this->Controls->Add(this->AdultOccupation);
			this->Controls->Add(this->KidBForm);
			this->Controls->Add(this->AdultQualification);
			this->Controls->Add(this->AnimationTrain);
			this->Controls->Add(this->PrintBogieSubmit);
			this->Controls->Add(this->PassengerSubmit);
			this->Controls->Add(this->SearchID);
			this->Controls->Add(this->RemoveIDSubmit);
			this->Controls->Add(this->SubmitID);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.21818F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"MyForm";
			this->ShowInTaskbar = false;
			this->Text = L"Train";
			this->TopMost = true;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AnimationTrain))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void RemoveVisible()
		{
			this->AddPassengers->Visible = false;
			this->PrintBogie->Visible = false;
			this->PrintTrain->Visible = false;
			this->RemoveBogie->Visible = false;
			this->Heading->Visible = false;
			this->AnimationTrain->Visible = false;
			this->SearchBogie->Visible = false;
			this->AddBogie->Visible = false;
		}

		void Visible()
		{
			this->AddPassengers->Visible = true;
			this->PrintBogie->Visible = true;
			this->PrintTrain->Visible = true;
			this->RemoveBogie->Visible = true;
			this->Heading->Visible = true;
			this->AnimationTrain->Visible = true;
			this->SearchBogie->Visible = true;
			this->AddBogie->Visible = true;
		}

		static std::string toStandardString(System::String^ string)
		{
			using System::Runtime::InteropServices::Marshal;
			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charPointer, string->Length);
			Marshal::FreeHGlobal(pointer);
			return returnString;
		}

		void ClickSound()
		{
			System::Media::SoundPlayer^ Player = gcnew System::Media::SoundPlayer();
			Player->SoundLocation = L"Click.wav";
			Player->Load();
			Player->Play();
		}

		
#pragma endregion
	

private: System::Void AddBogie_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	RemoveVisible();
	this->Back->Visible = true;
	this->ID->Visible = true;
	this->IDText->Visible = true;
	this->SubmitID->Visible = true;
}
private: System::Void Quit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Application::Exit();
}
private: System::Void RemoveBogie_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	RemoveVisible();
	this->Back->Visible = true;
	this->ID->Visible = true;
	this->IDText->Visible = true;
	this->RemoveIDSubmit->Visible = true;
}
private: System::Void SearchBogie_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	RemoveVisible();
	this->Back->Visible = true;
	this->ID->Visible = true;
	this->IDText->Visible = true;
	this->SearchID->Visible = true;
}
private: System::Void AddPassengers_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	RemoveVisible();
	this->Back->Visible = true;
	this->ID->Visible = true;
	this->IDText->Visible = true;
	this->PassengerSubmit->Visible = true;
}
private: System::Void PrintTrain_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	RemoveVisible();
	this->Back->Visible = true;
	string text;
	Train->printTrain(text);
	String^ TEXT = gcnew String(text.c_str());
	this->TrainPrint->Text = TEXT;
	this->TrainPrint->Visible = true;
}
private: System::Void PrintBogie_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	RemoveVisible();
	this->Back->Visible = true;
	this->ID->Visible = true;
	this->IDText->Visible = true;
	this->PrintBogieSubmit->Visible = true;

}
private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	Visible();
	this->AddFamilyName->Visible = false;
	this->TrainPrint->Text = "";
	this->TrainPrint->Visible = false;
	this->Back->Visible = false;
	this->PrintBogieSubmit->Visible = false;
	this->PassengerSubmit->Visible = false;
	this->PassengerSubmit->Visible = false;
	this->Adult->Visible = false;
	this->Kid->Visible = false;
	this->AdultName->Visible = false;
	this->AdultAge->Visible = false;
	this->AdultGender->Visible = false;
	this->AdultOccupation->Visible = false;
	this->AdultQualification->Visible = false;
	this->AdultNIC->Visible = false;
	this->KidName->Visible = false;
	this->KidAge->Visible = false;
	this->KidGender->Visible = false;
	this->KidBForm->Visible = false;
	this->NameText->Visible = false;
	this->AgeText->Visible = false;
	this->GenderText->Visible = false;
	this->OccupationText->Visible = false;
	this->QualificationText->Visible = false;
	this->NICText->Visible = false;
	this->BFormText->Visible = false;
	this->AdultSubmit->Visible = false;
	this->ID->Visible = false;
	this->IDText->Visible = false;
	this->IDText->Text = "";
	this->SubmitID->Visible = false;
	this->RemoveIDSubmit->Visible = false;
	this->SearchID->Visible = false;
	this->BoogieEvent->Text = "";
	this->BoogieEvent->Visible = false;
	this->KidPassengerInfo->Text = "";
	this->KidPassengerInfo->Visible = false;
	this->AdultPassengerInfo->Text = "";
	this->AdultPassengerInfo->Visible = false;
}
private: System::Void Adult_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	this->Adult->Visible = false;
	this->AddFamilyName->Visible = false;
	this->Kid->Visible = false;
	this->AdultName->Visible = true;
	this->AdultAge->Visible = true;
	this->AdultGender->Visible = true;
	this->AdultOccupation->Visible = true;
	this->AdultQualification->Visible = true;
	this->AdultNIC->Visible = true;
	this->NameText->Visible = true;
	this->AgeText->Visible = true;
	this->GenderText->Visible = true;
	this->OccupationText->Visible = true;
	this->QualificationText->Visible = true;
	this->NICText->Visible = true;
	this->AdultSubmit->Visible = true;
	this->Back->Visible = false;
	this->BackToAddPassenger->Visible = true;
}
private: System::Void Kid_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	this->Adult->Visible = false;
	this->AddFamilyName->Visible = false;
	this->Kid->Visible = false;
	this->KidName->Visible = true;
	this->KidAge->Visible = true;
	this->KidGender->Visible = true;
	this->KidBForm->Visible = true;
	this->NameText->Visible = true;
	this->AgeText->Visible = true;
	this->GenderText->Visible = true;
	this->BFormText->Visible = true;
	this->AdultSubmit->Visible = false;
	this->KidSubmit->Visible = true;
	this->Back->Visible = false;
	this->BackToAddPassenger->Visible = true;
}
private: System::Void AdultSubmit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();

	string NAME = toStandardString(this->NameText->Text);

	string Age = toStandardString(this->AgeText->Text);
	int AGE = atoi(Age.c_str());


	string Gender = toStandardString(this->GenderText->Text);
	char GENDER = Gender[0];


	string OCCUPATION = toStandardString(this->OccupationText->Text);

	string QUALIFICATION = toStandardString(this->QualificationText->Text);
	
	string NIC_ = toStandardString(this->NICText->Text);

	string Id = toStandardString(this->IDText->Text);
	int ID = atoi(Id.c_str());

	if (Train->AddAdult(ID, NAME, AGE, GENDER, OCCUPATION, QUALIFICATION, NIC_))
	{
		this->PassengerEvent->Text = "ADDED";
		this->PassengerEvent->Visible = true;
	}
	else
	{
		this->PassengerEvent->Text = "FULL";
		this->PassengerEvent->Visible = true;
	}

	this->NameText->Text = "";
	this->AgeText->Text = "";
	this->GenderText->Text = "";
	this->OccupationText->Text = "";
	this->QualificationText->Text = "";
	this->NICText->Text = "";

}
private: System::Void SubmitID_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	string Id = toStandardString(this->IDText->Text);
	int ID = atoi(Id.c_str());
	
	this->BoogieEvent->Visible = true;

	if (this->IDText->Text != "")
	{
		if (Train->addBogie(ID))
		{
			this->BoogieEvent->Text = "BOOGIE ADDED";
		}
		else
		{
			this->BoogieEvent->Text = "BOOGIE ALREADY ALOTTED";
		}
	}

	this->IDText->Text = "";
}
private: System::Void RemoveIDSubmit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	string Id = toStandardString(this->IDText->Text);
	int ID = atoi(Id.c_str());
	
	this->BoogieEvent->Visible = true;

	if (this->IDText->Text != "")
	{
		if (Train->removeBogie(ID))
		{
			this->BoogieEvent->Text = "BOOGIE REMOVED";
		}
		else
		{
			this->BoogieEvent->Text = "BOOGIE NOT FOUND";
		}
	}

	this->IDText->Text = "";
}
private: System::Void SearchID_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	string Id = toStandardString(this->IDText->Text);
	int ID = atoi(Id.c_str());

	this->BoogieEvent->Visible = true;

	if (this->IDText->Text != "")
	{
		if (Train->SearchBogie(ID))
		{
			this->BoogieEvent->Text = "BOOGIE FOUND";
		}
		else
		{
			this->BoogieEvent->Text = "BOOGIE NOT FOUND";
		}
	}

	this->IDText->Text = "";
}
private: System::Void PassengerSubmit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	string Id = toStandardString(this->IDText->Text);
	int ID = atoi(Id.c_str());

	this->BoogieEvent->Visible = true;

	if (this->IDText->Text != "")
	{
		if (Train->SearchBogie(ID))
		{
			this->BoogieEvent->Visible = false;
			this->ID->Visible = false;
			this->IDText->Visible = false;
			this->PassengerSubmit->Visible = false;
			this->Adult->Visible = true;
			this->Kid->Visible = true;
			this->AddFamilyName->Visible = true;
		}
		else
		{
			this->BoogieEvent->Text = "BOOGIE NOT FOUND";
		}
	}
}
private: System::Void KidSubmit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	string NAME = toStandardString(this->NameText->Text);

	string Age = toStandardString(this->AgeText->Text);
	int AGE = atoi(Age.c_str());

	string Gender = toStandardString(this->GenderText->Text);
	char GENDER = Gender[0];

	string BFORM = toStandardString(this->BFormText->Text);

	string Id = toStandardString(this->IDText->Text);
	int ID = atoi(Id.c_str());

	if (Train->AddKid(ID, NAME, AGE, GENDER,BFORM))
	{
		this->PassengerEvent->Text = "ADDED";
		this->PassengerEvent->Visible = true;
	}
	else
	{
		this->PassengerEvent->Text = "FULL";
		this->PassengerEvent->Visible = true;
	}

	this->NameText->Text = "";
	this->AgeText->Text = "";
	this->GenderText->Text = "";
	this->BFormText->Text = "";

}
private: System::Void BackToAddPassenger_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	this->BoogieEvent->Visible = false;
	this->FamilyNameSubmit->Visible = false;
	this->ID->Visible = false;
	this->IDText->Visible = false;
	this->PassengerSubmit->Visible = false;
	this->Adult->Visible = true;
	this->Kid->Visible = true;
	this->Back->Visible = true;
	this->FamilyNameLabel->Visible = false;
	this->AddFamilyName->Visible = true;
	this->BackToAddPassenger->Visible = false;
	this->AdultName->Visible = false;
	this->AdultAge->Visible = false;
	this->AdultGender->Visible = false;
	this->AdultOccupation->Visible = false;
	this->AdultQualification->Visible = false;
	this->AdultNIC->Visible = false;
	this->NameText->Visible = false;
	this->NameText->Text = "";
	this->AgeText->Visible = false;
	this->AgeText->Text = "";
	this->GenderText->Visible = false;
	this->GenderText->Text = "";
	this->OccupationText->Visible = false;
	this->OccupationText->Text = "";
	this->QualificationText->Visible = false;
	this->QualificationText->Text = "";
	this->NICText->Visible = false;
	this->NICText->Text = "";
	this->AdultSubmit->Visible = false;
	this->BFormText->Visible = false;
	this->KidBForm->Visible = false;
	this->KidName->Visible = false;
	this->KidAge->Visible = false;
	this->KidGender->Visible = false;
	this->KidBForm->Visible = false;
	this->BFormText->Visible = false;
	this->AdultSubmit->Visible = false;
	this->KidSubmit->Visible = false;
	this->PassengerEvent->Text = "";
	this->PassengerEvent->Visible = false;
}
private: System::Void PrintBogieSubmit_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClickSound();
	this->BoogieEvent->Text = "";

	string Id = toStandardString(this->IDText->Text);
	int ID = atoi(Id.c_str());

	this->BoogieEvent->Visible = false;

	if (this->IDText->Text != "")
	{
		if (Train->SearchBogie(ID))
		{
			this->IDText->Visible = false;
			this->ID->Visible = false;
			this->PrintBogieSubmit->Visible = false;
			string text, text2;
			Train->printBogie(ID, text, text2);
			cout << "text : " << text << endl;
			cout << "text 2 : " << text2 << endl;
			String^ TEXT = gcnew String(text.c_str());
			String^ TEXT2 = gcnew String(text2.c_str());
			this->KidPassengerInfo->Text = TEXT;
			this->KidPassengerInfo->Visible = true;
			this->AdultPassengerInfo->Text = TEXT2;
			this->AdultPassengerInfo->Visible = true;
		}
		else
		{
			this->BoogieEvent->Text = "BOOGIE NOT FOUND";
			this->BoogieEvent->Visible = true;
		}
	}

	this->IDText->Text = "";
	
}
private: System::Void AddFamilyName_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	this->Adult->Visible = false;
	this->AddFamilyName->Visible = false;
	this->Kid->Visible = false;
	this->Back->Visible = false;
	this->BackToAddPassenger->Visible = true;
	this->FamilyNameLabel->Visible = true;
	this->NameText->Visible = true;
	this->FamilyNameSubmit->Visible = true;
}
private: System::Void FamilyNameSubmit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClickSound();
	string FamilyName = toStandardString(this->NameText->Text);

	string id = toStandardString(this->IDText->Text);
	int ID = atoi(id.c_str());

	if (Train->AddFamilyName(ID, FamilyName))
	{
		this->PassengerEvent->Text = "ADDED";
		this->PassengerEvent->Visible = true;
	}
	else
	{
		this->PassengerEvent->Text = "CHANGED";
		this->PassengerEvent->Visible = true;
	}
}
};
}
