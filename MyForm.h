#pragma once
// I have no idea what tf this is meant to do
// Just kidding

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ maths_Multi_Q1;
	protected:

	private: System::Windows::Forms::TextBox^ maths_Multi_Q1_Ans;
	private: System::Windows::Forms::Label^ maths_Multi_Q2;




	private: System::Windows::Forms::TextBox^ maths_Multi_Q2_Ans;
	private: System::Windows::Forms::Label^ maths_Multi_Q3;
	private: System::Windows::Forms::Label^ maths_Multi_Q7;
	private: System::Windows::Forms::Label^ maths_Multi_Q8;






	private: System::Windows::Forms::Label^ maths_Multi_Q6;

	private: System::Windows::Forms::Label^ maths_Multi_Q4;
	private: System::Windows::Forms::Label^ maths_Multi_Q5;


	private: System::Windows::Forms::TextBox^ maths_Multi_Q7_Ans;


	private: System::Windows::Forms::TextBox^ maths_Multi_Q6_Ans;

	private: System::Windows::Forms::TextBox^ maths_Multi_Q5_Ans;

	private: System::Windows::Forms::TextBox^ maths_Multi_Q4_Ans;

	private: System::Windows::Forms::TextBox^ maths_Multi_Q3_Ans;
	private: System::Windows::Forms::TextBox^ maths_Multi_Q8_Ans;
	private: System::Windows::Forms::TextBox^ maths_Multi_Q9_Ans;
	private: System::Windows::Forms::Label^ maths_Multi_Q9;


	private: System::Windows::Forms::TextBox^ maths_Multi_Q10_Ans;
	private: System::Windows::Forms::Label^ maths_Multi_Q10;
	private: System::Windows::Forms::Button^ multiplication_Button;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ Q1_Wrong;
	private: System::Windows::Forms::PictureBox^ Q9_Wrong;

	private: System::Windows::Forms::PictureBox^ Q8_Wrong;

	private: System::Windows::Forms::PictureBox^ Q7_Wrong;

	private: System::Windows::Forms::PictureBox^ Q6_Wrong;
	private: System::Windows::Forms::PictureBox^ Q5_Wrong;
	private: System::Windows::Forms::PictureBox^ Q4_Wrong;
	private: System::Windows::Forms::PictureBox^ Q3_Wrong;
	private: System::Windows::Forms::PictureBox^ Q2_Wrong;
	private: System::Windows::Forms::PictureBox^ Q10_Wrong;
	private: System::Windows::Forms::PictureBox^ Q10_Ans_Correct;
	private: System::Windows::Forms::PictureBox^ Q9_Ans_Correct;
	private: System::Windows::Forms::PictureBox^ Q8_Ans_Correct;
	private: System::Windows::Forms::PictureBox^ Q7_Ans_Correct;
	private: System::Windows::Forms::PictureBox^ Q6_Ans_Correct;
	private: System::Windows::Forms::PictureBox^ Q5_Ans_Correct;
	private: System::Windows::Forms::PictureBox^ Q4_Ans_Correct;
	private: System::Windows::Forms::PictureBox^ Q3_Ans_Correct;
	private: System::Windows::Forms::PictureBox^ Q2_Ans_Correct;
	private: System::Windows::Forms::PictureBox^ Q1_Ans_Correct;










	protected:

	protected:

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
			this->maths_Multi_Q1 = (gcnew System::Windows::Forms::Label());
			this->maths_Multi_Q1_Ans = (gcnew System::Windows::Forms::TextBox());
			this->maths_Multi_Q2 = (gcnew System::Windows::Forms::Label());
			this->maths_Multi_Q2_Ans = (gcnew System::Windows::Forms::TextBox());
			this->maths_Multi_Q3 = (gcnew System::Windows::Forms::Label());
			this->maths_Multi_Q7 = (gcnew System::Windows::Forms::Label());
			this->maths_Multi_Q8 = (gcnew System::Windows::Forms::Label());
			this->maths_Multi_Q6 = (gcnew System::Windows::Forms::Label());
			this->maths_Multi_Q4 = (gcnew System::Windows::Forms::Label());
			this->maths_Multi_Q5 = (gcnew System::Windows::Forms::Label());
			this->maths_Multi_Q7_Ans = (gcnew System::Windows::Forms::TextBox());
			this->maths_Multi_Q6_Ans = (gcnew System::Windows::Forms::TextBox());
			this->maths_Multi_Q5_Ans = (gcnew System::Windows::Forms::TextBox());
			this->maths_Multi_Q4_Ans = (gcnew System::Windows::Forms::TextBox());
			this->maths_Multi_Q3_Ans = (gcnew System::Windows::Forms::TextBox());
			this->maths_Multi_Q8_Ans = (gcnew System::Windows::Forms::TextBox());
			this->maths_Multi_Q9_Ans = (gcnew System::Windows::Forms::TextBox());
			this->maths_Multi_Q9 = (gcnew System::Windows::Forms::Label());
			this->maths_Multi_Q10_Ans = (gcnew System::Windows::Forms::TextBox());
			this->maths_Multi_Q10 = (gcnew System::Windows::Forms::Label());
			this->multiplication_Button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Q1_Wrong = (gcnew System::Windows::Forms::PictureBox());
			this->Q9_Wrong = (gcnew System::Windows::Forms::PictureBox());
			this->Q8_Wrong = (gcnew System::Windows::Forms::PictureBox());
			this->Q7_Wrong = (gcnew System::Windows::Forms::PictureBox());
			this->Q6_Wrong = (gcnew System::Windows::Forms::PictureBox());
			this->Q5_Wrong = (gcnew System::Windows::Forms::PictureBox());
			this->Q4_Wrong = (gcnew System::Windows::Forms::PictureBox());
			this->Q3_Wrong = (gcnew System::Windows::Forms::PictureBox());
			this->Q2_Wrong = (gcnew System::Windows::Forms::PictureBox());
			this->Q10_Wrong = (gcnew System::Windows::Forms::PictureBox());
			this->Q10_Ans_Correct = (gcnew System::Windows::Forms::PictureBox());
			this->Q9_Ans_Correct = (gcnew System::Windows::Forms::PictureBox());
			this->Q8_Ans_Correct = (gcnew System::Windows::Forms::PictureBox());
			this->Q7_Ans_Correct = (gcnew System::Windows::Forms::PictureBox());
			this->Q6_Ans_Correct = (gcnew System::Windows::Forms::PictureBox());
			this->Q5_Ans_Correct = (gcnew System::Windows::Forms::PictureBox());
			this->Q4_Ans_Correct = (gcnew System::Windows::Forms::PictureBox());
			this->Q3_Ans_Correct = (gcnew System::Windows::Forms::PictureBox());
			this->Q2_Ans_Correct = (gcnew System::Windows::Forms::PictureBox());
			this->Q1_Ans_Correct = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q1_Wrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q9_Wrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q8_Wrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q7_Wrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q6_Wrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q5_Wrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q4_Wrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q3_Wrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q2_Wrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q10_Wrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q10_Ans_Correct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q9_Ans_Correct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q8_Ans_Correct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q7_Ans_Correct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q6_Ans_Correct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q5_Ans_Correct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q4_Ans_Correct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q3_Ans_Correct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q2_Ans_Correct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q1_Ans_Correct))->BeginInit();
			this->SuspendLayout();
			// 
			// maths_Multi_Q1
			// 
			this->maths_Multi_Q1->AutoSize = true;
			this->maths_Multi_Q1->Location = System::Drawing::Point(57, 53);
			this->maths_Multi_Q1->Name = L"maths_Multi_Q1";
			this->maths_Multi_Q1->Size = System::Drawing::Size(59, 20);
			this->maths_Multi_Q1->TabIndex = 1;
			this->maths_Multi_Q1->Text = L"4 X 8 =";
			this->maths_Multi_Q1->Visible = false;
			this->maths_Multi_Q1->Click += gcnew System::EventHandler(this, &MyForm::maths_Mult_Q1_Click);
			// 
			// maths_Multi_Q1_Ans
			// 
			this->maths_Multi_Q1_Ans->Location = System::Drawing::Point(132, 50);
			this->maths_Multi_Q1_Ans->Name = L"maths_Multi_Q1_Ans";
			this->maths_Multi_Q1_Ans->Size = System::Drawing::Size(100, 26);
			this->maths_Multi_Q1_Ans->TabIndex = 2;
			this->maths_Multi_Q1_Ans->Visible = false;
			// 
			// maths_Multi_Q2
			// 
			this->maths_Multi_Q2->AutoSize = true;
			this->maths_Multi_Q2->Location = System::Drawing::Point(58, 85);
			this->maths_Multi_Q2->Name = L"maths_Multi_Q2";
			this->maths_Multi_Q2->Size = System::Drawing::Size(68, 20);
			this->maths_Multi_Q2->TabIndex = 3;
			this->maths_Multi_Q2->Text = L"6 X 12 =";
			this->maths_Multi_Q2->Visible = false;
			// 
			// maths_Multi_Q2_Ans
			// 
			this->maths_Multi_Q2_Ans->Location = System::Drawing::Point(132, 82);
			this->maths_Multi_Q2_Ans->Name = L"maths_Multi_Q2_Ans";
			this->maths_Multi_Q2_Ans->Size = System::Drawing::Size(100, 26);
			this->maths_Multi_Q2_Ans->TabIndex = 4;
			this->maths_Multi_Q2_Ans->Visible = false;
			// 
			// maths_Multi_Q3
			// 
			this->maths_Multi_Q3->AutoSize = true;
			this->maths_Multi_Q3->Location = System::Drawing::Point(57, 117);
			this->maths_Multi_Q3->Name = L"maths_Multi_Q3";
			this->maths_Multi_Q3->Size = System::Drawing::Size(59, 20);
			this->maths_Multi_Q3->TabIndex = 5;
			this->maths_Multi_Q3->Text = L"9 X 7 =";
			this->maths_Multi_Q3->Visible = false;
			this->maths_Multi_Q3->Click += gcnew System::EventHandler(this, &MyForm::maths_Multi_Q3_Click);
			// 
			// maths_Multi_Q7
			// 
			this->maths_Multi_Q7->AutoSize = true;
			this->maths_Multi_Q7->Location = System::Drawing::Point(57, 240);
			this->maths_Multi_Q7->Name = L"maths_Multi_Q7";
			this->maths_Multi_Q7->Size = System::Drawing::Size(68, 20);
			this->maths_Multi_Q7->TabIndex = 6;
			this->maths_Multi_Q7->Text = L"7 X 60 =";
			this->maths_Multi_Q7->Visible = false;
			// 
			// maths_Multi_Q8
			// 
			this->maths_Multi_Q8->AutoSize = true;
			this->maths_Multi_Q8->Location = System::Drawing::Point(59, 271);
			this->maths_Multi_Q8->Name = L"maths_Multi_Q8";
			this->maths_Multi_Q8->Size = System::Drawing::Size(68, 20);
			this->maths_Multi_Q8->TabIndex = 7;
			this->maths_Multi_Q8->Text = L"6 X 21 =";
			this->maths_Multi_Q8->Visible = false;
			// 
			// maths_Multi_Q6
			// 
			this->maths_Multi_Q6->AutoSize = true;
			this->maths_Multi_Q6->Location = System::Drawing::Point(57, 208);
			this->maths_Multi_Q6->Name = L"maths_Multi_Q6";
			this->maths_Multi_Q6->Size = System::Drawing::Size(68, 20);
			this->maths_Multi_Q6->TabIndex = 8;
			this->maths_Multi_Q6->Text = L"4 X 16 =";
			this->maths_Multi_Q6->Visible = false;
			// 
			// maths_Multi_Q4
			// 
			this->maths_Multi_Q4->AutoSize = true;
			this->maths_Multi_Q4->Location = System::Drawing::Point(57, 149);
			this->maths_Multi_Q4->Name = L"maths_Multi_Q4";
			this->maths_Multi_Q4->Size = System::Drawing::Size(59, 20);
			this->maths_Multi_Q4->TabIndex = 9;
			this->maths_Multi_Q4->Text = L"6 X 5 =";
			this->maths_Multi_Q4->Visible = false;
			this->maths_Multi_Q4->Click += gcnew System::EventHandler(this, &MyForm::maths_Multi_Q4_Click);
			// 
			// maths_Multi_Q5
			// 
			this->maths_Multi_Q5->AutoSize = true;
			this->maths_Multi_Q5->Location = System::Drawing::Point(57, 179);
			this->maths_Multi_Q5->Name = L"maths_Multi_Q5";
			this->maths_Multi_Q5->Size = System::Drawing::Size(59, 20);
			this->maths_Multi_Q5->TabIndex = 10;
			this->maths_Multi_Q5->Text = L"3 X 2 =";
			this->maths_Multi_Q5->Visible = false;
			// 
			// maths_Multi_Q7_Ans
			// 
			this->maths_Multi_Q7_Ans->Location = System::Drawing::Point(132, 240);
			this->maths_Multi_Q7_Ans->Name = L"maths_Multi_Q7_Ans";
			this->maths_Multi_Q7_Ans->Size = System::Drawing::Size(100, 26);
			this->maths_Multi_Q7_Ans->TabIndex = 11;
			this->maths_Multi_Q7_Ans->Visible = false;
			// 
			// maths_Multi_Q6_Ans
			// 
			this->maths_Multi_Q6_Ans->Location = System::Drawing::Point(132, 208);
			this->maths_Multi_Q6_Ans->Name = L"maths_Multi_Q6_Ans";
			this->maths_Multi_Q6_Ans->Size = System::Drawing::Size(100, 26);
			this->maths_Multi_Q6_Ans->TabIndex = 12;
			this->maths_Multi_Q6_Ans->Visible = false;
			// 
			// maths_Multi_Q5_Ans
			// 
			this->maths_Multi_Q5_Ans->Location = System::Drawing::Point(132, 176);
			this->maths_Multi_Q5_Ans->Name = L"maths_Multi_Q5_Ans";
			this->maths_Multi_Q5_Ans->Size = System::Drawing::Size(100, 26);
			this->maths_Multi_Q5_Ans->TabIndex = 13;
			this->maths_Multi_Q5_Ans->Visible = false;
			// 
			// maths_Multi_Q4_Ans
			// 
			this->maths_Multi_Q4_Ans->Location = System::Drawing::Point(133, 146);
			this->maths_Multi_Q4_Ans->Name = L"maths_Multi_Q4_Ans";
			this->maths_Multi_Q4_Ans->Size = System::Drawing::Size(100, 26);
			this->maths_Multi_Q4_Ans->TabIndex = 14;
			this->maths_Multi_Q4_Ans->Visible = false;
			// 
			// maths_Multi_Q3_Ans
			// 
			this->maths_Multi_Q3_Ans->Location = System::Drawing::Point(133, 114);
			this->maths_Multi_Q3_Ans->Name = L"maths_Multi_Q3_Ans";
			this->maths_Multi_Q3_Ans->Size = System::Drawing::Size(100, 26);
			this->maths_Multi_Q3_Ans->TabIndex = 15;
			this->maths_Multi_Q3_Ans->Visible = false;
			this->maths_Multi_Q3_Ans->TextChanged += gcnew System::EventHandler(this, &MyForm::maths_Multi_Q3_Ans_TextChanged);
			// 
			// maths_Multi_Q8_Ans
			// 
			this->maths_Multi_Q8_Ans->Location = System::Drawing::Point(133, 271);
			this->maths_Multi_Q8_Ans->Name = L"maths_Multi_Q8_Ans";
			this->maths_Multi_Q8_Ans->Size = System::Drawing::Size(100, 26);
			this->maths_Multi_Q8_Ans->TabIndex = 16;
			this->maths_Multi_Q8_Ans->Visible = false;
			this->maths_Multi_Q8_Ans->TextChanged += gcnew System::EventHandler(this, &MyForm::maths_Multi_Q8_Ans_TextChanged);
			// 
			// maths_Multi_Q9_Ans
			// 
			this->maths_Multi_Q9_Ans->Location = System::Drawing::Point(133, 304);
			this->maths_Multi_Q9_Ans->Name = L"maths_Multi_Q9_Ans";
			this->maths_Multi_Q9_Ans->Size = System::Drawing::Size(100, 26);
			this->maths_Multi_Q9_Ans->TabIndex = 18;
			this->maths_Multi_Q9_Ans->Visible = false;
			// 
			// maths_Multi_Q9
			// 
			this->maths_Multi_Q9->AutoSize = true;
			this->maths_Multi_Q9->Location = System::Drawing::Point(48, 304);
			this->maths_Multi_Q9->Name = L"maths_Multi_Q9";
			this->maths_Multi_Q9->Size = System::Drawing::Size(68, 20);
			this->maths_Multi_Q9->TabIndex = 17;
			this->maths_Multi_Q9->Text = L"18 X 2 =";
			this->maths_Multi_Q9->Visible = false;
			// 
			// maths_Multi_Q10_Ans
			// 
			this->maths_Multi_Q10_Ans->Location = System::Drawing::Point(132, 336);
			this->maths_Multi_Q10_Ans->Name = L"maths_Multi_Q10_Ans";
			this->maths_Multi_Q10_Ans->Size = System::Drawing::Size(100, 26);
			this->maths_Multi_Q10_Ans->TabIndex = 20;
			this->maths_Multi_Q10_Ans->Visible = false;
			// 
			// maths_Multi_Q10
			// 
			this->maths_Multi_Q10->AutoSize = true;
			this->maths_Multi_Q10->Location = System::Drawing::Point(57, 336);
			this->maths_Multi_Q10->Name = L"maths_Multi_Q10";
			this->maths_Multi_Q10->Size = System::Drawing::Size(59, 20);
			this->maths_Multi_Q10->TabIndex = 19;
			this->maths_Multi_Q10->Text = L"6 X 8 =";
			this->maths_Multi_Q10->Visible = false;
			// 
			// multiplication_Button
			// 
			this->multiplication_Button->Location = System::Drawing::Point(477, 94);
			this->multiplication_Button->Name = L"multiplication_Button";
			this->multiplication_Button->Size = System::Drawing::Size(353, 249);
			this->multiplication_Button->TabIndex = 21;
			this->multiplication_Button->Text = L"Multiplication";
			this->multiplication_Button->UseVisualStyleBackColor = true;
			this->multiplication_Button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 368);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(243, 113);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Check Answers";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// Q1_Wrong
			// 
			this->Q1_Wrong->BackColor = System::Drawing::Color::Red;
			this->Q1_Wrong->Location = System::Drawing::Point(239, 50);
			this->Q1_Wrong->Name = L"Q1_Wrong";
			this->Q1_Wrong->Size = System::Drawing::Size(100, 23);
			this->Q1_Wrong->TabIndex = 23;
			this->Q1_Wrong->TabStop = false;
			this->Q1_Wrong->Visible = false;
			// 
			// Q9_Wrong
			// 
			this->Q9_Wrong->BackColor = System::Drawing::Color::Red;
			this->Q9_Wrong->Location = System::Drawing::Point(239, 307);
			this->Q9_Wrong->Name = L"Q9_Wrong";
			this->Q9_Wrong->Size = System::Drawing::Size(100, 23);
			this->Q9_Wrong->TabIndex = 24;
			this->Q9_Wrong->TabStop = false;
			this->Q9_Wrong->Visible = false;
			// 
			// Q8_Wrong
			// 
			this->Q8_Wrong->BackColor = System::Drawing::Color::Red;
			this->Q8_Wrong->Location = System::Drawing::Point(239, 277);
			this->Q8_Wrong->Name = L"Q8_Wrong";
			this->Q8_Wrong->Size = System::Drawing::Size(100, 23);
			this->Q8_Wrong->TabIndex = 25;
			this->Q8_Wrong->TabStop = false;
			this->Q8_Wrong->Visible = false;
			// 
			// Q7_Wrong
			// 
			this->Q7_Wrong->BackColor = System::Drawing::Color::Red;
			this->Q7_Wrong->Location = System::Drawing::Point(239, 243);
			this->Q7_Wrong->Name = L"Q7_Wrong";
			this->Q7_Wrong->Size = System::Drawing::Size(100, 23);
			this->Q7_Wrong->TabIndex = 26;
			this->Q7_Wrong->TabStop = false;
			this->Q7_Wrong->Visible = false;
			// 
			// Q6_Wrong
			// 
			this->Q6_Wrong->BackColor = System::Drawing::Color::Red;
			this->Q6_Wrong->Location = System::Drawing::Point(239, 211);
			this->Q6_Wrong->Name = L"Q6_Wrong";
			this->Q6_Wrong->Size = System::Drawing::Size(100, 23);
			this->Q6_Wrong->TabIndex = 27;
			this->Q6_Wrong->TabStop = false;
			this->Q6_Wrong->Visible = false;
			// 
			// Q5_Wrong
			// 
			this->Q5_Wrong->BackColor = System::Drawing::Color::Red;
			this->Q5_Wrong->Location = System::Drawing::Point(239, 179);
			this->Q5_Wrong->Name = L"Q5_Wrong";
			this->Q5_Wrong->Size = System::Drawing::Size(100, 23);
			this->Q5_Wrong->TabIndex = 28;
			this->Q5_Wrong->TabStop = false;
			this->Q5_Wrong->Visible = false;
			// 
			// Q4_Wrong
			// 
			this->Q4_Wrong->BackColor = System::Drawing::Color::Red;
			this->Q4_Wrong->Location = System::Drawing::Point(239, 149);
			this->Q4_Wrong->Name = L"Q4_Wrong";
			this->Q4_Wrong->Size = System::Drawing::Size(100, 23);
			this->Q4_Wrong->TabIndex = 29;
			this->Q4_Wrong->TabStop = false;
			this->Q4_Wrong->Visible = false;
			// 
			// Q3_Wrong
			// 
			this->Q3_Wrong->BackColor = System::Drawing::Color::Red;
			this->Q3_Wrong->Location = System::Drawing::Point(239, 117);
			this->Q3_Wrong->Name = L"Q3_Wrong";
			this->Q3_Wrong->Size = System::Drawing::Size(100, 23);
			this->Q3_Wrong->TabIndex = 30;
			this->Q3_Wrong->TabStop = false;
			this->Q3_Wrong->Visible = false;
			// 
			// Q2_Wrong
			// 
			this->Q2_Wrong->BackColor = System::Drawing::Color::Red;
			this->Q2_Wrong->Location = System::Drawing::Point(239, 85);
			this->Q2_Wrong->Name = L"Q2_Wrong";
			this->Q2_Wrong->Size = System::Drawing::Size(100, 23);
			this->Q2_Wrong->TabIndex = 31;
			this->Q2_Wrong->TabStop = false;
			this->Q2_Wrong->Visible = false;
			// 
			// Q10_Wrong
			// 
			this->Q10_Wrong->BackColor = System::Drawing::Color::Red;
			this->Q10_Wrong->Location = System::Drawing::Point(239, 339);
			this->Q10_Wrong->Name = L"Q10_Wrong";
			this->Q10_Wrong->Size = System::Drawing::Size(100, 23);
			this->Q10_Wrong->TabIndex = 32;
			this->Q10_Wrong->TabStop = false;
			this->Q10_Wrong->Visible = false;
			// 
			// Q10_Ans_Correct
			// 
			this->Q10_Ans_Correct->BackColor = System::Drawing::Color::Lime;
			this->Q10_Ans_Correct->Location = System::Drawing::Point(238, 339);
			this->Q10_Ans_Correct->Name = L"Q10_Ans_Correct";
			this->Q10_Ans_Correct->Size = System::Drawing::Size(97, 23);
			this->Q10_Ans_Correct->TabIndex = 34;
			this->Q10_Ans_Correct->TabStop = false;
			this->Q10_Ans_Correct->Visible = false;
			// 
			// Q9_Ans_Correct
			// 
			this->Q9_Ans_Correct->BackColor = System::Drawing::Color::Lime;
			this->Q9_Ans_Correct->Location = System::Drawing::Point(238, 307);
			this->Q9_Ans_Correct->Name = L"Q9_Ans_Correct";
			this->Q9_Ans_Correct->Size = System::Drawing::Size(97, 23);
			this->Q9_Ans_Correct->TabIndex = 35;
			this->Q9_Ans_Correct->TabStop = false;
			this->Q9_Ans_Correct->Visible = false;
			// 
			// Q8_Ans_Correct
			// 
			this->Q8_Ans_Correct->BackColor = System::Drawing::Color::Lime;
			this->Q8_Ans_Correct->Location = System::Drawing::Point(238, 277);
			this->Q8_Ans_Correct->Name = L"Q8_Ans_Correct";
			this->Q8_Ans_Correct->Size = System::Drawing::Size(97, 23);
			this->Q8_Ans_Correct->TabIndex = 36;
			this->Q8_Ans_Correct->TabStop = false;
			this->Q8_Ans_Correct->Visible = false;
			// 
			// Q7_Ans_Correct
			// 
			this->Q7_Ans_Correct->BackColor = System::Drawing::Color::Lime;
			this->Q7_Ans_Correct->Location = System::Drawing::Point(238, 243);
			this->Q7_Ans_Correct->Name = L"Q7_Ans_Correct";
			this->Q7_Ans_Correct->Size = System::Drawing::Size(97, 23);
			this->Q7_Ans_Correct->TabIndex = 37;
			this->Q7_Ans_Correct->TabStop = false;
			this->Q7_Ans_Correct->Visible = false;
			// 
			// Q6_Ans_Correct
			// 
			this->Q6_Ans_Correct->BackColor = System::Drawing::Color::Lime;
			this->Q6_Ans_Correct->Location = System::Drawing::Point(238, 211);
			this->Q6_Ans_Correct->Name = L"Q6_Ans_Correct";
			this->Q6_Ans_Correct->Size = System::Drawing::Size(97, 23);
			this->Q6_Ans_Correct->TabIndex = 38;
			this->Q6_Ans_Correct->TabStop = false;
			this->Q6_Ans_Correct->Visible = false;
			// 
			// Q5_Ans_Correct
			// 
			this->Q5_Ans_Correct->BackColor = System::Drawing::Color::Lime;
			this->Q5_Ans_Correct->Location = System::Drawing::Point(238, 179);
			this->Q5_Ans_Correct->Name = L"Q5_Ans_Correct";
			this->Q5_Ans_Correct->Size = System::Drawing::Size(97, 23);
			this->Q5_Ans_Correct->TabIndex = 39;
			this->Q5_Ans_Correct->TabStop = false;
			this->Q5_Ans_Correct->Visible = false;
			// 
			// Q4_Ans_Correct
			// 
			this->Q4_Ans_Correct->BackColor = System::Drawing::Color::Lime;
			this->Q4_Ans_Correct->Location = System::Drawing::Point(239, 149);
			this->Q4_Ans_Correct->Name = L"Q4_Ans_Correct";
			this->Q4_Ans_Correct->Size = System::Drawing::Size(97, 23);
			this->Q4_Ans_Correct->TabIndex = 40;
			this->Q4_Ans_Correct->TabStop = false;
			this->Q4_Ans_Correct->Visible = false;
			// 
			// Q3_Ans_Correct
			// 
			this->Q3_Ans_Correct->BackColor = System::Drawing::Color::Lime;
			this->Q3_Ans_Correct->Location = System::Drawing::Point(239, 117);
			this->Q3_Ans_Correct->Name = L"Q3_Ans_Correct";
			this->Q3_Ans_Correct->Size = System::Drawing::Size(97, 23);
			this->Q3_Ans_Correct->TabIndex = 41;
			this->Q3_Ans_Correct->TabStop = false;
			this->Q3_Ans_Correct->Visible = false;
			// 
			// Q2_Ans_Correct
			// 
			this->Q2_Ans_Correct->BackColor = System::Drawing::Color::Lime;
			this->Q2_Ans_Correct->Location = System::Drawing::Point(238, 85);
			this->Q2_Ans_Correct->Name = L"Q2_Ans_Correct";
			this->Q2_Ans_Correct->Size = System::Drawing::Size(97, 23);
			this->Q2_Ans_Correct->TabIndex = 42;
			this->Q2_Ans_Correct->TabStop = false;
			this->Q2_Ans_Correct->Visible = false;
			// 
			// Q1_Ans_Correct
			// 
			this->Q1_Ans_Correct->BackColor = System::Drawing::Color::Lime;
			this->Q1_Ans_Correct->Location = System::Drawing::Point(239, 50);
			this->Q1_Ans_Correct->Name = L"Q1_Ans_Correct";
			this->Q1_Ans_Correct->Size = System::Drawing::Size(97, 23);
			this->Q1_Ans_Correct->TabIndex = 43;
			this->Q1_Ans_Correct->TabStop = false;
			this->Q1_Ans_Correct->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(968, 518);
			this->Controls->Add(this->Q1_Ans_Correct);
			this->Controls->Add(this->Q2_Ans_Correct);
			this->Controls->Add(this->Q3_Ans_Correct);
			this->Controls->Add(this->Q4_Ans_Correct);
			this->Controls->Add(this->Q5_Ans_Correct);
			this->Controls->Add(this->Q6_Ans_Correct);
			this->Controls->Add(this->Q7_Ans_Correct);
			this->Controls->Add(this->Q8_Ans_Correct);
			this->Controls->Add(this->Q9_Ans_Correct);
			this->Controls->Add(this->Q10_Ans_Correct);
			this->Controls->Add(this->Q10_Wrong);
			this->Controls->Add(this->Q2_Wrong);
			this->Controls->Add(this->Q3_Wrong);
			this->Controls->Add(this->Q4_Wrong);
			this->Controls->Add(this->Q5_Wrong);
			this->Controls->Add(this->Q6_Wrong);
			this->Controls->Add(this->Q7_Wrong);
			this->Controls->Add(this->Q8_Wrong);
			this->Controls->Add(this->Q9_Wrong);
			this->Controls->Add(this->Q1_Wrong);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->multiplication_Button);
			this->Controls->Add(this->maths_Multi_Q10_Ans);
			this->Controls->Add(this->maths_Multi_Q10);
			this->Controls->Add(this->maths_Multi_Q9_Ans);
			this->Controls->Add(this->maths_Multi_Q9);
			this->Controls->Add(this->maths_Multi_Q8_Ans);
			this->Controls->Add(this->maths_Multi_Q3_Ans);
			this->Controls->Add(this->maths_Multi_Q4_Ans);
			this->Controls->Add(this->maths_Multi_Q5_Ans);
			this->Controls->Add(this->maths_Multi_Q6_Ans);
			this->Controls->Add(this->maths_Multi_Q7_Ans);
			this->Controls->Add(this->maths_Multi_Q5);
			this->Controls->Add(this->maths_Multi_Q4);
			this->Controls->Add(this->maths_Multi_Q6);
			this->Controls->Add(this->maths_Multi_Q8);
			this->Controls->Add(this->maths_Multi_Q7);
			this->Controls->Add(this->maths_Multi_Q3);
			this->Controls->Add(this->maths_Multi_Q2_Ans);
			this->Controls->Add(this->maths_Multi_Q2);
			this->Controls->Add(this->maths_Multi_Q1_Ans);
			this->Controls->Add(this->maths_Multi_Q1);
			this->Name = L"MyForm";
			this->Text = L"EQA";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q1_Wrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q9_Wrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q8_Wrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q7_Wrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q6_Wrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q5_Wrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q4_Wrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q3_Wrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q2_Wrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q10_Wrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q10_Ans_Correct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q9_Ans_Correct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q8_Ans_Correct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q7_Ans_Correct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q6_Ans_Correct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q5_Ans_Correct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q4_Ans_Correct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q3_Ans_Correct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q2_Ans_Correct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q1_Ans_Correct))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void multiplication_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->maths_Multi_Q1_Ans->Visible = true;
		this->multiplication_Button->Visible = true;
		this->maths_Multi_Q2_Ans->Visible = true;
		this->maths_Multi_Q3_Ans->Visible = true;
		this->maths_Multi_Q4_Ans->Visible = true;
		this->maths_Multi_Q5_Ans->Visible = true;
		this->maths_Multi_Q6_Ans->Visible = true;
		this->maths_Multi_Q7_Ans->Visible = true;
		this->maths_Multi_Q8_Ans->Visible = true;
		this->maths_Multi_Q9_Ans->Visible = true;
		this->maths_Multi_Q10_Ans->Visible = true;
		this->maths_Multi_Q1->Visible = true;
		this->maths_Multi_Q2->Visible = true;
		this->maths_Multi_Q3->Visible = true;
		this->maths_Multi_Q4->Visible = true;
		this->maths_Multi_Q5->Visible = true;
		this->maths_Multi_Q6->Visible = true;
		this->maths_Multi_Q7->Visible = true;
		this->maths_Multi_Q8->Visible = true;
		this->maths_Multi_Q9->Visible = true;
		this->maths_Multi_Q10->Visible = true;
	}
private: System::Void maths_Mult_Q1_Click(System::Object^ sender, System::EventArgs^ e) {	
}
private: System::Void maths_Multi_Q1_Ans_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maths_Multi_Q3_Ans_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maths_Multi_Q8_Ans_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maths_Multi_Q3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maths_Multi_Q4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->maths_Multi_Q1->Visible = true;
	this->maths_Multi_Q2->Visible = true;
	this->maths_Multi_Q3->Visible = true;
	this->maths_Multi_Q4->Visible = true;
	this->maths_Multi_Q5->Visible = true;
	this->maths_Multi_Q6->Visible = true;
	this->maths_Multi_Q7->Visible = true;
	this->maths_Multi_Q8->Visible = true;
	this->maths_Multi_Q9->Visible = true;
	this->maths_Multi_Q10->Visible = true;
	this->multiplication_Button->Visible = false;
	this->maths_Multi_Q1_Ans->Visible = true;
	this->maths_Multi_Q2_Ans->Visible = true;
	this->maths_Multi_Q3_Ans->Visible = true;
	this->maths_Multi_Q4_Ans->Visible = true;
	this->maths_Multi_Q5_Ans->Visible = true;
	this->maths_Multi_Q6_Ans->Visible = true;
	this->maths_Multi_Q7_Ans->Visible = true;
	this->maths_Multi_Q8_Ans->Visible = true;
	this->maths_Multi_Q9_Ans->Visible = true;
	this->maths_Multi_Q10_Ans->Visible = true;
	this->button1->Visible = true;
	this->Q2_Ans_Correct->Visible = false;
	this->Q3_Ans_Correct->Visible = false;
	this->Q4_Ans_Correct->Visible = false;
	this->Q5_Ans_Correct->Visible = false;
	this->Q6_Ans_Correct->Visible = false;
	this->Q7_Ans_Correct->Visible = false;
	this->Q8_Ans_Correct->Visible = false;
	this->Q9_Ans_Correct->Visible = false;
	this->Q10_Ans_Correct->Visible = false;;
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	if (this->maths_Multi_Q1_Ans->Text == "32")
		(this->maths_Multi_Q2_Ans->Text == "72");
	{
		this->Q1_Ans_Correct->Visible = true;
		this->Q1_Wrong->Visible = false;
		this->Q2_Ans_Correct->Visible = true;

	}
	if (this->maths_Multi_Q3_Ans->Text == "72");
	{

		this->Q3_Ans_Correct->Visible = true;
		this->Q3_Ans_

	{
	else
	
		this->Q1_Wrong->Visible = true;
		this->Q1_Ans_Correct->Visible = false;
		this->Q2_Ans_Correct->Visible = false;
		

	}
}

};
}
