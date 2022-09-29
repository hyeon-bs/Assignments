#pragma once


// CDpcm 대화 상자입니다.

class CDpcm : public CDialog
{
	DECLARE_DYNAMIC(CDpcm)

public:
	CDpcm(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CDpcm();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DPCM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	UINT m_dpcmbit;
};
