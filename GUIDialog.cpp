///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"
#include <wx/wx.h>
#include "GUIDialog.h"
#include "GUIFrame.h"

///////////////////////////////////////////////////////////////////////////

GUIDialog::GUIDialog( wxWindow* parent,wxTimer* send, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
    timerPtr=send;

	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 176, 176, 176 ) );
	SetExtraStyle(wxWS_EX_BLOCK_EVENTS|wxDIALOG_EX_CONTEXTHELP);///Extra Styles for the dialog box

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

	m_radioBtn1 = new wxRadioButton( m_panel3, wxID_C1, wxT("   Replacing Sleepers"), wxDefaultPosition, wxDefaultSize, 0 );
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
	gSizer1 = new wxGridSizer( 7, 2, 0, 0 );

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


	m_staticText7 = new wxStaticText( m_panel4, wxID_ANY, wxT("Day"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	gSizer1->Add( m_staticText7, 0, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl5 = new wxTextCtrl( m_panel4, wxID_Day, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_textCtrl5, 0, wxALIGN_CENTER|wxALL, 5 );


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
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnCloseD ) );
    this->Connect( wxID_Create, wxEVT_BUTTON, wxCommandEventHandler( GUIDialog::OnCreate) );
}

GUIDialog::~GUIDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnCloseD ) );
	this->Disconnect( wxID_Create, wxEVT_BUTTON, wxCommandEventHandler( GUIDialog::OnCreate) );

}

void GUIDialog::OnCloseD(wxCloseEvent &event)
{
    Destroy();
}

void GUIDialog::OnCreate(wxCommandEvent& event)
{
    ///refresh text contolls
    wxColour *KatCostum=new wxColour(255,255,255);

    m_textCtrl1->SetBackgroundColour(*KatCostum);
    m_textCtrl2->SetBackgroundColour(*KatCostum);
    m_textCtrl3->SetBackgroundColour(*KatCostum);
    m_textCtrl4->SetBackgroundColour(*KatCostum);
    m_textCtrl5->SetBackgroundColour(*KatCostum);
    wxWindow::Refresh();

    ///check the radio boxes
    bool status=false;///true-one is selected,false otherwise.
    status|=m_radioBtn1->GetValue();
    status|=m_radioBtn2->GetValue();
    status|=m_radioBtn3->GetValue();
    status|=m_radioBtn4->GetValue();

    if(status==false)
    {
        wxMessageBox(_("Please select a template!"),_("Error"));
        return;
    }

    ///get the radio button identifier
    int radioSelectionNumber=0;

    if(m_radioBtn1->GetValue())
        radioSelectionNumber=1;
    if(m_radioBtn2->GetValue())
        radioSelectionNumber=2;
    if(m_radioBtn3->GetValue())
        radioSelectionNumber=3;
    if(m_radioBtn4->GetValue())
        radioSelectionNumber=4;


    ///wxMessageBox(wxString::Format(wxT("%d"), (int)radioSelectionNumber),_("nix"));

    ///CONCATENATE THE STRINGS THAT ARE FROM THE TEXT CONTOLLS.

    wxString docFileName="";
    docFileName=m_textCtrl1->GetValue()+"__"+m_textCtrl2->GetValue()+"("+m_textCtrl3->GetValue()+"-"+m_textCtrl4->GetValue()+"-"+m_textCtrl5->GetValue()+")";

    status=false;
    if(CheckForInputEmptyError(m_textCtrl1)==1) status|=true;
    if(CheckForInputEmptyError(m_textCtrl2)==1) status|=true;
    if(CheckForInputEmptyError(m_textCtrl3)==1) status|=true;
    if(CheckForInputEmptyError(m_textCtrl4)==1) status|=true;
    if(CheckForInputEmptyError(m_textCtrl5)==1) status|=true;
    if(status) return;

    ///copy relevant template to repository
    wxString control;
    wxString prefix;

    switch(radioSelectionNumber)
    {
    case 1:system("copy Templates\\template1.xlsm Repository");
           prefix="[Replacing Sleepers]_";
           control="rename Repository\\template1.xlsm  \""+prefix+docFileName+".xlsm\"";
        break;

    case 2:system("copy Templates\\template2.xlsm Repository");
           prefix="[Tmp2]_";
           control="rename Repository\\template2.xlsm  \""+prefix+docFileName+".xlsm\"";
        break;

    case 3:system("copy Templates\\template3.xlsm Repository");
           prefix="[Tmp2]_";
           control="rename Repository\\template3.xlsm  \""+prefix+docFileName+".xlsm\"";
        break;

    case 4:system("copy Templates\\template4.xlsm Repository");
           prefix="[Tmp2]_";
           control="rename Repository\\template4.xlsm  \""+prefix+docFileName+".xlsm\"";
    }
    //continue
    system(control);
    wxMessageBox(wxT("This file will open in MS Excel.Please wait till Excel automatically opens.This may take longer depending on your computer."),_("Please note"));
    system("start excel \"Repository\\"+prefix+docFileName+".xlsm\"");
    Destroy();

    timerPtr->Start(800);
}

int GUIDialog::CheckForInputEmptyError(wxTextCtrl* ptr)
{
     if(ptr->GetValue().Cmp("")==0 || ptr->GetValue().Cmp("??")==0)
    {
        wxColour *KatCostum=new wxColour(255,159,159);
        ptr->SetBackgroundColour(*KatCostum);
        ptr->SetValue(_("??"));
        wxWindow::Refresh();
        return 1;
    }

    return 0;
}


