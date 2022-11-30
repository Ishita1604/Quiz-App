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
TWelcomeForm *WelcomeForm;
//---------------------------------------------------------------------------
__fastcall TWelcomeForm::TWelcomeForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TWelcomeForm::PlayButtonClick(TObject *Sender)
{
	WelcomeForm->Visible = false;
	LevelForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TWelcomeForm::InstructionsButtonClick(TObject *Sender)
{
	WelcomeForm->Visible = false;
	InstructionsForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TWelcomeForm::ExitButtonClick(TObject *Sender)
{
	WelcomeForm->Close();
}
//---------------------------------------------------------------------------
void __fastcall TWelcomeForm::CreditButtonClick(TObject *Sender)
{
	WelcomeForm->Visible = false;
	CreditsForm->Show();
}
//---------------------------------------------------------------------------

