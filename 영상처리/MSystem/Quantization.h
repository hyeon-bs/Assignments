#pragma once


// CQuantization 대화 상자입니다.

class CQuantization : public CDialog
{
	DECLARE_DYNAMIC(CQuantization)

public:
	CQuantization(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CQuantization();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_QUANTIZATION };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	UINT m_qinput;
};
