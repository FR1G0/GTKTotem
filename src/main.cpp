#include <wx/wx.h>
#include <wx/wxprec.h>
#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/srchctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/treectrl.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/filepicker.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/splitter.h>
#include <wx/menu.h>
#include <wx/frame.h>


class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};

class FormFrame : public wxFrame
{
	private:

	protected:
		wxSplitterWindow* MainSplitter;
		wxPanel* TreeView;
		wxSearchCtrl* searchbar;
		wxPanel* treepannel;
		wxTreeCtrl* TreeView;
		wxFilePickerCtrl* filepicker;
		wxPanel* InfoPanel;
		wxSplitterWindow* DisplaySplitter;
		wxPanel* DisplayPannel;
		wxStaticBitmap* image;
		wxPanel* InfoPanel;
		wxStaticText* Title;
		wxStaticText* Information;
		wxMenuBar* MenuBar;
		wxMenu* FileExplorer;
		wxMenu* Impostazioni;
		wxMenu* ProgramMenu;
		wxMenu* InserisciMenu;
		wxMenu* Help;

	public:

		FormFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Totem UI - Joseph Frigo & Rampazzo Enrico"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 854,480 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FormFrame();

		void MainSplitterOnIdle( wxIdleEvent& )
		{
			MainSplitter->SetSashPosition( 247 );
			MainSplitter->Disconnect( wxEVT_IDLE, wxIdleEventHandler( FormFrame::MainSplitterOnIdle ), NULL, this );
		}

		void DisplaySplitterOnIdle( wxIdleEvent& )
		{
			DisplaySplitter->SetSashPosition( 395 );
			DisplaySplitter->Disconnect( wxEVT_IDLE, wxIdleEventHandler( FormFrame::DisplaySplitterOnIdle ), NULL, this );
		}

};

wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    Mainpage *frame = new Mainpage(NULL);
    frame->Show( true );
    return true;
}


FormFrame::FormFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* FormSizer;
	FormSizer = new wxBoxSizer( wxVERTICAL );

	MainSplitter = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxSP_3D|wxSP_LIVE_UPDATE );
	MainSplitter->Connect( wxEVT_IDLE, wxIdleEventHandler( FormFrame::MainSplitterOnIdle ), NULL, this );

	MainSplitter->SetBackgroundColour( wxColour( 49, 255, 0 ) );

	TreeView = new wxPanel( MainSplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	TreeView->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* SidebarSizer;
	SidebarSizer = new wxBoxSizer( wxVERTICAL );

	searchbar = new wxSearchCtrl( TreeView, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifndef __WXMAC__
	searchbar->ShowSearchButton( true );
	#endif
	searchbar->ShowCancelButton( false );
	SidebarSizer->Add( searchbar, 0, wxALL|wxEXPAND, 5 );

	treepannel = new wxPanel( TreeView, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	treepannel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );

	TreeView = new wxTreeCtrl( treepannel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE|wxHSCROLL );
	bSizer16->Add( TreeView, 1, wxALL|wxEXPAND, 5 );


	treepannel->SetSizer( bSizer16 );
	treepannel->Layout();
	bSizer16->Fit( treepannel );
	SidebarSizer->Add( treepannel, 1, wxEXPAND | wxALL, 5 );

	filepicker = new wxFilePickerCtrl( TreeView, wxID_ANY, wxEmptyString, wxT("Seleziona un file .csv "), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
	SidebarSizer->Add( filepicker, 0, wxALL|wxEXPAND, 5 );


	TreeView->SetSizer( SidebarSizer );
	TreeView->Layout();
	SidebarSizer->Fit( TreeView );
	InfoPanel = new wxPanel( MainSplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	InfoPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* InfoSizer;
	InfoSizer = new wxBoxSizer( wxVERTICAL );

	DisplaySplitter = new wxSplitterWindow( InfoPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_LIVE_UPDATE );
	DisplaySplitter->Connect( wxEVT_IDLE, wxIdleEventHandler( FormFrame::DisplaySplitterOnIdle ), NULL, this );

	DisplayPannel = new wxPanel( DisplaySplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* DisplaySizer;
	DisplaySizer = new wxBoxSizer( wxVERTICAL );

	image = new wxStaticBitmap( DisplayPannel, wxID_ANY, wxBitmap( wxT(""), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	DisplaySizer->Add( image, 0, wxALL|wxEXPAND, 5 );


	DisplayPannel->SetSizer( DisplaySizer );
	DisplayPannel->Layout();
	DisplaySizer->Fit( DisplayPannel );
	InfoPanel = new wxPanel( DisplaySplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* InfoSizer;
	InfoSizer = new wxBoxSizer( wxVERTICAL );

	Title = new wxStaticText( InfoPanel, wxID_ANY, wxT("NOME"), wxDefaultPosition, wxDefaultSize, 0 );
	Title->Wrap( -1 );
	InfoSizer->Add( Title, 0, wxALL, 5 );

	Information = new wxStaticText( InfoPanel, wxID_ANY, wxT("Altro"), wxDefaultPosition, wxDefaultSize, 0 );
	Information->SetLabelMarkup( wxT("Altro") );
	Information->Wrap( -1 );
	InfoSizer->Add( Information, 0, wxALL, 5 );


	InfoPanel->SetSizer( InfoSizer );
	InfoPanel->Layout();
	InfoSizer->Fit( InfoPanel );
	DisplaySplitter->SplitHorizontally( DisplayPannel, InfoPanel, 395 );
	InfoSizer->Add( DisplaySplitter, 1, wxEXPAND, 5 );


	InfoPanel->SetSizer( InfoSizer );
	InfoPanel->Layout();
	InfoSizer->Fit( InfoPanel );
	MainSplitter->SplitVertically( TreeView, InfoPanel, 247 );
	FormSizer->Add( MainSplitter, 1, wxEXPAND, 5 );


	this->SetSizer( FormSizer );
	this->Layout();
	MenuBar = new wxMenuBar( 0 );
	FileExplorer = new wxMenu();
	wxMenuItem* caricafile;
	caricafile = new wxMenuItem( FileExplorer, wxID_ANY, wxString( wxT("Carica File") ) , wxEmptyString, wxITEM_NORMAL );
	FileExplorer->Append( caricafile );

	MenuBar->Append( FileExplorer, wxT("File") );

	Impostazioni = new wxMenu();
	wxMenuItem* Impostazione;
	Impostazione = new wxMenuItem( Impostazioni, wxID_ANY, wxString( wxT("Da Fare") ) , wxEmptyString, wxITEM_NORMAL );
	Impostazioni->Append( Impostazione );

	MenuBar->Append( Impostazioni, wxT("Impostazioni") );

	ProgramMenu = new wxMenu();
	wxMenuItem* TerminateButton;
	TerminateButton = new wxMenuItem( ProgramMenu, wxID_ANY, wxString( wxT("Termina") ) , wxEmptyString, wxITEM_NORMAL );
	ProgramMenu->Append( TerminateButton );

	wxMenuItem* RefreshMenu;
	RefreshMenu = new wxMenuItem( ProgramMenu, wxID_ANY, wxString( wxT("Aggiorna") ) , wxEmptyString, wxITEM_NORMAL );
	ProgramMenu->Append( RefreshMenu );

	ProgramMenu->AppendSeparator();

	InserisciMenu = new wxMenu();
	wxMenuItem* InserisciMenuItem = new wxMenuItem( ProgramMenu, wxID_ANY, wxT("Animali"), wxEmptyString, wxITEM_NORMAL, InserisciMenu );
	wxMenuItem* animaliinsertmenu;
	animaliinsertmenu = new wxMenuItem( InserisciMenu, wxID_ANY, wxString( wxT("Inserisci") ) , wxEmptyString, wxITEM_NORMAL );
	InserisciMenu->Append( animaliinsertmenu );

	wxMenuItem* eliminamenu;
	eliminamenu = new wxMenuItem( InserisciMenu, wxID_ANY, wxString( wxT("Elimina") ) , wxEmptyString, wxITEM_NORMAL );
	InserisciMenu->Append( eliminamenu );

	wxMenuItem* modificamenu;
	modificamenu = new wxMenuItem( InserisciMenu, wxID_ANY, wxString( wxT("Modifica") ) , wxEmptyString, wxITEM_NORMAL );
	InserisciMenu->Append( modificamenu );

	ProgramMenu->Append( InserisciMenuItem );

	ProgramMenu->AppendSeparator();

	wxMenuItem* ExitMenu;
	ExitMenu = new wxMenuItem( ProgramMenu, wxID_ANY, wxString( wxT("Chiudi") ) , wxEmptyString, wxITEM_NORMAL );
	ProgramMenu->Append( ExitMenu );

	MenuBar->Append( ProgramMenu, wxT("Programma") );

	Help = new wxMenu();
	MenuBar->Append( Help, wxT("Aiuto") );

	this->SetMenuBar( MenuBar );


	this->Centre( wxBOTH );
}

FormFrame::~FormFrame() {}
