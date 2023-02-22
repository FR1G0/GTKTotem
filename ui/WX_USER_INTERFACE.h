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
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/statbmp.h>
#include <wx/html/htmlwin.h>
#include <wx/notebook.h>
#include <wx/splitter.h>
#include <wx/menu.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class TotemAPP
///////////////////////////////////////////////////////////////////////////////
class TotemAPP : public wxFrame
{
	private:

	protected:
		wxSplitterWindow* Main_Splitter;
		wxPanel* LeftPanel;
		wxSearchCtrl* wxSearch;
		wxTreeCtrl* wxTree_Animali;
		wxFilePickerCtrl* wxFilePicker_csv;
		wxButton* DebugButton;
		wxPanel* RightPanel;
		wxSplitterWindow* RightPanel_Splitter;
		wxPanel* RightTopPanel;
		wxStaticText* wxText_Titolo;
		wxStaticBitmap* wxBitMap_immagine;
		wxPanel* RightBottomPanel;
		wxNotebook* wxNoteBookPanel;
		wxPanel* wxPanel_Informazioni;
		wxHtmlWindow* wxHtmlWindow_Informazioni;
		wxPanel* wxPanel_Categoria;
		wxHtmlWindow* wxHtmlWindow_Categoria;
		wxPanel* wxPanel_Habitat;
		wxHtmlWindow* wxHtmlWindow_Habitat_Naturale;
		wxPanel* wxPanel_Source;
		wxMenuBar* MenuBar_TotemUI;
		wxMenu* wxMenu_File;
		wxMenu* wxMenu_Utente;

		// Virtual event handlers, override them in your derived class
		virtual void TotemSetup( wxActivateEvent& event ) { event.Skip(); }
		virtual void searchbartyped( wxCommandEvent& event ) { event.Skip(); }
		virtual void toggleAnimale( wxTreeEvent& event ) { event.Skip(); }
		virtual void newfileLoaded( wxFileDirPickerEvent& event ) { event.Skip(); }
		virtual void EventDebugButton( wxCommandEvent& event ) { event.Skip(); }
		virtual void MenuItem_Selected_User( wxCommandEvent& event ) { event.Skip(); }
		virtual void MenuItem_Selected_Admin( wxCommandEvent& event ) { event.Skip(); }


	public:

		TotemAPP( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("[Progetto TotemUI] - Rampazzo & Frigo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1280,720 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~TotemAPP();

		void Main_SplitterOnIdle( wxIdleEvent& )
		{
			Main_Splitter->SetSashPosition( 214 );
			Main_Splitter->Disconnect( wxEVT_IDLE, wxIdleEventHandler( TotemAPP::Main_SplitterOnIdle ), NULL, this );
		}

		void RightPanel_SplitterOnIdle( wxIdleEvent& )
		{
			RightPanel_Splitter->SetSashPosition( 338 );
			RightPanel_Splitter->Disconnect( wxEVT_IDLE, wxIdleEventHandler( TotemAPP::RightPanel_SplitterOnIdle ), NULL, this );
		}

};

