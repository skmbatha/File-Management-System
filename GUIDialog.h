///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUIDIALOG_H__
#define __GUIDIALOG_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statline.h>
#include <wx/radiobut.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/timer.h>
#include <Windows.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class GUIDialog
///////////////////////////////////////////////////////////////////////////////
class GUIDialog : public wxDialog
{
	private:

	protected:
		enum
		{
			wxID_C1 = 1000,
			wxID_C2,
			wxID_C3,
			wxID_C4,
			wxID_File_Name,
			wxID_Author_Name,
			wxID_Year,
			wxID_Month,
			wxID_Create,
			wxID_Day
		};

		wxPanel* m_panel3;
		wxStaticText* m_staticText6;
		wxStaticLine* m_staticline2;
		wxRadioButton* m_radioBtn1;
		wxRadioButton* m_radioBtn2;
		wxRadioButton* m_radioBtn3;
		wxRadioButton* m_radioBtn4;
		wxRadioButton* m_radioBtn5;
		wxRadioButton* m_radioBtn51;
		wxRadioButton* m_radioBtn52;
		wxRadioButton* m_radioBtn53;
		wxPanel* m_panel4;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textCtrl1;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrl2;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_textCtrl3;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl4;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl5;
		wxButton* m_button3;
		wxTimer* timerPtr;

		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseD( wxCloseEvent& event );
		virtual void OnCreate(wxCommandEvent& event );
		virtual int CheckForInputEmptyError(wxTextCtrl* ptr);


	public:

		GUIDialog( wxWindow* parent,wxTimer* send, wxWindowID id = wxID_ANY, const wxString& title = wxT("Create a new spreadsheet"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_DIALOG_STYLE );
		~GUIDialog();

};

#endif //__GUIDIALOG_H__
