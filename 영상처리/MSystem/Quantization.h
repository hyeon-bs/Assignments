#pragma once


// CQuantization ��ȭ �����Դϴ�.

class CQuantization : public CDialog
{
	DECLARE_DYNAMIC(CQuantization)

public:
	CQuantization(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CQuantization();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_QUANTIZATION };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	UINT m_qinput;
};
