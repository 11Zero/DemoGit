// DemoGitHub.h : main header file for the DEMOGITHUB application
//

#if !defined(AFX_DEMOGITHUB_H__F33D817C_D965_4AB7_8433_DE133198ADC1__INCLUDED_)
#define AFX_DEMOGITHUB_H__F33D817C_D965_4AB7_8433_DE133198ADC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDemoGitHubApp:
// See DemoGitHub.cpp for the implementation of this class
//

class CDemoGitHubApp : public CWinApp
{
public:
	CDemoGitHubApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDemoGitHubApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDemoGitHubApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEMOGITHUB_H__F33D817C_D965_4AB7_8433_DE133198ADC1__INCLUDED_)
