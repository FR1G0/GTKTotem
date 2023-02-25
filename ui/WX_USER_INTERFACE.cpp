///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-254-gc2ef7767)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "WX_USER_INTERFACE.h"

///////////////////////////////////////////////////////////////////////////

TotemAPP::TotemAPP( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* TotemAPP_BoxSizer;
	TotemAPP_BoxSizer = new wxBoxSizer( wxVERTICAL );

	Main_Splitter = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_LIVE_UPDATE );
	Main_Splitter->Connect( wxEVT_IDLE, wxIdleEventHandler( TotemAPP::Main_SplitterOnIdle ), NULL, this );

	LeftPanel = new wxPanel( Main_Splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* LeftPanel_Sizer;
	LeftPanel_Sizer = new wxBoxSizer( wxVERTICAL );

	wxTreeControlPanel = new wxPanel( LeftPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* wxTreeControlPanel_Sizer;
	wxTreeControlPanel_Sizer = new wxBoxSizer( wxHORIZONTAL );

	btn_ExpandTree = new wxButton( wxTreeControlPanel, wxID_ANY, wxT("Espandi"), wxDefaultPosition, wxDefaultSize, 0 );
	wxTreeControlPanel_Sizer->Add( btn_ExpandTree, 1, wxALL, 5 );

	btn_CollapseTree = new wxButton( wxTreeControlPanel, wxID_ANY, wxT("Crolla"), wxDefaultPosition, wxDefaultSize, 0 );
	wxTreeControlPanel_Sizer->Add( btn_CollapseTree, 0, wxALL, 5 );


	wxTreeControlPanel->SetSizer( wxTreeControlPanel_Sizer );
	wxTreeControlPanel->Layout();
	wxTreeControlPanel_Sizer->Fit( wxTreeControlPanel );
	LeftPanel_Sizer->Add( wxTreeControlPanel, 0, wxEXPAND | wxALL, 5 );

	wxTree_Animali = new wxTreeCtrl( LeftPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE|wxTR_FULL_ROW_HIGHLIGHT );
	wxTree_Animali->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );

	LeftPanel_Sizer->Add( wxTree_Animali, 1, wxALL|wxEXPAND, 5 );

	wxFilePicker_csv = new wxFilePickerCtrl( LeftPanel, wxID_ANY, wxEmptyString, wxT("Selezionare un file che contiene le informazioni per gli animali"), wxT("*.*"), wxDefaultPosition, wxSize( -1,-1 ), wxFLP_DEFAULT_STYLE );
	LeftPanel_Sizer->Add( wxFilePicker_csv, 0, wxALL|wxEXPAND, 5 );


	LeftPanel->SetSizer( LeftPanel_Sizer );
	LeftPanel->Layout();
	LeftPanel_Sizer->Fit( LeftPanel );
	RightPanel = new wxPanel( Main_Splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* RightPanelSizer;
	RightPanelSizer = new wxBoxSizer( wxHORIZONTAL );

	RightPanel_Splitter = new wxSplitterWindow( RightPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_LIVE_UPDATE );
	RightPanel_Splitter->Connect( wxEVT_IDLE, wxIdleEventHandler( TotemAPP::RightPanel_SplitterOnIdle ), NULL, this );

	RightTopPanel = new wxPanel( RightPanel_Splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* RightTopPanel_Sizer;
	RightTopPanel_Sizer = new wxBoxSizer( wxVERTICAL );

	wxBitMap_immagine = new wxStaticBitmap( RightTopPanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	RightTopPanel_Sizer->Add( wxBitMap_immagine, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	RightTopPanel->SetSizer( RightTopPanel_Sizer );
	RightTopPanel->Layout();
	RightTopPanel_Sizer->Fit( RightTopPanel );
	RightBottomPanel = new wxPanel( RightPanel_Splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* RightBottomPanel_Sizer;
	RightBottomPanel_Sizer = new wxBoxSizer( wxVERTICAL );

	wxText_Titolo = new wxStaticText( RightBottomPanel, wxID_ANY, wxT("NOME ANIMALE"), wxDefaultPosition, wxDefaultSize, 0 );
	wxText_Titolo->Wrap( -1 );
	wxText_Titolo->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Sans") ) );
	wxText_Titolo->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	wxText_Titolo->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	RightBottomPanel_Sizer->Add( wxText_Titolo, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxNoteBookPanel = new wxNotebook( RightBottomPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	wxPanel_Informazioni = new wxPanel( wxNoteBookPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* wxBoxSizer_Note_Informazioni;
	wxBoxSizer_Note_Informazioni = new wxBoxSizer( wxVERTICAL );

	wxHtmlWindow_Informazioni = new wxHtmlWindow( wxPanel_Informazioni, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	wxHtmlWindow_Informazioni->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	wxHtmlWindow_Informazioni->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer_Note_Informazioni->Add( wxHtmlWindow_Informazioni, 1, wxALL|wxEXPAND, 5 );


	wxPanel_Informazioni->SetSizer( wxBoxSizer_Note_Informazioni );
	wxPanel_Informazioni->Layout();
	wxBoxSizer_Note_Informazioni->Fit( wxPanel_Informazioni );
	wxNoteBookPanel->AddPage( wxPanel_Informazioni, wxT("Informazioni"), true );
	wxPanel_Categoria = new wxPanel( wxNoteBookPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* wxBoxSizer_Note_Categoria;
	wxBoxSizer_Note_Categoria = new wxBoxSizer( wxVERTICAL );

	wxHtmlWindow_Categoria = new wxHtmlWindow( wxPanel_Categoria, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	wxBoxSizer_Note_Categoria->Add( wxHtmlWindow_Categoria, 1, wxALL|wxEXPAND, 5 );


	wxPanel_Categoria->SetSizer( wxBoxSizer_Note_Categoria );
	wxPanel_Categoria->Layout();
	wxBoxSizer_Note_Categoria->Fit( wxPanel_Categoria );
	wxNoteBookPanel->AddPage( wxPanel_Categoria, wxT("Categoria"), false );
	wxPanel_Habitat = new wxPanel( wxNoteBookPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* wxBoxSizer_Note_Habitat;
	wxBoxSizer_Note_Habitat = new wxBoxSizer( wxVERTICAL );

	wxHtmlWindow_Habitat_Naturale = new wxHtmlWindow( wxPanel_Habitat, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	wxBoxSizer_Note_Habitat->Add( wxHtmlWindow_Habitat_Naturale, 1, wxALL|wxEXPAND, 5 );


	wxPanel_Habitat->SetSizer( wxBoxSizer_Note_Habitat );
	wxPanel_Habitat->Layout();
	wxBoxSizer_Note_Habitat->Fit( wxPanel_Habitat );
	wxNoteBookPanel->AddPage( wxPanel_Habitat, wxT("Habitat Naturale"), false );
	wxPanel_Altro = new wxPanel( wxNoteBookPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* wxBoxSizer_Note_Altro;
	wxBoxSizer_Note_Altro = new wxBoxSizer( wxVERTICAL );

	wxHtmlWindow_Altro = new wxHtmlWindow( wxPanel_Altro, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	wxBoxSizer_Note_Altro->Add( wxHtmlWindow_Altro, 1, wxALL|wxEXPAND, 5 );


	wxPanel_Altro->SetSizer( wxBoxSizer_Note_Altro );
	wxPanel_Altro->Layout();
	wxBoxSizer_Note_Altro->Fit( wxPanel_Altro );
	wxNoteBookPanel->AddPage( wxPanel_Altro, wxT("Wikipedia"), false );

	RightBottomPanel_Sizer->Add( wxNoteBookPanel, 1, wxEXPAND|wxALL, 5 );


	RightBottomPanel->SetSizer( RightBottomPanel_Sizer );
	RightBottomPanel->Layout();
	RightBottomPanel_Sizer->Fit( RightBottomPanel );
	RightPanel_Splitter->SplitHorizontally( RightTopPanel, RightBottomPanel, 338 );
	RightPanelSizer->Add( RightPanel_Splitter, 1, wxEXPAND, 5 );


	RightPanel->SetSizer( RightPanelSizer );
	RightPanel->Layout();
	RightPanelSizer->Fit( RightPanel );
	Main_Splitter->SplitVertically( LeftPanel, RightPanel, 214 );
	TotemAPP_BoxSizer->Add( Main_Splitter, 1, wxEXPAND, 5 );


	this->SetSizer( TotemAPP_BoxSizer );
	this->Layout();
	MenuBar_TotemUI = new wxMenuBar( 0 );
	wxMenu_Program = new wxMenu();
	wxSubMenu_File = new wxMenu();
	wxMenuItem* wxSubMenu_FileItem = new wxMenuItem( wxMenu_Program, wxID_ANY, wxT("File"), wxEmptyString, wxITEM_NORMAL, wxSubMenu_File );
	wxMenuItem* wxMenuItem_File;
	wxMenuItem_File = new wxMenuItem( wxSubMenu_File, wxID_ANY, wxString( wxT("Carica File") ) , wxEmptyString, wxITEM_NORMAL );
	wxSubMenu_File->Append( wxMenuItem_File );

	wxMenu_Program->Append( wxSubMenu_FileItem );

	wxMenu_Program->AppendSeparator();

	wxSubMenu_Debug = new wxMenu();
	wxMenuItem* wxSubMenu_DebugItem = new wxMenuItem( wxMenu_Program, wxID_ANY, wxT("Debug"), wxEmptyString, wxITEM_NORMAL, wxSubMenu_Debug );
	wxMenuItem* MenuItem_DebugButton;
	MenuItem_DebugButton = new wxMenuItem( wxSubMenu_Debug, wxID_ANY, wxString( wxT("Debug Event") ) , wxEmptyString, wxITEM_NORMAL );
	wxSubMenu_Debug->Append( MenuItem_DebugButton );

	wxMenu_Program->Append( wxSubMenu_DebugItem );

	MenuBar_TotemUI->Append( wxMenu_Program, wxT("Programma") );

	wxMenu_Utente = new wxMenu();
	wxMenuItem* wxMenuItem_EliminaAnimale;
	wxMenuItem_EliminaAnimale = new wxMenuItem( wxMenu_Utente, wxID_ANY, wxString( wxT("Elimina Animale") ) , wxEmptyString, wxITEM_NORMAL );
	wxMenu_Utente->Append( wxMenuItem_EliminaAnimale );

	wxMenuItem* wxMenuItem_AggiungiAnimale;
	wxMenuItem_AggiungiAnimale = new wxMenuItem( wxMenu_Utente, wxID_ANY, wxString( wxT("Aggiungi Animale") ) , wxEmptyString, wxITEM_NORMAL );
	wxMenu_Utente->Append( wxMenuItem_AggiungiAnimale );

	MenuBar_TotemUI->Append( wxMenu_Utente, wxT("Gestione") );

	this->SetMenuBar( MenuBar_TotemUI );


	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_ACTIVATE, wxActivateEventHandler( TotemAPP::TotemSetup ) );
	btn_ExpandTree->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TotemAPP::btn_ExpandTree_Clicked ), NULL, this );
	btn_CollapseTree->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TotemAPP::btn_CollapseTree_Clicked ), NULL, this );
	wxTree_Animali->Connect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( TotemAPP::toggleAnimale ), NULL, this );
	wxFilePicker_csv->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( TotemAPP::newfileLoaded ), NULL, this );
	wxSubMenu_Debug->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( TotemAPP::EventDebugButton ), this, MenuItem_DebugButton->GetId());
	wxMenu_Utente->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( TotemAPP::MenuItem_Selected_User ), this, wxMenuItem_EliminaAnimale->GetId());
	wxMenu_Utente->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( TotemAPP::MenuItem_Selected_Aggiungi ), this, wxMenuItem_AggiungiAnimale->GetId());
}

TotemAPP::~TotemAPP()
{
	// Disconnect Events
	this->Disconnect( wxEVT_ACTIVATE, wxActivateEventHandler( TotemAPP::TotemSetup ) );
	btn_ExpandTree->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TotemAPP::btn_ExpandTree_Clicked ), NULL, this );
	btn_CollapseTree->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TotemAPP::btn_CollapseTree_Clicked ), NULL, this );
	wxTree_Animali->Disconnect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( TotemAPP::toggleAnimale ), NULL, this );
	wxFilePicker_csv->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( TotemAPP::newfileLoaded ), NULL, this );

}
