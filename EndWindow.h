//---------------------------------------------------------------------------

#ifndef EndWindowH
#define EndWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class TEndForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *GameOverLabel;
	TButton *PlayAgainButton;
	TButton *ExitGameButton;
	TLabel *FinalLabel;
	TLabel *FinalPointsLabel;
	TImage *Image1;
	void __fastcall ExitGameButtonClick(TObject *Sender);
	void __fastcall PlayAgainButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TEndForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEndForm *EndForm;
//---------------------------------------------------------------------------
#endif
