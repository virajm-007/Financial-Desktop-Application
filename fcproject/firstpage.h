#pragma once
#include "loan.h"
namespace fcproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for firstpage
	/// </summary>
	public ref class firstpage : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		int flag = 1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label26;

	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Timer^  timer3;




	public:
		int total_interest = 0;
		firstpage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		firstpage(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~firstpage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label3;







	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  loanamount;
	private: System::Windows::Forms::TextBox^  time;


	private: System::Windows::Forms::TextBox^  interest;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  emi;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Panel^  emicalculator;

	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  stockvolatility;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Panel^  panel12;
	private: System::ComponentModel::IContainer^  components;










	protected:




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(firstpage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->loanamount = (gcnew System::Windows::Forms::TextBox());
			this->time = (gcnew System::Windows::Forms::TextBox());
			this->interest = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->emi = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->emicalculator = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->stockvolatility = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->emicalculator->SuspendLayout();
			this->stockvolatility->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->panel12);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(219, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(630, 39);
			this->panel1->TabIndex = 1;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(552, 9);
			this->label25->Name = L"label25";
			this->label25->Padding = System::Windows::Forms::Padding(5);
			this->label25->Size = System::Drawing::Size(71, 24);
			this->label25->TabIndex = 26;
			this->label25->Text = L"LOGOUT";
			this->label25->Click += gcnew System::EventHandler(this, &firstpage::label25_Click);
			// 
			// panel12
			// 
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel12->Location = System::Drawing::Point(532, 7);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(21, 24);
			this->panel12->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel2->Location = System::Drawing::Point(749, 9);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(20, 18);
			this->panel2->TabIndex = 2;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &firstpage::panel2_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(764, 9);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(5);
			this->label1->Size = System::Drawing::Size(71, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LOGOUT";
			this->label1->Click += gcnew System::EventHandler(this, &firstpage::label1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(6, 44);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(620, 262);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &firstpage::richTextBox1_TextChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->label30);
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(220, 495);
			this->panel3->TabIndex = 2;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label30->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::Gainsboro;
			this->label30->Location = System::Drawing::Point(52, 411);
			this->label30->Name = L"label30";
			this->label30->Padding = System::Windows::Forms::Padding(9);
			this->label30->Size = System::Drawing::Size(99, 33);
			this->label30->TabIndex = 33;
			this->label30->Text = L"Apply Loan";
			this->label30->Visible = false;
			this->label30->Click += gcnew System::EventHandler(this, &firstpage::label30_Click_1);
			this->label30->MouseLeave += gcnew System::EventHandler(this, &firstpage::label30_MouseLeave);
			this->label30->MouseHover += gcnew System::EventHandler(this, &firstpage::label30_MouseHover);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->panel11);
			this->panel7->Controls->Add(this->label17);
			this->panel7->Location = System::Drawing::Point(3, 248);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(217, 49);
			this->panel7->TabIndex = 26;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &firstpage::panel7_Paint);
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel11->Location = System::Drawing::Point(8, 2);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(45, 42);
			this->panel11->TabIndex = 25;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label17->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::DarkGray;
			this->label17->Location = System::Drawing::Point(59, 11);
			this->label17->Name = L"label17";
			this->label17->Padding = System::Windows::Forms::Padding(5);
			this->label17->Size = System::Drawing::Size(115, 28);
			this->label17->TabIndex = 7;
			this->label17->Text = L"Stock Volatility";
			this->label17->Click += gcnew System::EventHandler(this, &firstpage::label17_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->panel6->Controls->Add(this->panel9);
			this->panel6->Controls->Add(this->label2);
			this->panel6->Location = System::Drawing::Point(0, 195);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(216, 47);
			this->panel6->TabIndex = 23;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &firstpage::panel6_Paint);
			// 
			// panel9
			// 
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel9->Location = System::Drawing::Point(9, 3);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(45, 42);
			this->panel9->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(59, 9);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(5);
			this->label2->Size = System::Drawing::Size(117, 28);
			this->label2->TabIndex = 3;
			this->label2->Text = L"EMI Calculator";
			this->label2->Click += gcnew System::EventHandler(this, &firstpage::label2_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->panel10);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Location = System::Drawing::Point(3, 303);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(217, 49);
			this->panel5->TabIndex = 22;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &firstpage::panel5_Paint);
			// 
			// panel10
			// 
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel10->Location = System::Drawing::Point(8, 2);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(45, 42);
			this->panel10->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkGray;
			this->label3->Location = System::Drawing::Point(59, 11);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(5);
			this->label3->Size = System::Drawing::Size(117, 28);
			this->label3->TabIndex = 7;
			this->label3->Text = L"TAX Calculator";
			this->label3->Click += gcnew System::EventHandler(this, &firstpage::label3_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(0, -22);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(216, 214);
			this->panel4->TabIndex = 0;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &firstpage::panel4_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label4->Location = System::Drawing::Point(229, 7);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(5);
			this->label4->Size = System::Drawing::Size(136, 31);
			this->label4->TabIndex = 8;
			this->label4->Text = L"EMI Calculator";
			this->label4->Click += gcnew System::EventHandler(this, &firstpage::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label5->Location = System::Drawing::Point(118, 158);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(5);
			this->label5->Size = System::Drawing::Size(138, 31);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Interest Rate :";
			this->label5->Click += gcnew System::EventHandler(this, &firstpage::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label6->Location = System::Drawing::Point(118, 220);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(5);
			this->label6->Size = System::Drawing::Size(136, 31);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Time  Period :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label7->Location = System::Drawing::Point(117, 99);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(5);
			this->label7->Size = System::Drawing::Size(142, 31);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Loan Amount :";
			// 
			// loanamount
			// 
			this->loanamount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->loanamount->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loanamount->Location = System::Drawing::Point(270, 104);
			this->loanamount->Name = L"loanamount";
			this->loanamount->Size = System::Drawing::Size(139, 26);
			this->loanamount->TabIndex = 12;
			// 
			// time
			// 
			this->time->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->time->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time->Location = System::Drawing::Point(270, 228);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(139, 26);
			this->time->TabIndex = 13;
			// 
			// interest
			// 
			this->interest->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->interest->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->interest->Location = System::Drawing::Point(270, 163);
			this->interest->Name = L"interest";
			this->interest->Size = System::Drawing::Size(139, 26);
			this->interest->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Gainsboro;
			this->label8->Location = System::Drawing::Point(271, 272);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(9);
			this->label8->Size = System::Drawing::Size(94, 34);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Calculate";
			this->label8->Click += gcnew System::EventHandler(this, &firstpage::label8_Click_1);
			this->label8->MouseLeave += gcnew System::EventHandler(this, &firstpage::label8_MouseLeave);
			this->label8->MouseHover += gcnew System::EventHandler(this, &firstpage::label8_MouseHover);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::AliceBlue;
			this->label9->Location = System::Drawing::Point(41, 13);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(5);
			this->label9->Size = System::Drawing::Size(83, 22);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Monthly EMI ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label11->Location = System::Drawing::Point(460, 405);
			this->label11->Name = L"label11";
			this->label11->Padding = System::Windows::Forms::Padding(5);
			this->label11->Size = System::Drawing::Size(10, 32);
			this->label11->TabIndex = 20;
			this->label11->Visible = false;
			// 
			// emi
			// 
			this->emi->AutoSize = true;
			this->emi->BackColor = System::Drawing::Color::Transparent;
			this->emi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->emi->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emi->ForeColor = System::Drawing::Color::Gainsboro;
			this->emi->Location = System::Drawing::Point(39, 45);
			this->emi->Name = L"emi";
			this->emi->Padding = System::Windows::Forms::Padding(5);
			this->emi->Size = System::Drawing::Size(10, 32);
			this->emi->TabIndex = 21;
			this->emi->Visible = false;
			this->emi->Click += gcnew System::EventHandler(this, &firstpage::emi_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Gainsboro;
			this->label10->Location = System::Drawing::Point(463, 311);
			this->label10->Name = L"label10";
			this->label10->Padding = System::Windows::Forms::Padding(9);
			this->label10->Size = System::Drawing::Size(163, 32);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Repayment Schedule";
			this->label10->Visible = false;
			this->label10->Click += gcnew System::EventHandler(this, &firstpage::label10_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label12->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Gainsboro;
			this->label12->Location = System::Drawing::Point(6, 7);
			this->label12->Name = L"label12";
			this->label12->Padding = System::Windows::Forms::Padding(9);
			this->label12->Size = System::Drawing::Size(61, 34);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Back";
			this->label12->Visible = false;
			this->label12->Click += gcnew System::EventHandler(this, &firstpage::label12_Click);
			// 
			// emicalculator
			// 
			this->emicalculator->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"emicalculator.BackgroundImage")));
			this->emicalculator->Controls->Add(this->label29);
			this->emicalculator->Controls->Add(this->label28);
			this->emicalculator->Controls->Add(this->label26);
			this->emicalculator->Controls->Add(this->stockvolatility);
			this->emicalculator->Controls->Add(this->richTextBox1);
			this->emicalculator->Controls->Add(this->label4);
			this->emicalculator->Controls->Add(this->label12);
			this->emicalculator->Controls->Add(this->label7);
			this->emicalculator->Controls->Add(this->label8);
			this->emicalculator->Controls->Add(this->label5);
			this->emicalculator->Controls->Add(this->label6);
			this->emicalculator->Controls->Add(this->loanamount);
			this->emicalculator->Controls->Add(this->interest);
			this->emicalculator->Controls->Add(this->time);
			this->emicalculator->Controls->Add(this->label10);
			this->emicalculator->Controls->Add(this->panel8);
			this->emicalculator->Controls->Add(this->label27);
			this->emicalculator->Location = System::Drawing::Point(216, 39);
			this->emicalculator->Name = L"emicalculator";
			this->emicalculator->Size = System::Drawing::Size(633, 456);
			this->emicalculator->TabIndex = 24;
			this->emicalculator->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &firstpage::emicalculator_Paint);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label29->Location = System::Drawing::Point(267, 328);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(116, 13);
			this->label29->TabIndex = 32;
			this->label29->Text = L"Enter Valid Data !!!";
			this->label29->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label28->Location = System::Drawing::Point(245, 328);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(143, 13);
			this->label28->TabIndex = 31;
			this->label28->Text = L"Data Saved Succesfully";
			this->label28->Visible = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label26->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Gainsboro;
			this->label26->Location = System::Drawing::Point(557, 7);
			this->label26->Name = L"label26";
			this->label26->Padding = System::Windows::Forms::Padding(9);
			this->label26->Size = System::Drawing::Size(62, 34);
			this->label26->TabIndex = 28;
			this->label26->Text = L"Save";
			this->label26->Visible = false;
			this->label26->Click += gcnew System::EventHandler(this, &firstpage::label26_Click);
			// 
			// stockvolatility
			// 
			this->stockvolatility->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stockvolatility.BackgroundImage")));
			this->stockvolatility->Controls->Add(this->label24);
			this->stockvolatility->Controls->Add(this->label23);
			this->stockvolatility->Controls->Add(this->label22);
			this->stockvolatility->Controls->Add(this->textBox3);
			this->stockvolatility->Controls->Add(this->textBox2);
			this->stockvolatility->Controls->Add(this->textBox1);
			this->stockvolatility->Controls->Add(this->label21);
			this->stockvolatility->Controls->Add(this->label20);
			this->stockvolatility->Controls->Add(this->label19);
			this->stockvolatility->Controls->Add(this->label18);
			this->stockvolatility->Location = System::Drawing::Point(0, 0);
			this->stockvolatility->Name = L"stockvolatility";
			this->stockvolatility->Size = System::Drawing::Size(30, 437);
			this->stockvolatility->TabIndex = 27;
			this->stockvolatility->Visible = false;
			this->stockvolatility->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &firstpage::stockvolatility_Paint);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label24->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label24->Location = System::Drawing::Point(266, 367);
			this->label24->Name = L"label24";
			this->label24->Padding = System::Windows::Forms::Padding(5);
			this->label24->Size = System::Drawing::Size(10, 31);
			this->label24->TabIndex = 25;
			this->label24->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label23->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Gainsboro;
			this->label23->Location = System::Drawing::Point(276, 294);
			this->label23->Name = L"label23";
			this->label23->Padding = System::Windows::Forms::Padding(9);
			this->label23->Size = System::Drawing::Size(94, 34);
			this->label23->TabIndex = 24;
			this->label23->Text = L"Calculate";
			this->label23->Click += gcnew System::EventHandler(this, &firstpage::label23_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label22->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label22->Location = System::Drawing::Point(155, 371);
			this->label22->Name = L"label22";
			this->label22->Padding = System::Windows::Forms::Padding(5);
			this->label22->Size = System::Drawing::Size(123, 31);
			this->label22->TabIndex = 16;
			this->label22->Text = L"Volatility is  ";
			this->label22->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(279, 238);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(139, 26);
			this->textBox3->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(279, 190);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 26);
			this->textBox2->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(279, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(139, 26);
			this->textBox1->TabIndex = 13;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label21->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label21->Location = System::Drawing::Point(123, 241);
			this->label21->Name = L"label21";
			this->label21->Padding = System::Windows::Forms::Padding(5);
			this->label21->Size = System::Drawing::Size(118, 27);
			this->label21->TabIndex = 7;
			this->label21->Text = L"Closing Price:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label20->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label20->Location = System::Drawing::Point(87, 189);
			this->label20->Name = L"label20";
			this->label20->Padding = System::Windows::Forms::Padding(5);
			this->label20->Size = System::Drawing::Size(154, 27);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Previous Day Low :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label19->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label19->Location = System::Drawing::Point(82, 141);
			this->label19->Name = L"label19";
			this->label19->Padding = System::Windows::Forms::Padding(5);
			this->label19->Size = System::Drawing::Size(159, 27);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Previous Day High :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label18->Location = System::Drawing::Point(178, 20);
			this->label18->Name = L"label18";
			this->label18->Padding = System::Windows::Forms::Padding(5);
			this->label18->Size = System::Drawing::Size(240, 34);
			this->label18->TabIndex = 4;
			this->label18->Text = L"Stock Volatility Indicator";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panel8->Controls->Add(this->label15);
			this->panel8->Controls->Add(this->label16);
			this->panel8->Controls->Add(this->label13);
			this->panel8->Controls->Add(this->label14);
			this->panel8->Controls->Add(this->emi);
			this->panel8->Controls->Add(this->label9);
			this->panel8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel8->Location = System::Drawing::Point(-8, 360);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(641, 0);
			this->panel8->TabIndex = 25;
			this->panel8->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Gainsboro;
			this->label15->Location = System::Drawing::Point(472, 45);
			this->label15->Name = L"label15";
			this->label15->Padding = System::Windows::Forms::Padding(5);
			this->label15->Size = System::Drawing::Size(10, 32);
			this->label15->TabIndex = 28;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::AliceBlue;
			this->label16->Location = System::Drawing::Point(474, 13);
			this->label16->Name = L"label16";
			this->label16->Padding = System::Windows::Forms::Padding(5);
			this->label16->Size = System::Drawing::Size(94, 22);
			this->label16->TabIndex = 27;
			this->label16->Text = L"Total Payment";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Gainsboro;
			this->label13->Location = System::Drawing::Point(244, 45);
			this->label13->Name = L"label13";
			this->label13->Padding = System::Windows::Forms::Padding(5);
			this->label13->Size = System::Drawing::Size(10, 32);
			this->label13->TabIndex = 26;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::AliceBlue;
			this->label14->Location = System::Drawing::Point(239, 13);
			this->label14->Name = L"label14";
			this->label14->Padding = System::Windows::Forms::Padding(5);
			this->label14->Size = System::Drawing::Size(89, 22);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Total Interest";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label27->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Gainsboro;
			this->label27->Location = System::Drawing::Point(147, 272);
			this->label27->Name = L"label27";
			this->label27->Padding = System::Windows::Forms::Padding(9);
			this->label27->Size = System::Drawing::Size(67, 34);
			this->label27->TabIndex = 33;
			this->label27->Text = L"Reset";
			this->label27->Visible = false;
			this->label27->Click += gcnew System::EventHandler(this, &firstpage::label27_Click_2);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &firstpage::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &firstpage::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &firstpage::timer3_Tick);
			// 
			// firstpage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(847, 495);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->emicalculator);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"firstpage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"firstpage";
			this->Load += gcnew System::EventHandler(this, &firstpage::firstpage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->emicalculator->ResumeLayout(false);
			this->emicalculator->PerformLayout();
			this->stockvolatility->ResumeLayout(false);
			this->stockvolatility->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}

private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	emicalculator->Width = 30;
	stockvolatility->Width = 30;
	stockvolatility->Visible = false;
	label2->ForeColor = System::Drawing::Color::White;
	label3->ForeColor = System::Drawing::Color::DarkGray;
	panel6->BackColor = System::Drawing::Color::FromArgb(31, 30, 52);
	panel5->BackColor = System::Drawing::Color::Transparent;
	label17->ForeColor = System::Drawing::Color::DarkGray;
	panel7->BackColor = System::Drawing::Color::Transparent;
	timer2->Start();
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void firstpage_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
        	
	
}   
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	label12->Visible = false;
	richTextBox1->Visible = false;
	label26->Visible = false;
	flag = 3;
	emicalculator->Width = 30;
	stockvolatility->Width = 30;
	label30->Visible = false;
	label3->ForeColor = System::Drawing::Color::White;
	label2->ForeColor = System::Drawing::Color::DarkGray;
	label17->ForeColor = System::Drawing::Color::DarkGray;
	panel7->BackColor = System::Drawing::Color::Transparent;
	panel6->BackColor = System::Drawing::Color::Transparent;
	panel5->BackColor = System::Drawing::Color::FromArgb(31, 30, 52);
	
}
private: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel6_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	label10->Visible = false;
	label26->Visible = true;
	richTextBox1->Visible = true;
	label12->Visible = true;
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
	label10->Visible = true;
	label28->Visible = false;
	label26->Visible = false;
	label12->Visible = false;
	richTextBox1->Visible = false;
	

}
private: System::Void emicalculator_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void emi_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
	label12->Visible = false;
	richTextBox1->Visible = false;
	label26->Visible = false;
	flag = 2;
	label30->Visible = false;

	label29->Visible = false;
	stockvolatility->Visible = true;
	label17->ForeColor = System::Drawing::Color::White;
	label2->ForeColor = System::Drawing::Color::DarkGray;
	label3->ForeColor = System::Drawing::Color::DarkGray;
	panel6->BackColor = System::Drawing::Color::Transparent;
	panel5->BackColor = System::Drawing::Color::Transparent;
	panel7->BackColor = System::Drawing::Color::FromArgb(31, 30, 52);
	timer3->Start();

}
private: System::Void panel7_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
	double previous_day_low, previous_day_high, close_price, difference,volatility;
	previous_day_high = System::Convert::ToDouble(textBox1->Text);
	previous_day_low = System::Convert::ToDouble(textBox2->Text);
	close_price = System::Convert::ToDouble(textBox3->Text);
	difference = previous_day_high - previous_day_low;
	volatility = (difference / close_price) * 100;
	volatility = volatility / 2;
	label12->Visible = true;
	label22->Visible = true;
	label24->Visible = true;
	label24->Text = System::Convert::ToString(volatility)+" %";
}
private: System::Void label25_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	obj->Show();
}
private: System::Void stockvolatility_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	panel8->Height += 10;
	if (panel8->Height == 150)
	{
		timer1->Stop();
	}
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	
		emicalculator->Width += 60;
		if (emicalculator->Width == 630)
			timer2->Stop();
	
}
private: System::Void label26_Click(System::Object^  sender, System::EventArgs^  e) {
	label28->Visible = true;
	StreamWriter file("repaymentschedule.txt", true);
	file.WriteLine(richTextBox1->Text);
	file.Close();
	
}
private: System::Void label27_Click(System::Object^  sender, System::EventArgs^  e) {
	panel10->Visible = false;
	label10->Visible = false;
	panel8->Visible = false;
	loanamount->Text="";
	time->Text = "";
	interest->Text = "";
	this->label27->Visible = false;
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}


private: System::Void label30_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void panel13_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	
}

private: System::Void label30_Click_1(System::Object^  sender, System::EventArgs^  e) {
	loan ^obj1 = gcnew loan(this);
	this->Hide();
	obj1->Show();
}
private: System::Void label30_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->label30->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));

}
private: System::Void label30_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	this->label30->Font = (gcnew System::Drawing::Font(L"Verdana", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void label8_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	this->label8->ForeColor = System::Drawing::Color::White;
}
private: System::Void label8_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (loanamount->Text != "" && interest->Text != "" && time->Text != "")
	{
		double p, n, R;
		double r, beg_balance, monthly_emi, principle, monthly_interest, ending_balance;
		int res, tmp_beg_balance, tmp_monthly_emi, tmp_principle, tmp_monthly_interest, tmp_ending_balance, total_payment;

		p = System::Convert::ToDouble(loanamount->Text);
		R = System::Convert::ToDouble(interest->Text);
		r = R / 12 / 100;
		n = System::Convert::ToDouble(time->Text);
		res = (p * r * Math::Pow(1 + r, n)) / (Math::Pow(1 + r, n) - 1);

		emi->Text = System::Convert::ToString(res) + ".00";
		label29->Visible = false;
		label30->Visible = true;
		label9->Visible = true;
		label27->Visible = false;
		emi->Visible = true;
		label10->Visible = true;
		richTextBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		richTextBox1->Text = "\tNo.\tB.Balance\tEMI\t    principle\t   Interest\tEnding Balance\n";
		beg_balance = p;
		richTextBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		for (int i = 1; i <= n; i++)
		{
			monthly_interest = beg_balance * r;
			principle = res - monthly_interest;
			ending_balance = beg_balance - principle;
			tmp_beg_balance = System::Convert::ToInt64(beg_balance);
			tmp_principle = System::Convert::ToInt64(principle);
			tmp_monthly_interest = System::Convert::ToInt64(monthly_interest);
			tmp_ending_balance = System::Convert::ToInt64(ending_balance);
			total_interest = total_interest + tmp_monthly_interest;
			richTextBox1->AppendText("\t" + i + "\t" + tmp_beg_balance + "\t\t" + res + "\t\t" + tmp_principle + "\t\t" + tmp_monthly_interest + "\t\t" + tmp_ending_balance + "\n");
			beg_balance = ending_balance;
		}
		label13->Text = System::Convert::ToString(total_interest) + ".00";
		total_payment = p + total_interest;
		label15->Text = System::Convert::ToString(total_payment) + ".00";
		total_interest = 0;
		total_payment = 0;
		panel8->Visible = true;
		timer1->Start();
		label27->Visible = true;


	}
	else
	{
		panel8->Visible = false;
		label27->Visible = false;
		label10->Visible = false;
		label29->Visible = true;
	}

}
private: System::Void label8_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->label8->ForeColor = System::Drawing::Color::Gainsboro;
}
private: System::Void label27_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	this->label27->ForeColor = System::Drawing::Color::White;
}
private: System::Void label27_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->label27->ForeColor = System::Drawing::Color::Gainsboro;
}
private: System::Void label27_Click_2(System::Object^  sender, System::EventArgs^  e) {
	label30->Visible = false;
	label27->Visible = false;	
	label10->Visible = false;
	label20->Visible = false;
	loanamount->Text = "";
	time->Text = "";
	interest->Text = "";
	panel8->Visible = false;
	label29->Visible = false;
}
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
	stockvolatility->Width += 60;
	if (stockvolatility->Width == 630)
		timer3->Stop();

}
};
}
