// Based off learning from ChiliTomatoNoodles - youtube

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

static int numWindow = 0;
class Window
{
	
public:
	Window();

private:
	HINSTANCE h;
	static LRESULT CALLBACK msging(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
	
	


};