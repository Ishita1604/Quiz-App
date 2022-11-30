//---------------------------------------------------------------------------

#include <fmx.h>
#include <queue>
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

class Question
{
public:
	char* Text;
	char* Option1;
	char* Option2;
	char* Option3;
	char* Option4;
    int CorrectAnswer;

	Question(){};
	Question(char* text, char* opt1, char* opt2, char* opt3, char* opt4, int ans)
	{
        Text = text;
        Option1 = opt1;
        Option2 = opt2;
		Option3 = opt3;
		Option4 = opt4;
		CorrectAnswer = ans;
    }
};

std::queue<Question> loadQues()
{
	Question q1 = Question("Q1. Who designed the C++ language?", "Bjarne Stroustrup", "Dennis Ritchie", "James Gosling", "Albert Einstein", 1);
    Question q2 = Question("Q2. What is C++?", "Object oriented programming language", "Procedural programming language", "Supports both procedural and object oriented programming language", "Functional programming language", 3);
    Question q3 = Question("Q3. What is the extension of a C++ program?", ".c", ".cpp", ".h", ".txt", 2);
    Question q4 = Question("Q4. What determines which method to invoke at runtime?", "Data hiding", "Dynamic typing", "Dynamic binding", "Dynamic loading", 3);
	Question q5 = Question("Q5. Which of these won\'t return any value?", "void", "null", "free", "empty", 1);
    Question q6 = Question("Q6. Select incorrect mode of inheritance in C++?", "private", "protected", "public", "exclusive", 4);
    Question q7 = Question("Q7. Which is not a type of Constructor?", "Default constructor", "Parameterized constructor", "Copy constructor", "Friend constructor", 4);
    Question q8 = Question("Q8. Which of the following approach is used by C++?", "Left-right", "Right-left", "Bottom-up", "Top-down", 3);
    Question q9 = Question("Q9. Which of the following is a correct identifier in C++?", "VAR_1234", "$var_name", "7VARNAME", "7var_name", 1);
	Question q10 = Question("Q10. What is a virtual function in C++?", "Any member function of a class", "All functions that are derived from the base class", "All the members that are accessing base class data members", "All the functions declared in the base class and overridden by the derived class", 4);

	std::queue<Question> questions;

    questions.push(q1);
    questions.push(q2);
    questions.push(q3);
	questions.push(q4);
    questions.push(q5);
    questions.push(q6);
    questions.push(q7);
    questions.push(q8);
	questions.push(q9);
    questions.push(q10);

    return questions;
}

std::queue<Question> questions; // Global variable accessed outside loadQues() function, load ALL questions here
Question currentQuestion; // 1st question loaded 1st
int selectedAns; // Which ever option user selects corresponding to that events handled
int points = 0;
int queueSize = questions.size();


TPlayForm *PlayForm;
//---------------------------------------------------------------------------
__fastcall TPlayForm::TPlayForm(TComponent* Owner)
	: TForm(Owner)
{
	// Play screen invoke
	questions = loadQues();
	currentQuestion = questions.front();
	QuestionLabel->Text = currentQuestion.Text;
	Option1RadioButton->Text = currentQuestion.Option1;
	Option2RadioButton->Text = currentQuestion.Option2;
	Option3RadioButton->Text = currentQuestion.Option3;
	Option4RadioButton->Text = currentQuestion.Option4;

	questions.pop(); // Done at front end as queue data structure

}
//---------------------------------------------------------------------------



void __fastcall TPlayForm::Option1RadioButtonChange(TObject *Sender)
{
	selectedAns = 1;
}
//---------------------------------------------------------------------------

void __fastcall TPlayForm::Option2RadioButtonChange(TObject *Sender)
{
	selectedAns = 2;
}
//---------------------------------------------------------------------------

void __fastcall TPlayForm::Option3RadioButtonChange(TObject *Sender)
{
	selectedAns = 3;
}
//---------------------------------------------------------------------------

void __fastcall TPlayForm::Option4RadioButtonChange(TObject *Sender)
{
	selectedAns = 4;
}
//---------------------------------------------------------------------------

void __fastcall TPlayForm::SaveNextButtonClick(TObject *Sender)
{
	if (selectedAns == currentQuestion.CorrectAnswer)
	{
		points++;
		ScoreLabel->Text = points;
	}

	// Here

	if (!questions.empty()) // If not empty then do loading process
	{
		currentQuestion = questions.front(); // 1st question popped so 2nd loads

		QuestionLabel->Text = currentQuestion.Text;
		Option1RadioButton->Text = currentQuestion.Option1;
		Option2RadioButton->Text = currentQuestion.Option2;
		Option3RadioButton->Text = currentQuestion.Option3;
		Option4RadioButton->Text = currentQuestion.Option4;

		questions.pop();

		// To uncheck previously selected option
		Option1RadioButton->IsChecked = false;
		Option2RadioButton->IsChecked = false;
		Option3RadioButton->IsChecked = false;
		Option4RadioButton->IsChecked = false;
	}

	else
	{
		// exit(1);
		SaveNextButton->Enabled = false;
		// SaveNextButton->Text = "THE END";
		PlayForm->Close();
		EndForm->Show();
		// WelcomeForm->Show();
	}

}
//---------------------------------------------------------------------------

void __fastcall TPlayForm::PreviousButtonClick(TObject *Sender)
{

if (queueSize == 11)
{
	PreviousButton->Enabled = false;
}
}
//---------------------------------------------------------------------------

