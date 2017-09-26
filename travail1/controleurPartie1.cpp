#include "controleurPartie1.h"

using namespace System::Drawing;
using namespace System::Windows::Forms;

TControleurPartie1::TControleurPartie1()
{
	mTimeEngine = gcnew TImageJeu();
	running = false;
	srand((unsigned)time(NULL));
}

void TControleurPartie1::Start(int inShowTime, int inHideTime)
{
	if (!running)
	{
		mTimeEngine->TempsAffichage = inShowTime;
		mTimeEngine->TempsRepos = inHideTime;

		mTimeEngine->FinAffiche += gcnew System::EventHandler(this, &TControleurPartie1::hide);
		mTimeEngine->FinDisparait += gcnew System::EventHandler(this, &TControleurPartie1::show);

		mTimeEngine->StartAffichageTimer();

		running = true;
	}
	else
	{
		mTimeEngine->StopTimers();

		running = false;
	}
}

void TControleurPartie1::show(System::Object^  sender, System::EventArgs^  e)
{
	if (running)
		mTimeEngine->StartAffichageTimer();
}

void TControleurPartie1::hide(System::Object^  sender, System::EventArgs^  e)
{
	if (running)
		mTimeEngine->StartReposTimer();
}