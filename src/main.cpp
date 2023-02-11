#include <wx/wx.h>
#include <string.h>
#include <wx/wxprec.h>
#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/srchctrl.h>
#include <wx/treectrl.h>
#include <wx/filepicker.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/notebook.h>
#include <wx/splitter.h>
#include <wx/frame.h>
#include "../libs/myapp.h"

class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};

class MainFrame : public wxFrame
{
	private:

	protected:
		wxSplitterWindow* MainSplitter;
		wxPanel* TreeViewPanel;
		wxStaticText* m_staticText1;
		wxSearchCtrl* TreeSearchbar;
		wxTreeCtrl* TreeView;
		wxFilePickerCtrl* TreeViewFilePicker;
		wxPanel* InfoPanel;
		wxSplitterWindow* InfoPanelSplitter;
		wxPanel* UpperInfoPanel;
		wxPanel* LowerInfoPanel;
		wxNotebook* NoteBook;
		wxPanel* m_panel_general;
		wxPanel* m_panel_heiarchy;
		wxPanel* m_panel_Habitat;
		wxPanel* m_panel_other;

	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("TotemUI"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1280,720 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrame();

		void MainSplitterOnIdle( wxIdleEvent& )
		{
			MainSplitter->SetSashPosition( 421 );
			MainSplitter->Disconnect( wxEVT_IDLE, wxIdleEventHandler( MainFrame::MainSplitterOnIdle ), NULL, this );
		}

		void InfoPanelSplitterOnIdle( wxIdleEvent& )
		{
			InfoPanelSplitter->SetSashPosition( 0 );
			InfoPanelSplitter->Disconnect( wxEVT_IDLE, wxIdleEventHandler( MainFrame::InfoPanelSplitterOnIdle ), NULL, this );
		}

};

wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    MainFrame *frame = new MainFrame(NULL);
    frame->Show( true );
    return true;
}

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* MainFrameSizer;
	MainFrameSizer = new wxBoxSizer( wxVERTICAL );

	MainSplitter = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_LIVE_UPDATE );
	MainSplitter->Connect( wxEVT_IDLE, wxIdleEventHandler( MainFrame::MainSplitterOnIdle ), NULL, this );

	TreeViewPanel = new wxPanel( MainSplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* TreeViewSizer;
	TreeViewSizer = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText( TreeViewPanel, wxID_ANY, wxT("La lista di animali"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	TreeViewSizer->Add( m_staticText1, 0, wxALL, 5 );

	TreeSearchbar = new wxSearchCtrl( TreeViewPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifndef __WXMAC__
	TreeSearchbar->ShowSearchButton( true );
	#endif
	TreeSearchbar->ShowCancelButton( false );
	TreeViewSizer->Add( TreeSearchbar, 0, wxALL|wxEXPAND, 5 );

	TreeView = new wxTreeCtrl( TreeViewPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE );
	
	TotemApplication::generateTree(TreeView,new TotemApplication::DataHandler);
	

	TreeViewSizer->Add( TreeView, 1, wxALL|wxEXPAND, 5 );

	TreeViewFilePicker = new wxFilePickerCtrl( TreeViewPanel, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
	TreeViewSizer->Add( TreeViewFilePicker, 0, wxALL|wxEXPAND, 5 );


	TreeViewPanel->SetSizer( TreeViewSizer );
	TreeViewPanel->Layout();
	TreeViewSizer->Fit( TreeViewPanel );
	InfoPanel = new wxPanel( MainSplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* InfoPanelSizer;
	InfoPanelSizer = new wxBoxSizer( wxVERTICAL );

	InfoPanelSplitter = new wxSplitterWindow( InfoPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_LIVE_UPDATE );
	InfoPanelSplitter->Connect( wxEVT_IDLE, wxIdleEventHandler( MainFrame::InfoPanelSplitterOnIdle ), NULL, this );

	UpperInfoPanel = new wxPanel( InfoPanelSplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* UpperInfoPanelSizer;
	UpperInfoPanelSizer = new wxBoxSizer( wxVERTICAL );


	UpperInfoPanel->SetSizer( UpperInfoPanelSizer );
	UpperInfoPanel->Layout();
	UpperInfoPanelSizer->Fit( UpperInfoPanel );
	LowerInfoPanel = new wxPanel( InfoPanelSplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* LowerInfoPanelSizer;
	LowerInfoPanelSizer = new wxBoxSizer( wxVERTICAL );

	NoteBook = new wxNotebook( LowerInfoPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel_general = new wxPanel( NoteBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* m_panel_general_sizer;
	m_panel_general_sizer = new wxBoxSizer( wxVERTICAL );


	m_panel_general->SetSizer( m_panel_general_sizer );
	m_panel_general->Layout();
	m_panel_general_sizer->Fit( m_panel_general );
	NoteBook->AddPage( m_panel_general, wxT("Informazioni Generali"), true );
	m_panel_heiarchy = new wxPanel( NoteBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* m_panel_heiarchy_sizer;
	m_panel_heiarchy_sizer = new wxBoxSizer( wxVERTICAL );


	m_panel_heiarchy->SetSizer( m_panel_heiarchy_sizer );
	m_panel_heiarchy->Layout();
	m_panel_heiarchy_sizer->Fit( m_panel_heiarchy );
	NoteBook->AddPage( m_panel_heiarchy, wxT("Gerarchia"), false );
	m_panel_Habitat = new wxPanel( NoteBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* m_panel_Habitat_sizer;
	m_panel_Habitat_sizer = new wxBoxSizer( wxVERTICAL );


	m_panel_Habitat->SetSizer( m_panel_Habitat_sizer );
	m_panel_Habitat->Layout();
	m_panel_Habitat_sizer->Fit( m_panel_Habitat );
	NoteBook->AddPage( m_panel_Habitat, wxT("Habitat"), false );
	m_panel_other = new wxPanel( NoteBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* m_panel_other_sizer;
	m_panel_other_sizer = new wxBoxSizer( wxVERTICAL );


	m_panel_other->SetSizer( m_panel_other_sizer );
	m_panel_other->Layout();
	m_panel_other_sizer->Fit( m_panel_other );
	NoteBook->AddPage( m_panel_other, wxT("Altro"), false );

	LowerInfoPanelSizer->Add( NoteBook, 1, wxEXPAND | wxALL, 5 );


	LowerInfoPanel->SetSizer( LowerInfoPanelSizer );
	LowerInfoPanel->Layout();
	LowerInfoPanelSizer->Fit( LowerInfoPanel );
	InfoPanelSplitter->SplitHorizontally( UpperInfoPanel, LowerInfoPanel, 0 );
	InfoPanelSizer->Add( InfoPanelSplitter, 1, wxEXPAND, 5 );


	InfoPanel->SetSizer( InfoPanelSizer );
	InfoPanel->Layout();
	InfoPanelSizer->Fit( InfoPanel );
	MainSplitter->SplitVertically( TreeViewPanel, InfoPanel, 421 );
	MainFrameSizer->Add( MainSplitter, 1, wxEXPAND, 5 );


	this->SetSizer( MainFrameSizer );
	this->Layout();

	this->Centre( wxBOTH );
}

MainFrame::~MainFrame() {}
