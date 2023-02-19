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
#include <wx/srchctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/treectrl.h>
#include <wx/filepicker.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/notebook.h>
#include <wx/splitter.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxSplitterWindow* m_splitter1;
		wxPanel* m_panel1;
		wxSearchCtrl* m_searchCtrl1;
		wxTreeCtrl* m_treeCtrl1;
		wxFilePickerCtrl* m_filePicker1;
		wxPanel* m_panel2;
		wxSplitterWindow* m_splitter3;
		wxPanel* m_panel12;
		wxStaticText* m_staticText2;
		wxStaticBitmap* m_bitmap1;
		wxPanel* m_panel13;
		wxNotebook* m_notebook6;
		wxPanel* m_panel14;
		wxStaticText* m_staticText8;
		wxPanel* m_panel16;
		wxStaticText* m_staticText9;
		wxPanel* m_panel17;
		wxStaticText* m_staticText10;
		wxPanel* m_panel15;

		// Virtual event handlers, override them in your derived class
		virtual void searchbartyped( wxCommandEvent& event ) { event.Skip(); }
		virtual void toggleAnimale( wxTreeEvent& event ) { event.Skip(); }
		virtual void newfileLoaded( wxFileDirPickerEvent& event ) { event.Skip(); }


	public:

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1280,720 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

		void m_splitter1OnIdle( wxIdleEvent& )
		{
			m_splitter1->SetSashPosition( 214 );
			m_splitter1->Disconnect( wxEVT_IDLE, wxIdleEventHandler( MyFrame1::m_splitter1OnIdle ), NULL, this );
		}

		void m_splitter3OnIdle( wxIdleEvent& )
		{
			m_splitter3->SetSashPosition( 0 );
			m_splitter3->Disconnect( wxEVT_IDLE, wxIdleEventHandler( MyFrame1::m_splitter3OnIdle ), NULL, this );
		}

};

