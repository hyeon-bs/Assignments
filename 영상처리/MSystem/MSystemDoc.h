
// MSystemDoc.h : CMSystemDoc Ŭ������ �������̽�
//

#include "Sampling.h"
#include "Quantization.h"
#include "Dpcm.h"
#include "Runlength.h"
#include "AdpcmHuff.h"

#pragma once


class CMSystemDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CMSystemDoc();
	DECLARE_DYNCREATE(CMSystemDoc)

// Ư���Դϴ�.
public:

// �۾��Դϴ�.
public:
	unsigned char m_InImg[256][256];
	unsigned char m_OutImg[256][256];
	void m_Sampling(int height, int width);
	CSampling m_SamplingDlg;
	void m_Quantization(int height, int width);
	CQuantization m_QDlg;
	void m_LinearQ(int number);
	void m_NonlinearQ(int number);
	void m_DPCM(int height, int width);
	CDpcm m_DpcmDlg;
	CRunlength m_runlengthdlg;
	void m_ADPCM(int height, int width);
	CAdpcmHuff m_adpcmhuffdlg;
	void m_ADPCM_HUFF(int height, int width);

// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// �����Դϴ�.
public:
	virtual ~CMSystemDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// �˻� ó���⿡ ���� �˻� �������� �����ϴ� ����� �Լ�
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
