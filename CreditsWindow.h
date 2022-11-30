//---------------------------------------------------------------------------

#ifndef CreditsWindowH
#define CreditsWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TCreditsForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *CreditsLabel;
	TButton *CreditsBackButton;
	void __fastcall CreditsBackButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCreditsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCreditsForm *CreditsForm;
//---------------------------------------------------------------------------
#endif
