#ifndef controleur1H
#define controleur1H
#include <stdlib.h>
#include <time.h>
#include "imageJeu.h"

using namespace System::Windows::Forms;

ref class TControleurPartie1
{
private:
	TImageJeu^ mTimeEngine;

	void hide(System::Object^  sender, System::EventArgs^  e);
	void show(System::Object^  sender, System::EventArgs^  e);

	bool running;

public:

	/* methods */
	TControleurPartie1();
	void Start(int, int);

	/* proprietes */
	property TImageJeu^ TimeEngine
	{
		TImageJeu^ get()
		{
			return mTimeEngine;
		}
	}

};

#endif

