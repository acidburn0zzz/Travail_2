#ifndef imageH
#define imageH
using namespace System;

ref class TImageJeu
{
protected:
	/* attributs */
	String^ mNomFichier;  //nom du fichier contenant l'image à afficher
	int mTempsAffichage;  //en secondes
	int mTempsRepos;	  //en secondes

	System::Windows::Forms::Timer^ mTimerRepos;
	System::Windows::Forms::Timer^ mTimerAffichage;

	/* methodes */
	void TimerRepos_Tick(System::Object^  sender, System::EventArgs^  e);
	void TimerAffichage_Tick(System::Object^  sender, System::EventArgs^  e);

public:
	/* methodes */
	TImageJeu();
	~TImageJeu();

	void StartReposTimer();
	void StartAffichageTimer();

	void StopAffichageTimer();
	void StopReposTimer();

	void StopTimers();

	/* proprietes */
	property int TempsAffichage
	{
		int get()
		{
			return mTempsAffichage;
		}

		void set(int inDisplayTime)
		{
			mTempsAffichage = inDisplayTime;
		}
	}

	property int TempsRepos
	{
		int get()
		{
			return mTempsRepos;
		}

		void set(int inRestTime)
		{
			mTempsRepos = inRestTime;
		}
	}

	property String^ NomFichier
	{
		String^ get()
		{
			return mNomFichier;
		}

		void set(String^ inFileName)
		{
			mNomFichier = inFileName;
		}
	}

	/* evenements */
	event EventHandler^ Affiche;
	event EventHandler^ Disparait;

	event EventHandler^ FinAffiche;
	event EventHandler^ FinDisparait;
};

#endif
