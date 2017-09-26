#pragma once
//#include "controleurPartie1.h"
#include "TControleurPart2.h";

namespace travail1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		public:
			MyForm(void)
			{
				InitializeComponent();
				//
				//TODO: ajoutez ici le code du constructeur
				//
			}

		protected:
			/// <summary>
			/// Nettoyage des ressources utilisées.
			/// </summary>
			~MyForm()
			{
				if (components)
				{
					delete components;
				}
			}

		private:
			/// <summary>
			/// Variable nécessaire au concepteur.
			/// </summary>

			//TControleurPartie1 leJeu;
			TControleurPart2 GameController;
			array<PictureBox^>^ pics;

	#pragma region Pictureboxes

			System::ComponentModel::Container ^components;
			private: System::Windows::Forms::Button^  btnDebuter;
			private: System::Windows::Forms::PictureBox^  pictureBox1;
			private: System::Windows::Forms::PictureBox^  pictureBox2;
			private: System::Windows::Forms::PictureBox^  pictureBox3;
			private: System::Windows::Forms::PictureBox^  pictureBox4;
			private: System::Windows::Forms::PictureBox^  pictureBox5;
			private: System::Windows::Forms::PictureBox^  pictureBox6;
			private: System::Windows::Forms::PictureBox^  pictureBox7;
			private: System::Windows::Forms::PictureBox^  pictureBox8;
			private: System::Windows::Forms::PictureBox^  pictureBox9;
			private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Label^  lbl_points;
	private: System::Windows::Forms::PictureBox^  pictureImage;
	#pragma endregion

	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
			/// le contenu de cette méthode avec l'éditeur de code.
			/// </summary>
			void InitializeComponent(void)
			{
				this->btnDebuter = (gcnew System::Windows::Forms::Button());
				this->pictureImage = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
				this->lbl_points = (gcnew System::Windows::Forms::Label());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureImage))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
				this->SuspendLayout();
				// 
				// btnDebuter
				// 
				this->btnDebuter->Location = System::Drawing::Point(101, 179);
				this->btnDebuter->Name = L"btnDebuter";
				this->btnDebuter->Size = System::Drawing::Size(126, 37);
				this->btnDebuter->TabIndex = 3;
				this->btnDebuter->Text = L"Débuter clignotement";
				this->btnDebuter->UseVisualStyleBackColor = true;
				this->btnDebuter->Click += gcnew System::EventHandler(this, &MyForm::btnDebuter_Click);
				// 
				// pictureImage
				// 
				this->pictureImage->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->pictureImage->Location = System::Drawing::Point(101, 26);
				this->pictureImage->Name = L"pictureImage";
				this->pictureImage->Size = System::Drawing::Size(126, 118);
				this->pictureImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureImage->TabIndex = 4;
				this->pictureImage->TabStop = false;
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->pictureBox1->Location = System::Drawing::Point(290, 26);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(96, 85);
				this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox1->TabIndex = 5;
				this->pictureBox1->TabStop = false;
				this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pbxClick);
				// 
				// pictureBox2
				// 
				this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->pictureBox2->Location = System::Drawing::Point(392, 26);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(96, 85);
				this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox2->TabIndex = 6;
				this->pictureBox2->TabStop = false;
				this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pbxClick);
				// 
				// pictureBox3
				// 
				this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->pictureBox3->Location = System::Drawing::Point(494, 26);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(96, 85);
				this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox3->TabIndex = 7;
				this->pictureBox3->TabStop = false;
				this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pbxClick);
				// 
				// pictureBox4
				// 
				this->pictureBox4->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->pictureBox4->Location = System::Drawing::Point(596, 26);
				this->pictureBox4->Name = L"pictureBox4";
				this->pictureBox4->Size = System::Drawing::Size(96, 85);
				this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox4->TabIndex = 8;
				this->pictureBox4->TabStop = false;
				this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pbxClick);
				// 
				// pictureBox5
				// 
				this->pictureBox5->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->pictureBox5->Location = System::Drawing::Point(290, 117);
				this->pictureBox5->Name = L"pictureBox5";
				this->pictureBox5->Size = System::Drawing::Size(96, 85);
				this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox5->TabIndex = 12;
				this->pictureBox5->TabStop = false;
				this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pbxClick);
				// 
				// pictureBox6
				// 
				this->pictureBox6->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->pictureBox6->Location = System::Drawing::Point(392, 117);
				this->pictureBox6->Name = L"pictureBox6";
				this->pictureBox6->Size = System::Drawing::Size(96, 85);
				this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox6->TabIndex = 11;
				this->pictureBox6->TabStop = false;
				this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pbxClick);
				// 
				// pictureBox7
				// 
				this->pictureBox7->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->pictureBox7->Location = System::Drawing::Point(494, 117);
				this->pictureBox7->Name = L"pictureBox7";
				this->pictureBox7->Size = System::Drawing::Size(96, 85);
				this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox7->TabIndex = 10;
				this->pictureBox7->TabStop = false;
				this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pbxClick);
				// 
				// pictureBox8
				// 
				this->pictureBox8->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->pictureBox8->Location = System::Drawing::Point(596, 117);
				this->pictureBox8->Name = L"pictureBox8";
				this->pictureBox8->Size = System::Drawing::Size(96, 85);
				this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox8->TabIndex = 9;
				this->pictureBox8->TabStop = false;
				this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pbxClick);
				// 
				// pictureBox9
				// 
				this->pictureBox9->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->pictureBox9->Location = System::Drawing::Point(392, 208);
				this->pictureBox9->Name = L"pictureBox9";
				this->pictureBox9->Size = System::Drawing::Size(96, 85);
				this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox9->TabIndex = 14;
				this->pictureBox9->TabStop = false;
				this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pbxClick);
				// 
				// pictureBox10
				// 
				this->pictureBox10->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->pictureBox10->Location = System::Drawing::Point(494, 208);
				this->pictureBox10->Name = L"pictureBox10";
				this->pictureBox10->Size = System::Drawing::Size(96, 85);
				this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox10->TabIndex = 13;
				this->pictureBox10->TabStop = false;
				this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pbxClick);
				// 
				// lbl_points
				// 
				this->lbl_points->AutoSize = true;
				this->lbl_points->Location = System::Drawing::Point(101, 279);
				this->lbl_points->Name = L"lbl_points";
				this->lbl_points->Size = System::Drawing::Size(30, 13);
				this->lbl_points->TabIndex = 15;
				this->lbl_points->Text = L"0 pts";
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(700, 310);
				this->Controls->Add(this->lbl_points);
				this->Controls->Add(this->pictureBox9);
				this->Controls->Add(this->pictureBox10);
				this->Controls->Add(this->pictureBox5);
				this->Controls->Add(this->pictureBox6);
				this->Controls->Add(this->pictureBox7);
				this->Controls->Add(this->pictureBox8);
				this->Controls->Add(this->pictureBox4);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->pictureBox2);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->pictureImage);
				this->Controls->Add(this->btnDebuter);
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureImage))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
		private:
			System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

				Init();				
				Attach();
			}

			void Init()
			{
				pics = gcnew array<PictureBox^>(10);

				pics[0] = pictureBox1;
				pics[1] = pictureBox2;
				pics[2] = pictureBox3;
				pics[3] = pictureBox4;
				pics[4] = pictureBox5;
				pics[5] = pictureBox6;
				pics[6] = pictureBox7;
				pics[7] = pictureBox8;
				pics[8] = pictureBox9;
				pics[9] = pictureBox10;

				int i = 0;

				for each (PictureBox^ p in pics)
				{
					p->Image = Image::FromFile("images\\" + GameController.GetController(i)->TimeEngine->NomFichier);
					i++;
				}
			}

			int FindPic(PictureBox^ pic)
			{
				int i = 0;
				for each (PictureBox^ p in pics)
				{
					if (pic == p)
						return i;
					i++;
				}
			}

			void Attach()
			{
				for (int i = 0; i < 10; i++)
				{
					GameController.GetController(i)->TimeEngine->Affiche += gcnew System::EventHandler(this, &MyForm::Display);
					GameController.GetController(i)->TimeEngine->Disparait += gcnew System::EventHandler(this, &MyForm::Hide);
				}

				GameController.GetMaster()->TimeEngine->Affiche += gcnew System::EventHandler(this, &MyForm::DisplayMaster);
				GameController.GetMaster()->TimeEngine->Affiche += gcnew System::EventHandler(this, &MyForm::DisplayMaster);
			}

			void Display(System::Object^  sender, System::EventArgs^  e)
			{
				TImageJeu^ t = (TImageJeu^)sender;

				for (int i = 0; i < 10; i++)
				{
					if (GameController.GetController(i)->TimeEngine == t)
						pics[i]->Show();
				}
			}

			void Hide(System::Object^  sender, System::EventArgs^  e)
			{				
				TImageJeu^ t = (TImageJeu^)sender;

				for (int i = 0; i < 10; i++)
				{
					if (GameController.GetController(i)->TimeEngine == t)
					{
						pics[i]->Hide();
						GameController.randomize(i);
						pics[i]->Image = Image::FromFile("images\\" + t->NomFichier);
					}
				}
			}

			void DisplayMaster(System::Object^  sender, System::EventArgs^  e)
			{
				GameController.randomizeMaster();
				pictureImage->Image = Image::FromFile("images\\" + GameController.GetMaster()->TimeEngine->NomFichier);
			}

			private: System::Void btnDebuter_Click(System::Object^  sender, System::EventArgs^  e) {
				GameController.StartAll();
			}

			private: System::Void pbxClick(System::Object^  sender, System::EventArgs^  e)
			{
				int pIndex = FindPic((PictureBox^)sender);

				if (GameController.Verify(pIndex))
				{
					GameController.Correct(pIndex);
					lbl_points->Text = GameController.Points.ToString() + " pts";
				}
			}
	};
}
