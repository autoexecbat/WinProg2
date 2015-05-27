// Line.h: interface for the CLine class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LINE_H__4FB84301_8570_4A92_9C1B_319E85065AFC__INCLUDED_)
#define AFX_LINE_H__4FB84301_8570_4A92_9C1B_319E85065AFC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CLine : public CObject  
{
public:
	void LineDraw(CDC *pDC);
	CLine(CPoint ptStart, CPoint ptEnd);
	CLine();
	virtual ~CLine();

protected:
	CPoint m_ptEnd;
	CPoint m_ptStart;
};

#endif // !defined(AFX_LINE_H__4FB84301_8570_4A92_9C1B_319E85065AFC__INCLUDED_)
