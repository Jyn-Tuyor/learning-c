#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR cmdLine, int cmdShow)
{
    MessageBox(NULL, TEXT("Hello WinAPI Graphical User Interface"), TEXT("Welcome"), 0);
    return 0;
}