#pragma once


// CConst 대화 상자

class CConst : public CDialog
{
	DECLARE_DYNAMIC(CConst)

public:
	CConst(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CConst();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CONST };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	int m_constvalue;
};
