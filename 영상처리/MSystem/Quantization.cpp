// Quantization.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MSystem.h"
#include "Quantization.h"
#include "afxdialogex.h"


// CQuantization 대화 상자입니다.

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


// CQuantization 메시지 처리기입니다.
