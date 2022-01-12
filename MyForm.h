#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ B1;


	private: System::Windows::Forms::Button^ B4;
	private: System::Windows::Forms::Button^ B5;
	private: System::Windows::Forms::Button^ B6;
	private: System::Windows::Forms::Button^ B7;
	private: System::Windows::Forms::Button^ B8;
	private: System::Windows::Forms::Button^ B9;

	private: System::Windows::Forms::Button^ Plus;
	private: System::Windows::Forms::Button^ Minus;
	private: System::Windows::Forms::Button^ Mun;
	private: System::Windows::Forms::Button^ Degree;
	private: System::Windows::Forms::RichTextBox^ Screen;
	private: System::Windows::Forms::Button^ B2;
	private: System::Windows::Forms::Button^ B3;
	private: System::Windows::Forms::Button^ B0;

	protected:

	protected:















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
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->B4 = (gcnew System::Windows::Forms::Button());
			this->B5 = (gcnew System::Windows::Forms::Button());
			this->B6 = (gcnew System::Windows::Forms::Button());
			this->B7 = (gcnew System::Windows::Forms::Button());
			this->B8 = (gcnew System::Windows::Forms::Button());
			this->B9 = (gcnew System::Windows::Forms::Button());
			this->Plus = (gcnew System::Windows::Forms::Button());
			this->Minus = (gcnew System::Windows::Forms::Button());
			this->Mun = (gcnew System::Windows::Forms::Button());
			this->Degree = (gcnew System::Windows::Forms::Button());
			this->Screen = (gcnew System::Windows::Forms::RichTextBox());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->B0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// B1
			// 
			this->B1->Location = System::Drawing::Point(21, 157);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(50, 54);
			this->B1->TabIndex = 0;
			this->B1->Text = L"1";
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// B4
			// 
			this->B4->Location = System::Drawing::Point(21, 236);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(50, 54);
			this->B4->TabIndex = 0;
			this->B4->Text = L"4";
			this->B4->UseVisualStyleBackColor = true;
			this->B4->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// B5
			// 
			this->B5->Location = System::Drawing::Point(94, 236);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(50, 54);
			this->B5->TabIndex = 0;
			this->B5->Text = L"5";
			this->B5->UseVisualStyleBackColor = true;
			this->B5->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// B6
			// 
			this->B6->Location = System::Drawing::Point(165, 236);
			this->B6->Name = L"B6";
			this->B6->Size = System::Drawing::Size(50, 54);
			this->B6->TabIndex = 0;
			this->B6->Text = L"6";
			this->B6->UseVisualStyleBackColor = true;
			this->B6->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// B7
			// 
			this->B7->Location = System::Drawing::Point(22, 314);
			this->B7->Name = L"B7";
			this->B7->Size = System::Drawing::Size(50, 54);
			this->B7->TabIndex = 0;
			this->B7->Text = L"7";
			this->B7->UseVisualStyleBackColor = true;
			this->B7->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// B8
			// 
			this->B8->Location = System::Drawing::Point(94, 314);
			this->B8->Name = L"B8";
			this->B8->Size = System::Drawing::Size(50, 54);
			this->B8->TabIndex = 0;
			this->B8->Text = L"8";
			this->B8->UseVisualStyleBackColor = true;
			this->B8->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// B9
			// 
			this->B9->Location = System::Drawing::Point(165, 314);
			this->B9->Name = L"B9";
			this->B9->Size = System::Drawing::Size(50, 54);
			this->B9->TabIndex = 0;
			this->B9->Text = L"9";
			this->B9->UseVisualStyleBackColor = true;
			this->B9->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Plus
			// 
			this->Plus->Location = System::Drawing::Point(307, 157);
			this->Plus->Name = L"Plus";
			this->Plus->Size = System::Drawing::Size(50, 54);
			this->Plus->TabIndex = 0;
			this->Plus->Text = L"+";
			this->Plus->UseVisualStyleBackColor = true;
			this->Plus->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Minus
			// 
			this->Minus->Location = System::Drawing::Point(375, 157);
			this->Minus->Name = L"Minus";
			this->Minus->Size = System::Drawing::Size(50, 54);
			this->Minus->TabIndex = 0;
			this->Minus->Text = L"-";
			this->Minus->UseVisualStyleBackColor = true;
			this->Minus->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Mun
			// 
			this->Mun->Location = System::Drawing::Point(307, 236);
			this->Mun->Name = L"Mun";
			this->Mun->Size = System::Drawing::Size(50, 54);
			this->Mun->TabIndex = 0;
			this->Mun->Text = L"*";
			this->Mun->UseVisualStyleBackColor = true;
			this->Mun->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Degree
			// 
			this->Degree->Location = System::Drawing::Point(375, 236);
			this->Degree->Name = L"Degree";
			this->Degree->Size = System::Drawing::Size(50, 54);
			this->Degree->TabIndex = 0;
			this->Degree->Text = L"/";
			this->Degree->UseVisualStyleBackColor = true;
			this->Degree->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Screen
			// 
			this->Screen->Location = System::Drawing::Point(21, 13);
			this->Screen->Name = L"Screen";
			this->Screen->Size = System::Drawing::Size(404, 125);
			this->Screen->TabIndex = 1;
			this->Screen->Text = L"";
			this->Screen->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// B2
			// 
			this->B2->Location = System::Drawing::Point(96, 157);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(50, 54);
			this->B2->TabIndex = 2;
			this->B2->Text = L"2";
			this->B2->UseVisualStyleBackColor = true;
			// 
			// B3
			// 
			this->B3->Location = System::Drawing::Point(165, 157);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(50, 54);
			this->B3->TabIndex = 3;
			this->B3->Text = L"3";
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Click += gcnew System::EventHandler(this, &MyForm::B3_Click);
			// 
			// B0
			// 
			this->B0->Location = System::Drawing::Point(238, 311);
			this->B0->Name = L"B0";
			this->B0->Size = System::Drawing::Size(50, 54);
			this->B0->TabIndex = 4;
			this->B0->Text = L"0";
			this->B0->UseVisualStyleBackColor = true;
			this->B0->Click += gcnew System::EventHandler(this, &MyForm::B0_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(446, 377);
			this->Controls->Add(this->B0);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->Screen);
			this->Controls->Add(this->B6);
			this->Controls->Add(this->B5);
			this->Controls->Add(this->Minus);
			this->Controls->Add(this->Degree);
			this->Controls->Add(this->Mun);
			this->Controls->Add(this->Plus);
			this->Controls->Add(this->B9);
			this->Controls->Add(this->B8);
			this->Controls->Add(this->B7);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->B1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Screen->Text = System::Convert::ToString(1);
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
