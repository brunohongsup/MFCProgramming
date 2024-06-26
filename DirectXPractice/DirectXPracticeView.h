
// DirectXPracticeView.h : interface of the CDirectXPracticeView class
//

#pragma once


class CDirectXPracticeView : public CView
{
protected: // create from serialization only
	CDirectXPracticeView() noexcept;
	DECLARE_DYNCREATE(CDirectXPracticeView)

// Attributes
public:
	CDirectXPracticeDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDirectXPracticeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in DirectXPracticeView.cpp
inline CDirectXPracticeDoc* CDirectXPracticeView::GetDocument() const
   { return reinterpret_cast<CDirectXPracticeDoc*>(m_pDocument); }
#endif

