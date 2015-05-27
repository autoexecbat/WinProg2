// Line1.h: interface for the CLine class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LINE1_H__0CE8471A_0B64_4C6E_AF2A_20277853FCDA__INCLUDED_)
#define AFX_LINE1_H__0CE8471A_0B64_4C6E_AF2A_20277853FCDA__INCLUDED_

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

#endif // !defined(AFX_LINE1_H__0CE8471A_0B64_4C6E_AF2A_20277853FCDA__INCLUDED_)
