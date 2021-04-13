#pragma once
#include "Shelb.h"
#include "Podz.h"
#include "Prav.h"
#include "Lev.h"
#include "Tugarin.h"
#include <cstdlib>




namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	Shelb shelb = Shelb(100, 300);
	Podz podz = Podz(430, 300);
	Prav prav = Prav(360, 280);
	Lev lev = Lev(200, 300);
	Tugarin tugarin = Tugarin(260, 120);
	public ref class Form1 : public System::Windows::Forms::Form
	{
		Image^ bgImage;
		Image^ iLev;
		Image^ iPrav;
		Image^ iTugarin;
		Image^ iPodz;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
		   Image^ iShelb;

		
	public:
		Form1(void)
		{
			InitializeComponent();
			bgImage = Image::FromFile("Image//bgImage.JPG");
			iLev = Image::FromFile("Image//lev.PNG");
			iPrav = Image::FromFile("Image//prav.PNG");
			iTugarin = Image::FromFile("Image//tugarin.JPG");
			iShelb = Image::FromFile("Image//shel.PNG");
			iPodz = Image::FromFile("Image//podz.PNG");
			timer2->Interval = 10;
			timer2->Start();
			Invalidate();
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 488);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ graphics = e->Graphics;
		graphics->DrawImage(bgImage, 0, 0, bgImage->Width, bgImage->Height);
		graphics->DrawImage(iTugarin, tugarin.X(), tugarin.Y(), tugarin.SpriteSizeX(), tugarin.SpriteSizeY());
		graphics->DrawImage(iLev, lev.X(), lev.Y(), lev.SpriteSizeX(), lev.SpriteSizeY());
		graphics->DrawImage(iPrav, prav.X(), prav.Y(), prav.SpriteSizeX(), prav.SpriteSizeY());
		graphics->DrawImage(iShelb, shelb.X(), shelb.Y(), shelb.SpriteSizeX(), shelb.SpriteSizeY());
		graphics->DrawImage(iPodz, podz.X(), podz.Y(), podz.SpriteSizeX(), podz.SpriteSizeY());
	}
	private: System::Void Form1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue ==81 )
		{
			shelb.DooDamage(tugarin, -120, -5);
		}
		if (e->KeyValue == 87)
		{
			lev.levoe();
			lev.DoDaamage(tugarin, -120, -5);
		}
		if (e->KeyValue == 69)
		{
			prav.DoDamage(tugarin, 120, -5);
		}
		if (e->KeyValue == 82)
		{
			podz.DooDaamage(tugarin, 120, -5);
		}
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		tugarin.Move();
		Invalidate();
	}
};
}
