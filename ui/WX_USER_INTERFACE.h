///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-254-gc2ef7767)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/button.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/treectrl.h>
#include <wx/filepicker.h>
#include <wx/stattext.h>
#include <wx/html/htmlwin.h>
#include <wx/notebook.h>
#include <wx/statbmp.h>
#include <wx/collpane.h>
#include <wx/splitter.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/dialog.h>

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
		wxPanel* wxTreeControlPanel;
		wxButton* btn_ExpandTree;
		wxButton* btn_CollapseTree;
		wxTreeCtrl* wxTree_Animali;
		wxFilePickerCtrl* wxFilePicker_csv;
		wxPanel* RightPanel;
		wxSplitterWindow* RightPanel_Splitter;
		wxPanel* RightBottomPanel;
		wxPanel* wxTextTitolo_Panel;
		wxStaticText* wxText_Titolo;
		wxNotebook* wxNoteBookPanel;
		wxPanel* wxPanel_Informazioni;
		wxHtmlWindow* wxHtmlWindow_Informazioni;
		wxPanel* wxPanel_Categoria;
		wxHtmlWindow* wxHtmlWindow_Categoria;
		wxPanel* wxPanel_Habitat;
		wxHtmlWindow* wxHtmlWindow_Habitat_Naturale;
		wxCollapsiblePane* wxPane_Bitmap;
		wxStaticBitmap* wxBitMap_immagine;
		wxMenuBar* MenuBar_TotemUI;
		wxMenu* wxMenu_Program;
		wxMenu* wxSubMenu_File;
		wxMenu* wxSubMenu_Debug;
		wxMenu* wxMenu_Utente;
		wxMenu* wxMenu_AIuto;

		// Virtual event handlers, override them in your derived class
		virtual void TotemSetup( wxActivateEvent& event ) { event.Skip(); }
		virtual void btn_ExpandTree_Clicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void btn_CollapseTree_Clicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void toggleAnimale( wxTreeEvent& event ) { event.Skip(); }
		virtual void newfileLoaded( wxFileDirPickerEvent& event ) { event.Skip(); }
		virtual void wxMenuItem_LoadFileEvent( wxCommandEvent& event ) { event.Skip(); }
		virtual void wxMenuItem_GenerateEvent( wxCommandEvent& event ) { event.Skip(); }
		virtual void EventDebugButton( wxCommandEvent& event ) { event.Skip(); }
		virtual void MenuItem_Selected_Aggiungi( wxCommandEvent& event ) { event.Skip(); }
		virtual void wxMenuItemAiuto_Clicked( wxCommandEvent& event ) { event.Skip(); }


	public:

		TotemAPP( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("[Progetto TotemUI] - Rampazzo & Frigo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1280,720 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~TotemAPP();

		void Main_SplitterOnIdle( wxIdleEvent& )
		{
			Main_Splitter->SetSashPosition( 226 );
			Main_Splitter->Disconnect( wxEVT_IDLE, wxIdleEventHandler( TotemAPP::Main_SplitterOnIdle ), NULL, this );
		}

		void RightPanel_SplitterOnIdle( wxIdleEvent& )
		{
			RightPanel_Splitter->SetSashPosition( 338 );
			RightPanel_Splitter->Disconnect( wxEVT_IDLE, wxIdleEventHandler( TotemAPP::RightPanel_SplitterOnIdle ), NULL, this );
		}

};

///////////////////////////////////////////////////////////////////////////////
/// Class AggiungiAnimale
///////////////////////////////////////////////////////////////////////////////
class AggiungiAnimale : public wxFrame
{
	private:

	protected:
		wxStaticText* Aggiungi_Disclaimer;
		wxPanel* AggiungiAnimale_Panel;
		wxStaticText* aggiungiNome;
		wxTextCtrl* Input_nuovoNome;
		wxStaticText* AggiungiCategoria;
		wxTextCtrl* Input_nuovaCategoria;
		wxButton* NuovoAnimaleSubmit;

		// Virtual event handlers, override them in your derived class
		virtual void NuovoAnimaleSubmitClicked( wxCommandEvent& event ) { event.Skip(); }


	public:

		AggiungiAnimale( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Finestra per aggiungere un nuovo animale"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~AggiungiAnimale();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Help
///////////////////////////////////////////////////////////////////////////////
class Help : public wxDialog
{
	private:

	protected:
		wxHtmlWindow* wxHtmlWindow_Help;

	public:

		Help( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Come funziona il programma"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~Help();

};

