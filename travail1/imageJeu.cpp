#include "imageJeu.h"

//---------------------------------------------------------------------------
TImageJeu::TImageJeu()
{
	mNomFichier = "";
	mTempsRepos = 0;
	mTempsAffichage = 0;
	mTimerAffichage = gcnew System::Windows::Forms::Timer();	
	mTimerAffichage->Enabled = false;
	mTimerAffichage->Tick += gcnew System::EventHandler(this, &TImageJeu::TimerAffichage_Tick);

	mTimerRepos = gcnew System::Windows::Forms::Timer();
	mTimerRepos->Enabled = false;
	mTimerRepos->Tick += gcnew System::EventHandler(this, &TImageJeu::TimerRepos_Tick);
}

TImageJeu::~TImageJeu()
{
}

void TImageJeu::TimerAffichage_Tick(System::Object^  sender, System::EventArgs^  e)
{
	// mTimerAffichage->Stop();
	StopAffichageTimer();

	//StartReposTimer();
}

void TImageJeu::TimerRepos_Tick(System::Object^  sender, System::EventArgs^  e)
{
	// mTimerRepos->Stop();
	StopReposTimer();

	//StartAffichageTimer();
}

void TImageJeu::StartAffichageTimer()
{
	mTimerAffichage->Enabled = true;
	mTimerAffichage->Interval = mTempsAffichage * 1000;
	mTimerAffichage->Start();

	Affiche(this, gcnew EventArgs());
}

void TImageJeu::StartReposTimer()
{
	mTimerRepos->Enabled = true;
	mTimerRepos->Interval = mTempsRepos * 1000;
	mTimerRepos->Start();

	Disparait(this, gcnew EventArgs());
}

void TImageJeu::StopAffichageTimer()
{
	mTimerAffichage->Stop();

	FinAffiche(this, gcnew EventArgs());
}

void TImageJeu::StopReposTimer()
{
	mTimerRepos->Stop();

	FinDisparait(this, gcnew EventArgs());
}

void TImageJeu::StopTimers()
{
	StopAffichageTimer();
	StopReposTimer();
}