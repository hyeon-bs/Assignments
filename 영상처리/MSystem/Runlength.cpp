// Runlength.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MSystem.h"
#include "Runlength.h"
#include "afxdialogex.h"


// CRunlength ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CRunlength, CDialog)

CRunlength::CRunlength(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_RUNLENGTH, pParent)
	, m_inputstring(_T(""))
	, m_outputstring(_T(""))
{

}

CRunlength::~CRunlength()
{
}

void CRunlength::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_INPUT_STRING, m_inputstring);
	DDX_Text(pDX, IDC_OUTPUT_STRING, m_outputstring);
}


BEGIN_MESSAGE_MAP(CRunlength, CDialog)
	ON_BN_CLICKED(IDC_START, &CRunlength::OnBnClickedStart)
END_MESSAGE_MAP()


// CRunlength �޽��� ó�����Դϴ�.


void CRunlength::OnBnClickedStart()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	UpdateData(TRUE);
	m_outputstring = "";
	UpdateData(FALSE);
	CString str;
	int totallength = m_inputstring.GetLength();
	int i, runcount;
	char prev, temp;

	runcount = 0;
	prev = m_inputstring[0];
	for (i = 1; i < totallength; i++)
	{
		temp = m_inputstring[i] - prev;
		if (temp == 0) runcount++;
		else {
			if (runcount == 0) {
				str.Format(_T("%c"), prev);
				m_outputstring += str;
			}
			else if (runcount == 1) {
				str.Format(_T("%c%c"), prev,prev);
				m_outputstring += str;
			}
			else {
				str.Format(_T("%c@%d"), prev, runcount-2);
				m_outputstring += str;
			}
			prev = m_inputstring[i];
			runcount = 0;
		}
	}
	if (runcount == 0) {
		str.Format(_T("%c"), prev);
		m_outputstring += str;
	}
	else if (runcount == 1) {
		str.Format(_T("%c%c"), prev, prev);
		m_outputstring += str;
	}
	else {
		str.Format(_T("%c@%d"), prev, runcount - 2);
		m_outputstring += str;
	}
	UpdateData(FALSE);
}
