
// ImageProcess.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CImageProcessApp:
// See ImageProcess.cpp for the implementation of this class
//

class CImageProcessApp : public CWinApp
{
public:
	CImageProcessApp();

// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
protected:
	ULONG_PTR m_tokenGdiplus;

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CImageProcessApp theApp;
