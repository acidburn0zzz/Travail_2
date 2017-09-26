#include "TControleurPart2.h"
TControleurPart2::TControleurPart2()
{
	mFiles = gcnew array<String^>(10);

	/* Images utilisées dans le jeu */
	mFiles[0] = "aguero.jpg";
	mFiles[1] = "bale.jpg";
	mFiles[2] = "ibrahimovic.jpg";
	mFiles[3] = "iniesta.jpg";
	mFiles[4] = "messi.jpg";
	mFiles[5] = "neuer.jpg";
	mFiles[6] = "neymar.jpg";
	mFiles[7] = "robben.jpg";
	mFiles[8] = "ronaldo.jpg";
	mFiles[9] = "suarez.jpg";

	mPicBoxes = gcnew array<PictureBox^>(10);
	mScreens = gcnew array<TDynamicImage^>(10);
	mMaster = gcnew TDynamicImage();

	for (int i = 0; i < 10; i++)
	{
		mScreens[i] = gcnew TDynamicImage();
		randomize(i);
	}
}

TControleurPart2::~TControleurPart2()
{
}

TDynamicImage^ TControleurPart2::GetController(int _i)
{
	return mScreens[_i];
}

TDynamicImage^ TControleurPart2::GetMaster()
{
	return mMaster;
}

void TControleurPart2::StartAll()
{
	for (int i = 0; i < 10; i++)
	{
		int s, h = 0;

		s = rand() % 10;
		h = rand() % 10;

		while (s < 3)
		{
			s = rand() % 10;
		}

		while (h < 1)
		{
			h = rand() % 10;
		}

		mScreens[i]->Start(s,h);
	}

	int s, h = 0;

	while (s < 3)
		s = rand() % 10;

	while (h < 1)
		h = rand() % 10;

	mMaster->Start(s, h);
}

void TControleurPart2::randomize(int _index)
{
	int i = rand() % 10;

	mScreens[_index]->TimeEngine->NomFichier = mFiles[i];
}

void TControleurPart2::randomizeMaster()
{
	int i = rand() % 10;
	
	mMaster->TimeEngine->NomFichier = mFiles[i];
}

void TControleurPart2::StopAll()
{
	for (int i = 0; i < 10; i++)
	{
		mScreens[i]->TimeEngine->StopTimers();
	}
}

void TControleurPart2::Correct(int i)
{
	mScreens[i]->TimeEngine->StopAffichageTimer();
	mPoints++;
}

bool TControleurPart2::Verify(int i)
{
	return (mScreens[i]->TimeEngine->NomFichier == mMaster->TimeEngine->NomFichier);
}