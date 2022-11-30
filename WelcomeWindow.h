//---------------------------------------------------------------------------

#ifndef WelcomeWindowH
#define WelcomeWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Ani.hpp>
//---------------------------------------------------------------------------
class TWelcomeForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *WelcomeLabel;
	TButton *PlayButton;
	TButton *InstructionsButton;
	TButton *CreditButton;
	TButton *ExitButton;
	TImage *Image1;
	TFloatAnimation *FloatAnimation1;
	TLabel *WelcomeLabel2;
	void __fastcall PlayButtonClick(TObject *Sender);
	void __fastcall InstructionsButtonClick(TObject *Sender);
	void __fastcall ExitButtonClick(TObject *Sender);
	void __fastcall CreditButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TWelcomeForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWelcomeForm *WelcomeForm;
//---------------------------------------------------------------------------
#endif
