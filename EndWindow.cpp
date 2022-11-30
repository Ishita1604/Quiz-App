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

TEndForm *EndForm;
//---------------------------------------------------------------------------
__fastcall TEndForm::TEndForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TEndForm::ExitGameButtonClick(TObject *Sender)
{
    exit(1);
}
//---------------------------------------------------------------------------

void __fastcall TEndForm::PlayAgainButtonClick(TObject *Sender)
{
    EndForm->Close();
	WelcomeForm->Show();
}
//---------------------------------------------------------------------------



