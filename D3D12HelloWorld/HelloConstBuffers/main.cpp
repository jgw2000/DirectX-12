#include "stdafx.h"
#include "D3D12HelloConstBuffers.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow)
{
	D3D12HelloConstBuffers sample(1280, 720, L"D3D12 Hello Const Buffers");
	return Win32Application::Run(&sample, hInstance, nCmdShow);
}