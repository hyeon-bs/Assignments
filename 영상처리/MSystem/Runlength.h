#pragma once


// CRunlength 대화 상자입니다.

class CRunlength : public CDialog
{
	DECLARE_DYNAMIC(CRunlength)

public:
	CRunlength(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CRunlength();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RUNLENGTH };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString m_inputstring;
	CString m_outputstring;
	afx_msg void OnBnClickedStart();
};
