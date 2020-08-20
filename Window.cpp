// Based off learning from ChiliTomatoNoodles - youtube

#include "Window.h"

Window::Window(): h(GetModuleHandle(NULL))
{
	
	LPCSTR name = "Win32-DX11 Window";
	name += numWindow;
	WNDCLASSEX w = {};
	w.cbSize = sizeof(w);
	w.hCursor = NULL;
	w.hbrBackground = NULL;
	w.lpszMenuName = NULL;
	w.hIcon = NULL;
	w.cbWndExtra = 0;
	w.cbClsExtra = 0;
	w.lpszMenuName = NULL;
	w.lpszClassName = name;
	w.style = CS_OWNDC;
	w.hInstance = h;
	w.lpfnWndProc = msging;
	numWindow++;
	RegisterClassEx(&w);
	HWND window  = CreateWindowExA(0, name, name, WS_MINIMIZEBOX | WS_SYSMENU,
		200, 200, 600, 600,
		NULL, NULL, h, NULL);
	
	ShowWindow(window, 5);
}


LRESULT Window::msging(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)

{
	if (msg == WM_CLOSE)
	{
		PostQuitMessage(0);
	}
	return DefWindowProc(hWnd, msg, wParam, lParam);
}