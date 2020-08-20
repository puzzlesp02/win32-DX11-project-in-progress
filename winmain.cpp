// Based off learning from ChiliTomatoNoodles - youtube

#include "Window.h"




int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdSHow)
{
	MSG msg;
	BOOL rtrn;
	Window w;

	while (rtrn = GetMessage(&msg, NULL, 0, 0) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);

	}
}
