
// MSystemDoc.h : CMSystemDoc 클래스의 인터페이스
//

#include "Sampling.h"
#include "Quantization.h"
#include "Dpcm.h"
#include "Runlength.h"
#include "AdpcmHuff.h"

#pragma once


class CMSystemDoc : public CDocument
{
protected: // serialization에서만 만들어집니다.
	CMSystemDoc();
	DECLARE_DYNCREATE(CMSystemDoc)

// 특성입니다.
public:

// 작업입니다.
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

// 재정의입니다.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 구현입니다.
public:
	virtual ~CMSystemDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 검색 처리기에 대한 검색 콘텐츠를 설정하는 도우미 함수
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
