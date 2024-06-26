
// DirectXPracticeView.cpp : implementation of the CDirectXPracticeView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "DirectXPractice.h"
#endif

#include "DirectXPracticeDoc.h"
#include "DirectXPracticeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDirectXPracticeView

IMPLEMENT_DYNCREATE(CDirectXPracticeView, CView)

BEGIN_MESSAGE_MAP(CDirectXPracticeView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CDirectXPracticeView construction/destruction

CDirectXPracticeView::CDirectXPracticeView() noexcept
{
	// TODO: add construction code here

}

CDirectXPracticeView::~CDirectXPracticeView()
{
}

BOOL CDirectXPracticeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDirectXPracticeView drawing

void CDirectXPracticeView::OnDraw(CDC* /*pDC*/)
{
	CDirectXPracticeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CDirectXPracticeView printing

BOOL CDirectXPracticeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDirectXPracticeView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDirectXPracticeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CDirectXPracticeView diagnostics

#ifdef _DEBUG
void CDirectXPracticeView::AssertValid() const
{
	CView::AssertValid();
}

void CDirectXPracticeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDirectXPracticeDoc* CDirectXPracticeView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDirectXPracticeDoc)));
	return (CDirectXPracticeDoc*)m_pDocument;
}
#endif //_DEBUG


// CDirectXPracticeView message handlers
