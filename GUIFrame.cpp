///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIFrame.h"

///////////////////////////////////////////////////////////////////////////

GUIFrame::GUIFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 155, 155, 155 ) );

	mbar = new wxMenuBar( 0 );
	fileMenu = new wxMenu();
	wxMenuItem* menuFileQuit;
	menuFileQuit = new wxMenuItem( fileMenu, idMenuQuit, wxString( wxT("&Quit") ) + wxT('\t') + wxT("Alt+F4"), wxT("Quit the application"), wxITEM_NORMAL );
	fileMenu->Append( menuFileQuit );

	mbar->Append( fileMenu, wxT("&File") );

	helpMenu = new wxMenu();
	wxMenuItem* menuHelpAbout;
	menuHelpAbout = new wxMenuItem( helpMenu, idMenuAbout, wxString( wxT("&About") ) + wxT('\t') + wxT("F1"), wxT("Show info about this application"), wxITEM_NORMAL );
	helpMenu->Append( menuHelpAbout );

	mbar->Append( helpMenu, wxT("&Help") );

	this->SetMenuBar( mbar );

	statusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_ANY );
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 1, 1, 0, 0 );

	App_Title = new wxStaticText( m_panel1, wxID_ANY, wxT("Perway Monthly Planner"), wxDefaultPosition, wxDefaultSize, 0 );
	App_Title->Wrap( -1 );
	App_Title->SetFont( wxFont( 48, 72, 90, 90, false, wxT("Elephant") ) );

	gSizer1->Add( App_Title, 0, wxALIGN_CENTER|wxALL, 5 );


	m_panel1->SetSizer( gSizer1 );
	m_panel1->Layout();
	gSizer1->Fit( m_panel1 );
	bSizer1->Add( m_panel1, 1, wxEXPAND | wxALL, 5 );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL|wxTRANSPARENT_WINDOW );
	m_panel2->SetBackgroundColour( wxColour( 176, 176, 176 ) );

	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 1, 2, 0, 0 );

	m_bpButton3 = new wxBitmapButton( m_panel2, wxID_kNEW, wxBitmap( wxT("program_bitmaps/document_add.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 80,80 ), wxBU_AUTODRAW|wxTRANSPARENT_WINDOW );
	m_bpButton3->SetDefault();
	gSizer2->Add( m_bpButton3, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

	m_staticText2 = new wxStaticText( m_panel2, wxID_ANY, wxT("New"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 14, 74, 90, 90, false, wxT("Arial Unicode MS") ) );

	gSizer2->Add( m_staticText2, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_LEFT|wxALL, 5 );


	m_panel2->SetSizer( gSizer2 );
	m_panel2->Layout();
	gSizer2->Fit( m_panel2 );
	bSizer1->Add( m_panel2, 1, wxEXPAND | wxALL, 5 );

	m_panel3 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel3->SetBackgroundColour( wxColour( 192, 192, 192 ) );

	wxGridSizer* gSizer3;
	gSizer3 = new wxGridSizer( 1, 2, 0, 0 );

	m_bpButton4 = new wxBitmapButton( m_panel3, wxID_kOPEN, wxBitmap( wxT("program_bitmaps/report.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 80,80 ), wxBU_AUTODRAW );

	m_bpButton4->SetBitmapDisabled( wxBitmap( wxT("program_bitmaps/report.png"), wxBITMAP_TYPE_ANY ) );
	gSizer3->Add( m_bpButton4, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

	m_staticText21 = new wxStaticText( m_panel3, wxID_ANY, wxT("Open/Manage existing"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	m_staticText21->SetFont( wxFont( 14, 74, 90, 90, false, wxT("Arial Unicode MS") ) );

	gSizer3->Add( m_staticText21, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	m_panel3->SetSizer( gSizer3 );
	m_panel3->Layout();
	gSizer3->Fit( m_panel3 );
	bSizer1->Add( m_panel3, 1, wxEXPAND | wxALL, 5 );

	m_panel5 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel5->SetBackgroundColour( wxColour( 211, 211, 211 ) );

	wxGridSizer* gSizer4;
	gSizer4 = new wxGridSizer( 1, 2, 0, 0 );

	m_bpButton5 = new wxBitmapButton( m_panel5, wxID_kEXIT, wxBitmap( wxT("program_bitmaps/close.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 80,80 ), wxBU_AUTODRAW );
	gSizer4->Add( m_bpButton5, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

	m_staticText22 = new wxStaticText( m_panel5, wxID_ANY, wxT("Exit "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	m_staticText22->SetFont( wxFont( 14, 74, 90, 90, false, wxT("Arial Unicode MS") ) );

	gSizer4->Add( m_staticText22, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	m_panel5->SetSizer( gSizer4 );
	m_panel5->Layout();
	gSizer4->Fit( m_panel5 );
	bSizer1->Add( m_panel5, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Connect( menuFileQuit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
	this->Connect( menuHelpAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
}

GUIFrame::~GUIFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Disconnect( idMenuQuit, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
	this->Disconnect( idMenuAbout, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );

}
