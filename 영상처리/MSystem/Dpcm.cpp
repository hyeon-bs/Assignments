// Dpcm.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MSystem.h"
#include "Dpcm.h"
#include "afxdialogex.h"


// CDpcm ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CDpcm, CDialog)

CDpcm::CDpcm(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DPCM, pParent)
	, m_dpcmbit(0)
{

}

CDpcm::~CDpcm()
{
}

void CDpcm::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_DPCMBIT, m_dpcmbit);
}


BEGIN_MESSAGE_MAP(CDpcm, CDialog)
END_MESSAGE_MAP()


// CDpcm �޽��� ó�����Դϴ�.
