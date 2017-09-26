#ifndef DynamicImage
#define DynamicImage

using namespace System;
using namespace System::Windows::Forms;

#include "imageJeu.h"

ref class TDynamicImage
{
protected:
	TImageJeu^ mTimeEngine;

	bool running;

	void hide(System::Object^  sender, System::EventArgs^  e);
	void show(System::Object^  sender, System::EventArgs^  e);

public:
	TDynamicImage();
	~TDynamicImage();

	void Start(int, int);

	property TImageJeu^ TimeEngine
	{
		TImageJeu^ get()
		{
			return mTimeEngine;
		}
	}
};

#endif