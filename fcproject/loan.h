#pragma once

namespace fcproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loan
	/// </summary>
	public ref class loan : public System::Windows::Forms::Form
	{
	public:
	
	private: System::Windows::Forms::Panel^  panel5;
	public:
		Form ^obj;
		String ^web;
		loan(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		loan(Form ^obj1)
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
		~loan()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel4;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(loan::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(428, 168);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(6);
			this->label1->Size = System::Drawing::Size(220, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"HDFC Bank               ";
			this->label1->Click += gcnew System::EventHandler(this, &loan::label1_Click);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &loan::label1_MouseLeave);
			this->label1->MouseHover += gcnew System::EventHandler(this, &loan::label1_MouseHover);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gainsboro;
			this->label2->Location = System::Drawing::Point(428, 213);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(6);
			this->label2->Size = System::Drawing::Size(220, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ICIC Bank                  ";
			this->label2->Click += gcnew System::EventHandler(this, &loan::label2_Click);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &loan::label2_MouseLeave);
			this->label2->MouseHover += gcnew System::EventHandler(this, &loan::label2_MouseHover);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gainsboro;
			this->label3->Location = System::Drawing::Point(428, 258);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(6);
			this->label3->Size = System::Drawing::Size(218, 36);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Kotak Mahindra Bank";
			this->label3->Click += gcnew System::EventHandler(this, &loan::label3_Click);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &loan::label3_MouseLeave);
			this->label3->MouseHover += gcnew System::EventHandler(this, &loan::label3_MouseHover);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gainsboro;
			this->label4->Location = System::Drawing::Point(428, 305);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(6);
			this->label4->Size = System::Drawing::Size(218, 36);
			this->label4->TabIndex = 3;
			this->label4->Text = L"State Bank of India    ";
			this->label4->Click += gcnew System::EventHandler(this, &loan::label4_Click);
			this->label4->MouseLeave += gcnew System::EventHandler(this, &loan::label4_MouseLeave);
			this->label4->MouseHover += gcnew System::EventHandler(this, &loan::label4_MouseHover);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(-11, -73);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1052, 526);
			this->panel2->TabIndex = 6;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(15, 74);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->ScriptErrorsSuppressed = true;
			this->webBrowser1->Size = System::Drawing::Size(1035, 453);
			this->webBrowser1->TabIndex = 6;
			this->webBrowser1->Visible = false;
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &loan::webBrowser1_DocumentCompleted_1);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Location = System::Drawing::Point(12, 74);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(805, 373);
			this->panel3->TabIndex = 7;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label12->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Gainsboro;
			this->label12->Location = System::Drawing::Point(12, 13);
			this->label12->Name = L"label12";
			this->label12->Padding = System::Windows::Forms::Padding(9);
			this->label12->Size = System::Drawing::Size(101, 36);
			this->label12->TabIndex = 24;
			this->label12->Text = L"BackWard";
			this->label12->Click += gcnew System::EventHandler(this, &loan::label12_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Gainsboro;
			this->label6->Location = System::Drawing::Point(146, 13);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(9);
			this->label6->Size = System::Drawing::Size(88, 36);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Forward";
			this->label6->Click += gcnew System::EventHandler(this, &loan::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Gainsboro;
			this->label7->Location = System::Drawing::Point(269, 13);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(9);
			this->label7->Size = System::Drawing::Size(83, 36);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Refresh";
			this->label7->Click += gcnew System::EventHandler(this, &loan::label7_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(77, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(454, 56);
			this->panel1->TabIndex = 27;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &loan::panel1_Paint_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(406, 25);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(243, 28);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Best Banks for Loan";
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(12, 12);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(28, 28);
			this->panel4->TabIndex = 5;
			this->panel4->Visible = false;
			this->panel4->Click += gcnew System::EventHandler(this, &loan::panel4_Click);
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &loan::panel4_Paint);
			this->panel4->MouseLeave += gcnew System::EventHandler(this, &loan::panel4_MouseLeave);
			this->panel4->MouseHover += gcnew System::EventHandler(this, &loan::panel4_MouseHover);
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(12, 40);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(28, 28);
			this->panel5->TabIndex = 6;
			this->panel5->Click += gcnew System::EventHandler(this, &loan::panel5_Click);
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &loan::panel5_Paint);
			// 
			// loan
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->ClientSize = System::Drawing::Size(1065, 539);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"loan";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"loan";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
panel5->Visible=false;
		label8->Visible = false;
		panel4->Visible = true;
		panel1->Visible = true;
		webBrowser1->Visible = true;
		panel2->Visible = false;
		web="https://www.hdfcbank.com/personal/borrow/popular-loans";
		this->webBrowser1->Url = (gcnew System::Uri(web, System::UriKind::Absolute));
		
		
	}
private: System::Void label1_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void label1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void label2_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}

private: System::Void label2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible = false;
	label8->Visible = false;
	panel4->Visible = true;
	panel1->Visible = true;
	webBrowser1->Visible = true;
	panel2->Visible = false;
	web = "https://www.kotak.com/en/personal-banking/loans/personal-loan/interest-rates.html";
	this->webBrowser1->Url = (gcnew System::Uri(web, System::UriKind::Absolute));


}
private: System::Void label3_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void label3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}

private: System::Void label4_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}

private: System::Void label4_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void panel1_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible = false;
	label8->Visible = false;
	panel4->Visible = true;
	panel1->Visible = true;
	webBrowser1->Visible = true;
	panel2->Visible = false;
	web = "https://www.icicibank.com/Personal-Banking/loans/loans.page";
	this->webBrowser1->Url = (gcnew System::Uri(web, System::UriKind::Absolute));

}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible = false;
	label8->Visible = false;
	panel4->Visible = true;
	panel1->Visible = true;
	webBrowser1->Visible = true;
	panel2->Visible = false;
	web = "https://sbi.co.in/web/personal-banking/loans/personal-loans";
	this->webBrowser1->Url = (gcnew System::Uri(web, System::UriKind::Absolute));

}
private: System::Void webBrowser1_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
	webBrowser1->GoBack();
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	webBrowser1->GoForward();
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	webBrowser1->Refresh();
}
private: System::Void panel1_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

}
private: System::Void panel4_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible = true;
	panel1->Visible = false;
	webBrowser1->Visible = false;
	webBrowser1->Stop();
	panel4->Visible = false;
	panel2->Visible = true;
	label8->Visible = true;
}
private: System::Void webBrowser1_DocumentCompleted_1(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
}
private: System::Void panel4_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	this->panel4->Size = System::Drawing::Size(33, 33);

}

private: System::Void panel4_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	this->panel4->Size = System::Drawing::Size(28, 28);
}
private: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	obj->Show();
}

};
}
