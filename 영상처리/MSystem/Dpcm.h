#pragma once


// CDpcm ��ȭ �����Դϴ�.

class CDpcm : public CDialog
{
	DECLARE_DYNAMIC(CDpcm)

public:
	CDpcm(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CDpcm();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DPCM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	UINT m_dpcmbit;
};
