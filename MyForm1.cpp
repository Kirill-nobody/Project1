#include "MyForm1.h"
#include <Windows.h>
#include <string>
#include <ctime>
using namespace Project1;

int WINAPI WinMain
(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR         lpCmdLine,
	_In_ int           nCdShow
)
{
	srand(time(NULL));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

