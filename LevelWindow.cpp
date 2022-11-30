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
TLevelForm *LevelForm;
//---------------------------------------------------------------------------
__fastcall TLevelForm::TLevelForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TLevelForm::EasyButtonClick(TObject *Sender)
{
    LevelForm->Close();
	PlayForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TLevelForm::LevelBackButtonClick(TObject *Sender)
{
	LevelForm->Close();
    WelcomeForm->Show();
}
//---------------------------------------------------------------------------

