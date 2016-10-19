// DemoGitHubDlg.h : header file
//

#if !defined(AFX_DEMOGITHUBDLG_H__7F1FF540_46F3_424D_A7ED_45B48A8B52B1__INCLUDED_)
#define AFX_DEMOGITHUBDLG_H__7F1FF540_46F3_424D_A7ED_45B48A8B52B1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CDemoGitHubDlg dialog

class CDemoGitHubDlg : public CDialog
{
// Construction
public:
	CDemoGitHubDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CDemoGitHubDlg)
	enum { IDD = IDD_DEMOGITHUB_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDemoGitHubDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CDemoGitHubDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEMOGITHUBDLG_H__7F1FF540_46F3_424D_A7ED_45B48A8B52B1__INCLUDED_)
