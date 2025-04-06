#pragma once

#include "DXSample.h"

class DXSample;

class Win32Application
{
public:
	static int Run(DXSample* pSample, HINSTANCE hInstance, int nCmdShow);
	static HWND GetHwnd() { return m_hWnd; }

protected:
	static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
	static HWND m_hWnd;
};

