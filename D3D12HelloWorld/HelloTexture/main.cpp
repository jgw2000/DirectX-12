#include "stdafx.h"
#include "D3D12HelloTexture.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow)
{
	D3D12HelloTexture sample(1280, 720, L"D3D12 Hello Texture");
	return Win32Application::Run(&sample, hInstance, nCmdShow);
}