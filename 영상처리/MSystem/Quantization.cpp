// Quantization.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MSystem.h"
#include "Quantization.h"
#include "afxdialogex.h"


// CQuantization ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CQuantization, CDialog)

CQuantization::CQuantization(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_QUANTIZATION, pParent)
	, m_qinput(0)
{

}

CQuantization::~CQuantization()
{
}

void CQuantization::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_QINPUT, m_qinput);
}


BEGIN_MESSAGE_MAP(CQuantization, CDialog)
END_MESSAGE_MAP()


// CQuantization �޽��� ó�����Դϴ�.
