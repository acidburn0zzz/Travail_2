#include "TDynamicImage.h"

#include <stdlib.h>  
#include <stdio.h>  
#include <time.h> 

TDynamicImage::TDynamicImage()
{
	mTimeEngine = gcnew TImageJeu();
	running = false;
}

TDynamicImage::~TDynamicImage()
{
}

void TDynamicImage::Start(int inShowTime, int inHideTime)
{
	if (!running)
	{
		mTimeEngine->TempsAffichage = inShowTime;
		mTimeEngine->TempsRepos = inHideTime;

		mTimeEngine->FinAffiche += gcnew System::EventHandler(this, &TDynamicImage::hide);
		mTimeEngine->FinDisparait += gcnew System::EventHandler(this, &TDynamicImage::show);

		mTimeEngine->StartAffichageTimer();

		running = true;
	}
	else
	{
		mTimeEngine->StopTimers();

		running = false;
	}
}

void TDynamicImage::show(System::Object^  sender, System::EventArgs^  e)
{
	if (running)
	{
		mTimeEngine->StartAffichageTimer();
	}
}

void TDynamicImage::hide(System::Object^  sender, System::EventArgs^  e)
{
	if (running)
	{
		mTimeEngine->StartReposTimer();
	}
}