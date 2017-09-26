#ifndef ControleurPart2
#define ControleurPart2
#include <stdlib.h>
#include <time.h>
#include "TDynamicImage.h";

ref class TControleurPart2
{
private:
	array<TDynamicImage^>^ mScreens;
	TDynamicImage^ mMaster;

	array<String^>^ mFiles;
	int mPoints;

public:
	TControleurPart2();
	~TControleurPart2();

	TDynamicImage^ GetController(int);
	TDynamicImage^ GetMaster();
	
	void StartAll();
	void StopAll();

	void Correct(int);

	void randomize(int);
	void randomizeMaster();

	bool Verify(int);

	property int Points
	{
		int get()
		{
			return mPoints;
		}
	}
};

#endif