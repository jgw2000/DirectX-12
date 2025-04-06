#pragma once

#include "Win32Application.h"

class DXSample
{
public:
	DXSample(int width, int height, std::wstring name);
	virtual ~DXSample();

	virtual void OnInit() = 0;
	virtual void OnUpdate() = 0;
	virtual void OnRender() = 0;
	virtual void OnDestroy() = 0;

	virtual void OnKeyDown(UINT8 key) {}
	virtual void OnKeyUp(UINT8 key) {}

	int GetWidth() const { return m_width; }
	int GetHeight() const { return m_height; }
	const WCHAR* GetTitle() const { return m_title.c_str(); }

protected:
	void GetHardwareAdapter(
		IDXGIFactory1* pFactory, 
		IDXGIAdapter1** ppAdapter,
		bool requestHighPerformanceAdapter = false);

	int m_width;
	int m_height;
	std::wstring m_title;
};