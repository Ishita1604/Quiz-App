//---------------------------------------------------------------------------

#ifndef LevelWindowH
#define LevelWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class TLevelForm : public TForm
{
__published:	// IDE-managed Components
	TButton *LevelBackButton;
	TLabel *LevelLabel;
	TButton *MediumButton;
	TButton *EasyButton;
	TButton *HardButton;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	void __fastcall EasyButtonClick(TObject *Sender);
	void __fastcall LevelBackButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLevelForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLevelForm *LevelForm;
//---------------------------------------------------------------------------
#endif
