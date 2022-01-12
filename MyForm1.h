#pragma once
#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include "Calculating.h"

namespace Project1 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ Screen;
	protected:

	private: System::Windows::Forms::Button^ B1;

	private: System::Windows::Forms::Button^ B2;

	private: System::Windows::Forms::Button^ B3;

	private: System::Windows::Forms::Button^ B4;

	private: System::Windows::Forms::Button^ B5;

	private: System::Windows::Forms::Button^ B6;
	private: System::Windows::Forms::Button^ B7;
	private: System::Windows::Forms::Button^ B8;
	private: System::Windows::Forms::Button^ B9;
	private: System::Windows::Forms::Button^ B0;
	private: System::Windows::Forms::Button^ Plus;
	private: System::Windows::Forms::Button^ Minus;
	private: System::Windows::Forms::Button^ Clean;
	private: System::Windows::Forms::Button^ Mun;
	private: System::Windows::Forms::Button^ Division;


	private: System::Windows::Forms::Button^ Result;



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Screen = (gcnew System::Windows::Forms::RichTextBox());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->B4 = (gcnew System::Windows::Forms::Button());
			this->B5 = (gcnew System::Windows::Forms::Button());
			this->B6 = (gcnew System::Windows::Forms::Button());
			this->B7 = (gcnew System::Windows::Forms::Button());
			this->B8 = (gcnew System::Windows::Forms::Button());
			this->B9 = (gcnew System::Windows::Forms::Button());
			this->B0 = (gcnew System::Windows::Forms::Button());
			this->Plus = (gcnew System::Windows::Forms::Button());
			this->Minus = (gcnew System::Windows::Forms::Button());
			this->Clean = (gcnew System::Windows::Forms::Button());
			this->Mun = (gcnew System::Windows::Forms::Button());
			this->Division = (gcnew System::Windows::Forms::Button());
			this->Result = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Screen
			// 
			this->Screen->Enabled = false;
			this->Screen->Location = System::Drawing::Point(13, 13);
			this->Screen->Name = L"Screen";
			this->Screen->Size = System::Drawing::Size(453, 127);
			this->Screen->TabIndex = 0;
			this->Screen->Text = L"";
			this->Screen->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// B1
			// 
			this->B1->Location = System::Drawing::Point(13, 146);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(59, 55);
			this->B1->TabIndex = 1;
			this->B1->Text = L"1";
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// B2
			// 
			this->B2->Location = System::Drawing::Point(78, 146);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(57, 55);
			this->B2->TabIndex = 2;
			this->B2->Text = L"2";
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// B3
			// 
			this->B3->Location = System::Drawing::Point(141, 146);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(60, 55);
			this->B3->TabIndex = 3;
			this->B3->Text = L"3";
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// B4
			// 
			this->B4->Location = System::Drawing::Point(13, 207);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(59, 58);
			this->B4->TabIndex = 4;
			this->B4->Text = L"4";
			this->B4->UseVisualStyleBackColor = true;
			this->B4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// B5
			// 
			this->B5->Location = System::Drawing::Point(78, 207);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(57, 58);
			this->B5->TabIndex = 5;
			this->B5->Text = L"5";
			this->B5->UseVisualStyleBackColor = true;
			this->B5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// B6
			// 
			this->B6->Location = System::Drawing::Point(141, 207);
			this->B6->Name = L"B6";
			this->B6->Size = System::Drawing::Size(60, 58);
			this->B6->TabIndex = 6;
			this->B6->Text = L"6";
			this->B6->UseVisualStyleBackColor = true;
			this->B6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// B7
			// 
			this->B7->Location = System::Drawing::Point(13, 272);
			this->B7->Name = L"B7";
			this->B7->Size = System::Drawing::Size(59, 55);
			this->B7->TabIndex = 7;
			this->B7->Text = L"7";
			this->B7->UseVisualStyleBackColor = true;
			this->B7->Click += gcnew System::EventHandler(this, &MyForm::B7_Click);
			// 
			// B8
			// 
			this->B8->Location = System::Drawing::Point(78, 272);
			this->B8->Name = L"B8";
			this->B8->Size = System::Drawing::Size(57, 55);
			this->B8->TabIndex = 8;
			this->B8->Text = L"8";
			this->B8->UseVisualStyleBackColor = true;
			this->B8->Click += gcnew System::EventHandler(this, &MyForm::B8_Click);
			// 
			// B9
			// 
			this->B9->Location = System::Drawing::Point(141, 272);
			this->B9->Name = L"B9";
			this->B9->Size = System::Drawing::Size(60, 55);
			this->B9->TabIndex = 9;
			this->B9->Text = L"9";
			this->B9->UseVisualStyleBackColor = true;
			this->B9->Click += gcnew System::EventHandler(this, &MyForm::B9_Click);
			// 
			// B0
			// 
			this->B0->Location = System::Drawing::Point(211, 272);
			this->B0->Name = L"B0";
			this->B0->Size = System::Drawing::Size(63, 55);
			this->B0->TabIndex = 10;
			this->B0->Text = L"0";
			this->B0->UseVisualStyleBackColor = true;
			this->B0->Click += gcnew System::EventHandler(this, &MyForm::B0_Click);
			// 
			// Plus
			// 
			this->Plus->Location = System::Drawing::Point(211, 147);
			this->Plus->Name = L"Plus";
			this->Plus->Size = System::Drawing::Size(63, 54);
			this->Plus->TabIndex = 11;
			this->Plus->Text = L"+";
			this->Plus->UseVisualStyleBackColor = true;
			this->Plus->Click += gcnew System::EventHandler(this, &MyForm::Plus_Click);
			// 
			// Minus
			// 
			this->Minus->Location = System::Drawing::Point(211, 207);
			this->Minus->Name = L"Minus";
			this->Minus->Size = System::Drawing::Size(63, 58);
			this->Minus->TabIndex = 12;
			this->Minus->Text = L"-";
			this->Minus->UseVisualStyleBackColor = true;
			this->Minus->Click += gcnew System::EventHandler(this, &MyForm::Minus_Click);
			// 
			// Clean
			// 
			this->Clean->Location = System::Drawing::Point(421, 273);
			this->Clean->Name = L"Clean";
			this->Clean->Size = System::Drawing::Size(55, 54);
			this->Clean->TabIndex = 13;
			this->Clean->Text = L"C";
			this->Clean->UseVisualStyleBackColor = true;
			this->Clean->Click += gcnew System::EventHandler(this, &MyForm::Clean_Click);
			// 
			// Mun
			// 
			this->Mun->Location = System::Drawing::Point(281, 146);
			this->Mun->Name = L"Mun";
			this->Mun->Size = System::Drawing::Size(58, 55);
			this->Mun->TabIndex = 14;
			this->Mun->Text = L"*";
			this->Mun->UseVisualStyleBackColor = true;
			this->Mun->Click += gcnew System::EventHandler(this, &MyForm::Mun_Click);
			// 
			// Division
			// 
			this->Division->Location = System::Drawing::Point(281, 208);
			this->Division->Name = L"Division";
			this->Division->Size = System::Drawing::Size(58, 57);
			this->Division->TabIndex = 15;
			this->Division->Text = L"/";
			this->Division->UseVisualStyleBackColor = true;
			this->Division->Click += gcnew System::EventHandler(this, &MyForm::Division_Click);
			// 
			// Result
			// 
			this->Result->Location = System::Drawing::Point(340, 272);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(75, 55);
			this->Result->TabIndex = 16;
			this->Result->Text = L"=";
			this->Result->UseVisualStyleBackColor = true;
			this->Result->Click += gcnew System::EventHandler(this, &MyForm::Result_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 339);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->Division);
			this->Controls->Add(this->Mun);
			this->Controls->Add(this->Clean);
			this->Controls->Add(this->Minus);
			this->Controls->Add(this->Plus);
			this->Controls->Add(this->B0);
			this->Controls->Add(this->B9);
			this->Controls->Add(this->B8);
			this->Controls->Add(this->B7);
			this->Controls->Add(this->B6);
			this->Controls->Add(this->B5);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->Screen);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Screen->AppendText(System::Convert::ToString(1));
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Screen->AppendText(System::Convert::ToString(2));
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Screen->AppendText(System::Convert::ToString(4));
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->AppendText(System::Convert::ToString(3));
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->AppendText(System::Convert::ToString(5));
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->AppendText(System::Convert::ToString(6));
}
private: System::Void B7_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->AppendText(System::Convert::ToString(7));
}
private: System::Void B8_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->AppendText(System::Convert::ToString(8));
}
private: System::Void B9_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->AppendText(System::Convert::ToString(9));
}
private: System::Void B0_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->AppendText(System::Convert::ToString(0));
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Clean_Click(System::Object^ sender, System::EventArgs^ e) {//очистка
	Screen->Clear();
}
private: System::Void Plus_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->AppendText("+");
}
private: System::Void Minus_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->AppendText("-");

}
private: System::Void Mun_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->AppendText("*");
}
private: System::Void Division_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->AppendText("/");
}
private: System::Void Result_Click(System::Object^ sender, System::EventArgs^ e) {
	Screen->AppendText("=");
	String^ UnmannegedExpression;
	UnmannegedExpression = Screen->Text;//записываем выражение
	string ManagedExpression=msclr::interop::marshal_as<std::string>(UnmannegedExpression);
	GetText(ManagedExpression);
}
};
}
