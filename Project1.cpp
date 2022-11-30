//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("WelcomeWindow.cpp", WelcomeForm);
USEFORM("PlayWindow.cpp", PlayForm);
USEFORM("EndWindow.cpp", EndForm);
USEFORM("InstructionsWindow.cpp", InstructionsForm);
USEFORM("CreditsWindow.cpp", CreditsForm);
USEFORM("LevelWindow.cpp", LevelForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TWelcomeForm), &WelcomeForm);
		Application->CreateForm(__classid(TPlayForm), &PlayForm);
		Application->CreateForm(__classid(TEndForm), &EndForm);
		Application->CreateForm(__classid(TInstructionsForm), &InstructionsForm);
		Application->CreateForm(__classid(TCreditsForm), &CreditsForm);
		Application->CreateForm(__classid(TLevelForm), &LevelForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
