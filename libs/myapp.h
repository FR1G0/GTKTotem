///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-254-gc2ef7767)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/treectrl.h>

///////////////////////////////////////////////////////////////////////////

class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};


///////////////////////////////////////////////////////////////////////////////
/// Class Mainpage
///////////////////////////////////////////////////////////////////////////////
class Mainpage : public wxFrame
{
	private:

	protected:
		wxStaticText* Title;
		wxButton* m_button1;
		wxButton* m_button2;
		wxButton* m_button3;

	public:

		Mainpage( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("[Progetto] Totem Per Animali - Joseph Frigo & Enrico Rampazzo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Mainpage();

};
wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    Mainpage *frame = new Mainpage(NULL);
    frame->Show( true );
    return true;
}

///////////////////////////////////////////////////////////////////////////////
/// Class Browse
///////////////////////////////////////////////////////////////////////////////
class Browse : public wxFrame
{
	private:

	protected:
		wxTreeCtrl* m_treeCtrl1;

	public:

		Browse( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Browse();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Visualize
///////////////////////////////////////////////////////////////////////////////
class Visualize : public wxFrame
{
	private:

	protected:

	public:

		Visualize( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Visualize();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Insert
///////////////////////////////////////////////////////////////////////////////
class Insert : public wxFrame
{
	private:

	protected:

	public:

		Insert( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Insert();

};

