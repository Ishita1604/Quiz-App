//---------------------------------------------------------------------------

#ifndef PlayWindowH
#define PlayWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TPlayForm : public TForm
{
__published:	// IDE-managed Components
	TRadioButton *Option1RadioButton;
	TRadioButton *Option2RadioButton;
	TRadioButton *Option3RadioButton;
	TRadioButton *Option4RadioButton;
	TButton *PreviousButton;
	TButton *SaveNextButton;
	TLabel *PointsLabel;
	TLabel *ScoreLabel;
	TLabel *QuestionLabel;
	void __fastcall Option1RadioButtonChange(TObject *Sender);
	void __fastcall Option2RadioButtonChange(TObject *Sender);
	void __fastcall Option3RadioButtonChange(TObject *Sender);
	void __fastcall Option4RadioButtonChange(TObject *Sender);
	void __fastcall SaveNextButtonClick(TObject *Sender);
	void __fastcall PreviousButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPlayForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPlayForm *PlayForm;
//---------------------------------------------------------------------------
#endif
