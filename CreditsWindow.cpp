//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "WelcomeWindow.h"
#include "PlayWindow.h"
#include "LevelWindow.h"
#include "InstructionsWindow.h"
#include "CreditsWindow.h"
#include "EndWindow.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TCreditsForm *CreditsForm;
//---------------------------------------------------------------------------
__fastcall TCreditsForm::TCreditsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCreditsForm::CreditsBackButtonClick(TObject *Sender)
{
	CreditsForm->Close();
	WelcomeForm->Show();
}
//---------------------------------------------------------------------------

