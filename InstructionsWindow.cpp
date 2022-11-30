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
TInstructionsForm *InstructionsForm;
//---------------------------------------------------------------------------
__fastcall TInstructionsForm::TInstructionsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TInstructionsForm::RuleBackButtonClick(TObject *Sender)
{
	InstructionsForm->Close();
	WelcomeForm->Show();
}
//---------------------------------------------------------------------------
