#pragma once

namespace CWinformTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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

			next(this->n);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ txt_numb;
	protected:

	private: System::Windows::Forms::Label^ txt_question;
	private: System::Windows::Forms::RadioButton^ Answer1;
	private: System::Windows::Forms::RadioButton^ Answer4;
	private: System::Windows::Forms::RadioButton^ Answer2;
	private: System::Windows::Forms::RadioButton^ Answer3;
	private: System::Windows::Forms::Button^ btn_next;

	private: int n = 0;
	private: int select = 0;
	private: int sel_rig = 0;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_numb = (gcnew System::Windows::Forms::Label());
			this->txt_question = (gcnew System::Windows::Forms::Label());
			this->Answer1 = (gcnew System::Windows::Forms::RadioButton());
			this->Answer4 = (gcnew System::Windows::Forms::RadioButton());
			this->Answer2 = (gcnew System::Windows::Forms::RadioButton());
			this->Answer3 = (gcnew System::Windows::Forms::RadioButton());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_numb
			// 
			this->txt_numb->AutoSize = true;
			this->txt_numb->Location = System::Drawing::Point(26, 25);
			this->txt_numb->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->txt_numb->Name = L"txt_numb";
			this->txt_numb->Size = System::Drawing::Size(51, 25);
			this->txt_numb->TabIndex = 0;
			this->txt_numb->Text = L"1/10";
			// 
			// txt_question
			// 
			this->txt_question->AutoSize = true;
			this->txt_question->Location = System::Drawing::Point(26, 72);
			this->txt_question->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->txt_question->Name = L"txt_question";
			this->txt_question->Size = System::Drawing::Size(86, 25);
			this->txt_question->TabIndex = 1;
			this->txt_question->Text = L"question";
			// 
			// Answer1
			// 
			this->Answer1->AutoSize = true;
			this->Answer1->Location = System::Drawing::Point(31, 346);
			this->Answer1->Name = L"Answer1";
			this->Answer1->Size = System::Drawing::Size(107, 29);
			this->Answer1->TabIndex = 2;
			this->Answer1->TabStop = true;
			this->Answer1->Text = L"Answer1";
			this->Answer1->UseVisualStyleBackColor = true;
			this->Answer1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Answer1_CheckedChanged);
			// 
			// Answer4
			// 
			this->Answer4->AutoSize = true;
			this->Answer4->Location = System::Drawing::Point(371, 396);
			this->Answer4->Name = L"Answer4";
			this->Answer4->Size = System::Drawing::Size(107, 29);
			this->Answer4->TabIndex = 3;
			this->Answer4->TabStop = true;
			this->Answer4->Text = L"Answer4";
			this->Answer4->UseVisualStyleBackColor = true;
			this->Answer4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Answer4_CheckedChanged);
			// 
			// Answer2
			// 
			this->Answer2->AutoSize = true;
			this->Answer2->Location = System::Drawing::Point(371, 346);
			this->Answer2->Name = L"Answer2";
			this->Answer2->Size = System::Drawing::Size(107, 29);
			this->Answer2->TabIndex = 4;
			this->Answer2->TabStop = true;
			this->Answer2->Text = L"Answer2";
			this->Answer2->UseVisualStyleBackColor = true;
			this->Answer2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Answer2_CheckedChanged);
			// 
			// Answer3
			// 
			this->Answer3->AutoSize = true;
			this->Answer3->Location = System::Drawing::Point(31, 396);
			this->Answer3->Name = L"Answer3";
			this->Answer3->Size = System::Drawing::Size(107, 29);
			this->Answer3->TabIndex = 5;
			this->Answer3->TabStop = true;
			this->Answer3->Text = L"Answer3";
			this->Answer3->UseVisualStyleBackColor = true;
			this->Answer3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Answer3_CheckedChanged);
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(604, 462);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(85, 39);
			this->btn_next->TabIndex = 6;
			this->btn_next->Text = L"Далее";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &MyForm::btn_next_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 513);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->Answer3);
			this->Controls->Add(this->Answer2);
			this->Controls->Add(this->Answer4);
			this->Controls->Add(this->Answer1);
			this->Controls->Add(this->txt_question);
			this->Controls->Add(this->txt_numb);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"1/10";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void next(int n) {
		this->txt_numb->Text = System::Convert::ToString(n + 1) + "/10";

		array<String^>^ questions;
		array<String^, 2>^ answers;
		questions = gcnew array<String^>  {
			"Who was in Paris?",
				"Who was an austrian painter?",
				"Where was born a Stalin?",
				"Why Jewish is shaytan",
				"If I kill Jewish, I would be killer?",
				"Why I should kill turkish bastard?",
				"Why Conor is greater fighter than McGregor",
				"Ronaldo is Ronaldinio or no?",
				"Your Question",
				"2+2=?"
		};

		answers = gcnew array<String^, 2>  {
			{"Kanye", "Macron", "Macaron", "Hitler"},
			{ "Stalin", "Trotskiy", "Jugashvili", "Hitler" },
			{ "Ukraine", "German", "Austria", "Georgia" },
			{ "Why not?", "FREE PALESTINE", "Je...who?", "Mama mia pizza, parmezano" },
			{ "No", "Yes", "Why no?", "Why yes?" },
			{ "Yes", "No", "=_=", "..." },
			{ "Coz he is McGregor", "He is Irish", "McGregor sounds like Loser", "Conor sounds like For Honor" },
			{ "Ronaldo", "Is", "Not Ronaldinio", "Yes" },
			{ "Why are you gay", "Who says Im gay?", "You are gay", "..." },
			{ "3", "2", "1", "BOOM THIS WATCH FROM IRAQ" }
		};

		this->txt_question->Text = questions[n];

		this->Answer1->Text = answers[n, 0];
		this->Answer2->Text = answers[n, 1];
		this->Answer3->Text = answers[n, 2];
		this->Answer4->Text = answers[n, 3];

	}
	private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e) {
		int right[10] = { 4, 4, 4, 1, 2, 1, 4, 4, 3, 4 };

		if (this->select == right[this->n])
			this->sel_rig += 1;

		this->n += 1;
		if (this->n < 10)
			next(this->n);
		else {
			String^ what = "Correct answers: " + System::Convert::ToString(this->sel_rig) + "/10";

			MessageBox::Show(this, what, "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	
		this->n += 1;
		next(this->n);
		}

	}
private: System::Void Answer1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->select = 1;
}
private: System::Void Answer3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->select = 2;
}
private: System::Void Answer2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->select = 3;
}
private: System::Void Answer4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->select = 4;
}
};
}
