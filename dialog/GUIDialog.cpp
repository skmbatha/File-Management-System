///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"
#include <wx/wx.h>
#include "GUIDialog.h"

///////////////////////////////////////////////////////////////////////////

GUIDialog::GUIDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{

	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 176, 176, 176 ) );
	SetExtraStyle(wxWS_EX_BLOCK_EVENTS|wxDIALOG_EX_CONTEXTHELP);///Extra Styles for the dialog box
	wxDialog::Create(parent,id,caption,pos,size,style);///Create and initialise dialog box object

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	m_panel3 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	m_staticText6 = new wxStaticText( m_panel3, wxID_ANY, wxT("Templates"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont( wxFont( 12, 71, 90, 90, false, wxT("Bauhaus 93") ) );

	bSizer6->Add( m_staticText6, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticline2 = new wxStaticLine( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer6->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );

	m_radioBtn1 = new wxRadioButton( m_panel3, wxID_C1, wxT("   Choice 1"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_radioBtn1, 0, wxALL, 5 );

	m_radioBtn2 = new wxRadioButton( m_panel3, wxID_C2, wxT("   Choice 2"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_radioBtn2, 0, wxALL, 5 );

	m_radioBtn3 = new wxRadioButton( m_panel3, wxID_C3, wxT("   Choice 3"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_radioBtn3, 0, wxALL, 5 );

	m_radioBtn4 = new wxRadioButton( m_panel3, wxID_C4, wxT("   Choice 4"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_radioBtn4, 0, wxALL, 5 );

	m_radioBtn5 = new wxRadioButton( m_panel3, wxID_ANY, wxT("   None"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radioBtn5->Enable( false );
	m_radioBtn5->SetToolTip( wxT("Contact developer to add more templates") );

	bSizer6->Add( m_radioBtn5, 0, wxALL, 5 );

	m_radioBtn51 = new wxRadioButton( m_panel3, wxID_ANY, wxT("   None"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radioBtn51->Enable( false );
	m_radioBtn51->SetToolTip( wxT("Contact developer to add more templates") );

	bSizer6->Add( m_radioBtn51, 0, wxALL, 5 );

	m_radioBtn52 = new wxRadioButton( m_panel3, wxID_ANY, wxT("   None"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radioBtn52->Enable( false );
	m_radioBtn52->SetToolTip( wxT("Contact developer to add more templates") );

	bSizer6->Add( m_radioBtn52, 0, wxALL, 5 );

	m_radioBtn53 = new wxRadioButton( m_panel3, wxID_ANY, wxT("   None"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radioBtn53->Enable( false );
	m_radioBtn53->SetToolTip( wxT("Contact developer to add more templates") );

	bSizer6->Add( m_radioBtn53, 0, wxALL, 5 );


	m_panel3->SetSizer( bSizer6 );
	m_panel3->Layout();
	bSizer6->Fit( m_panel3 );
	bSizer1->Add( m_panel3, 1, wxEXPAND | wxALL, 5 );

	m_panel4 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 6, 2, 0, 0 );

	m_staticText2 = new wxStaticText( m_panel4, wxID_ANY, wxT("File name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	gSizer1->Add( m_staticText2, 0, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl1 = new wxTextCtrl( m_panel4, wxID_File_Name, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_textCtrl1, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText3 = new wxStaticText( m_panel4, wxID_ANY, wxT("Author's name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	gSizer1->Add( m_staticText3, 0, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl2 = new wxTextCtrl( m_panel4, wxID_Author_Name, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_textCtrl2, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText4 = new wxStaticText( m_panel4, wxID_ANY, wxT("Year"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	gSizer1->Add( m_staticText4, 0, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl3 = new wxTextCtrl( m_panel4, wxID_Year, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_textCtrl3, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText5 = new wxStaticText( m_panel4, wxID_ANY, wxT("Month"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	gSizer1->Add( m_staticText5, 0, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl4 = new wxTextCtrl( m_panel4, wxID_Month, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_textCtrl4, 0, wxALIGN_CENTER|wxALL, 5 );


	gSizer1->Add( 0, 0, 1, wxEXPAND, 5 );


	gSizer1->Add( 0, 0, 1, wxEXPAND, 5 );


	gSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button3 = new wxButton( m_panel4, wxID_Create, wxT("Create"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_button3, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );


	m_panel4->SetSizer( gSizer1 );
	m_panel4->Layout();
	gSizer1->Fit( m_panel4 );
	bSizer1->Add( m_panel4, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnClose ) );
}

GUIDialog::~GUIDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnClose ) );

}

void GUIDialog::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void GUIDialog::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void GUIDialog::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
   // wxMessageBox(msg, _("Welcome to..."));
}

