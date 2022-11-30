//---------------------------------------------------------------------------

#ifndef InstructionsWindowH
#define InstructionsWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class TInstructionsForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *RuleLabel1;
	TLabel *RuleLabel2;
	TLabel *RuleLabel3;
	TButton *RuleBackButton;
	TLabel *InstructionsLabel;
	TImage *Image2;
	TImage *Image3;
	TImage *Image1;
	TImage *Image4;
	void __fastcall RuleBackButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TInstructionsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TInstructionsForm *InstructionsForm;
//---------------------------------------------------------------------------
#endif
