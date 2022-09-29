#pragma once


// CAdpcmHuff 대화 상자입니다.

class CAdpcmHuff : public CDialog
{
	DECLARE_DYNAMIC(CAdpcmHuff)

public:
	CAdpcmHuff(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CAdpcmHuff();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADPCMHUFF };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString m_s_pro;
	UINT m_scode0;
	UINT m_scode1;
	UINT m_scode2;
	UINT m_scode3;
	UINT m_scode4;
	UINT m_scode5;
	UINT m_scode6;
	UINT m_scode7;
	UINT m_scode8;
};
