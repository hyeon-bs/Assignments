#pragma once


// CRunlength ��ȭ �����Դϴ�.

class CRunlength : public CDialog
{
	DECLARE_DYNAMIC(CRunlength)

public:
	CRunlength(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CRunlength();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RUNLENGTH };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CString m_inputstring;
	CString m_outputstring;
	afx_msg void OnBnClickedStart();
};
