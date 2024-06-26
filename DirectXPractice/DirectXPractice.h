
// DirectXPractice.h : main header file for the DirectXPractice application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CDirectXPracticeApp:
// See DirectXPractice.cpp for the implementation of this class
//

class CDirectXPracticeApp : public CWinApp
{
public:
	CDirectXPracticeApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDirectXPracticeApp theApp;
