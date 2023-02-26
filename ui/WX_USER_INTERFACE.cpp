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
	wxTreeControlPanel_Sizer->Add( btn_ExpandTree, 1, wxALL|wxALIGN_CENTER_VERTICAL, 2 );

	btn_CollapseTree = new wxButton( wxTreeControlPanel, wxID_ANY, wxT("Crolla"), wxDefaultPosition, wxDefaultSize, 0 );
	wxTreeControlPanel_Sizer->Add( btn_CollapseTree, 0, wxALL|wxALIGN_CENTER_VERTICAL, 2 );


	wxTreeControlPanel->SetSizer( wxTreeControlPanel_Sizer );
	wxTreeControlPanel->Layout();
	wxTreeControlPanel_Sizer->Fit( wxTreeControlPanel );
	LeftPanel_Sizer->Add( wxTreeControlPanel, 0, wxEXPAND | wxALL, 2 );

	wxTree_Animali = new wxTreeCtrl( LeftPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE|wxTR_FULL_ROW_HIGHLIGHT );
	wxTree_Animali->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );

	LeftPanel_Sizer->Add( wxTree_Animali, 1, wxALL|wxEXPAND, 0 );

	wxFilePicker_csv = new wxFilePickerCtrl( LeftPanel, wxID_ANY, wxEmptyString, wxT("Selezionare un file che contiene le informazioni per gli animali"), wxT("*.*"), wxDefaultPosition, wxSize( -1,-1 ), wxFLP_DEFAULT_STYLE );
	LeftPanel_Sizer->Add( wxFilePicker_csv, 0, wxALL|wxEXPAND, 2 );


	LeftPanel->SetSizer( LeftPanel_Sizer );
	LeftPanel->Layout();
	LeftPanel_Sizer->Fit( LeftPanel );
	RightPanel = new wxPanel( Main_Splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* RightPanelSizer;
	RightPanelSizer = new wxBoxSizer( wxHORIZONTAL );

	RightPanel_Splitter = new wxSplitterWindow( RightPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_LIVE_UPDATE );
	RightPanel_Splitter->Connect( wxEVT_IDLE, wxIdleEventHandler( TotemAPP::RightPanel_SplitterOnIdle ), NULL, this );

	RightBottomPanel = new wxPanel( RightPanel_Splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* RightBottomPanel_Sizer;
	RightBottomPanel_Sizer = new wxBoxSizer( wxVERTICAL );

	wxTextTitolo_Panel = new wxPanel( RightBottomPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* wxTextTitolo_Panel_Sizer;
	wxTextTitolo_Panel_Sizer = new wxBoxSizer( wxHORIZONTAL );

	wxText_Titolo = new wxStaticText( wxTextTitolo_Panel, wxID_ANY, wxT("NOME ANIMALE"), wxDefaultPosition, wxDefaultSize, 0 );
	wxText_Titolo->Wrap( -1 );
	wxText_Titolo->SetFont( wxFont( 20, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Sans") ) );
	wxText_Titolo->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	wxText_Titolo->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxTextTitolo_Panel_Sizer->Add( wxText_Titolo, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 0 );


	wxTextTitolo_Panel->SetSizer( wxTextTitolo_Panel_Sizer );
	wxTextTitolo_Panel->Layout();
	wxTextTitolo_Panel_Sizer->Fit( wxTextTitolo_Panel );
	RightBottomPanel_Sizer->Add( wxTextTitolo_Panel, 0, wxEXPAND | wxALL, 2 );

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
	wxNoteBookPanel->AddPage( wxPanel_Informazioni, wxT("Informazioni"), false );
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
	wxNoteBookPanel->AddPage( wxPanel_Habitat, wxT("Habitat Naturale"), true );

	RightBottomPanel_Sizer->Add( wxNoteBookPanel, 1, wxEXPAND|wxALL, 0 );


	RightBottomPanel->SetSizer( RightBottomPanel_Sizer );
	RightBottomPanel->Layout();
	RightBottomPanel_Sizer->Fit( RightBottomPanel );
	wxPane_Bitmap = new wxCollapsiblePane( RightPanel_Splitter, wxID_ANY, wxT("Immagine"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE|wxCP_NO_TLW_RESIZE );
	wxPane_Bitmap->Collapse( false );

	wxPane_Bitmap->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );

	wxBoxSizer* wxBitMap_immagine_Sizer;
	wxBitMap_immagine_Sizer = new wxBoxSizer( wxVERTICAL );

	wxBitMap_immagine = new wxStaticBitmap( wxPane_Bitmap->GetPane(), wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	wxBitMap_immagine_Sizer->Add( wxBitMap_immagine, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 0 );


	wxPane_Bitmap->GetPane()->SetSizer( wxBitMap_immagine_Sizer );
	wxPane_Bitmap->GetPane()->Layout();
	wxBitMap_immagine_Sizer->Fit( wxPane_Bitmap->GetPane() );
	RightPanel_Splitter->SplitHorizontally( RightBottomPanel, wxPane_Bitmap, 338 );
	RightPanelSizer->Add( RightPanel_Splitter, 1, wxEXPAND, 5 );


	RightPanel->SetSizer( RightPanelSizer );
	RightPanel->Layout();
	RightPanelSizer->Fit( RightPanel );
	Main_Splitter->SplitVertically( LeftPanel, RightPanel, 226 );
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

	wxMenuItem* wxMenuItem_Generate;
	wxMenuItem_Generate = new wxMenuItem( wxSubMenu_File, wxID_ANY, wxString( wxT("Genera Cartella") ) , wxEmptyString, wxITEM_NORMAL );
	wxSubMenu_File->Append( wxMenuItem_Generate );

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
	wxMenuItem* wxMenuItem_AggiungiAnimale;
	wxMenuItem_AggiungiAnimale = new wxMenuItem( wxMenu_Utente, wxID_ANY, wxString( wxT("Aggiungi Animale") ) , wxEmptyString, wxITEM_NORMAL );
	wxMenu_Utente->Append( wxMenuItem_AggiungiAnimale );

	MenuBar_TotemUI->Append( wxMenu_Utente, wxT("Gestione") );

	wxMenu_AIuto = new wxMenu();
	wxMenuItem* wxMenuItemAiuto;
	wxMenuItemAiuto = new wxMenuItem( wxMenu_AIuto, wxID_ANY, wxString( wxT("FinestraAiuto") ) , wxEmptyString, wxITEM_NORMAL );
	wxMenu_AIuto->Append( wxMenuItemAiuto );

	MenuBar_TotemUI->Append( wxMenu_AIuto, wxT("Aiuto") );

	this->SetMenuBar( MenuBar_TotemUI );


	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_ACTIVATE, wxActivateEventHandler( TotemAPP::TotemSetup ) );
	btn_ExpandTree->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TotemAPP::btn_ExpandTree_Clicked ), NULL, this );
	btn_CollapseTree->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TotemAPP::btn_CollapseTree_Clicked ), NULL, this );
	wxTree_Animali->Connect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( TotemAPP::toggleAnimale ), NULL, this );
	wxFilePicker_csv->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( TotemAPP::newfileLoaded ), NULL, this );
	wxSubMenu_File->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( TotemAPP::wxMenuItem_LoadFileEvent ), this, wxMenuItem_File->GetId());
	wxSubMenu_File->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( TotemAPP::wxMenuItem_GenerateEvent ), this, wxMenuItem_Generate->GetId());
	wxSubMenu_Debug->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( TotemAPP::EventDebugButton ), this, MenuItem_DebugButton->GetId());
	wxMenu_Utente->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( TotemAPP::MenuItem_Selected_Aggiungi ), this, wxMenuItem_AggiungiAnimale->GetId());
	wxMenu_AIuto->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( TotemAPP::wxMenuItemAiuto_Clicked ), this, wxMenuItemAiuto->GetId());
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

AggiungiAnimale::AggiungiAnimale( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* AggiungiAnimale_Sizer;
	AggiungiAnimale_Sizer = new wxBoxSizer( wxVERTICAL );

	Aggiungi_Disclaimer = new wxStaticText( this, wxID_ANY, wxT("l'animale verrà inserito all'interno del file .csv"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	Aggiungi_Disclaimer->Wrap( -1 );
	AggiungiAnimale_Sizer->Add( Aggiungi_Disclaimer, 0, wxALL|wxEXPAND, 5 );

	AggiungiAnimale_Panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* AggiungiAnimalePanel_Sizer;
	AggiungiAnimalePanel_Sizer = new wxBoxSizer( wxVERTICAL );

	aggiungiNome = new wxStaticText( AggiungiAnimale_Panel, wxID_ANY, wxT("Nome"), wxDefaultPosition, wxDefaultSize, 0 );
	aggiungiNome->Wrap( -1 );
	AggiungiAnimalePanel_Sizer->Add( aggiungiNome, 0, wxALL, 5 );

	Input_nuovoNome = new wxTextCtrl( AggiungiAnimale_Panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	AggiungiAnimalePanel_Sizer->Add( Input_nuovoNome, 0, wxALL|wxEXPAND, 5 );

	AggiungiCategoria = new wxStaticText( AggiungiAnimale_Panel, wxID_ANY, wxT("Categoria"), wxDefaultPosition, wxDefaultSize, 0 );
	AggiungiCategoria->Wrap( -1 );
	AggiungiAnimalePanel_Sizer->Add( AggiungiCategoria, 0, wxALL, 5 );

	Input_nuovaCategoria = new wxTextCtrl( AggiungiAnimale_Panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	AggiungiAnimalePanel_Sizer->Add( Input_nuovaCategoria, 0, wxALL|wxEXPAND, 5 );

	NuovoAnimaleSubmit = new wxButton( AggiungiAnimale_Panel, wxID_ANY, wxT("Conferma"), wxDefaultPosition, wxDefaultSize, 0 );
	AggiungiAnimalePanel_Sizer->Add( NuovoAnimaleSubmit, 0, wxALL|wxALIGN_RIGHT, 5 );


	AggiungiAnimale_Panel->SetSizer( AggiungiAnimalePanel_Sizer );
	AggiungiAnimale_Panel->Layout();
	AggiungiAnimalePanel_Sizer->Fit( AggiungiAnimale_Panel );
	AggiungiAnimale_Sizer->Add( AggiungiAnimale_Panel, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( AggiungiAnimale_Sizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	NuovoAnimaleSubmit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AggiungiAnimale::NuovoAnimaleSubmitClicked ), NULL, this );
}

AggiungiAnimale::~AggiungiAnimale()
{
	// Disconnect Events
	NuovoAnimaleSubmit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AggiungiAnimale::NuovoAnimaleSubmitClicked ), NULL, this );

}

Help::Help( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* Help_Sizer;
	Help_Sizer = new wxBoxSizer( wxVERTICAL );

	Help_Sizer->SetMinSize( wxSize( 720,400 ) );
	wxHtmlWindow_Help = new wxHtmlWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	Help_Sizer->Add( wxHtmlWindow_Help, 0, wxALL, 5 );


	this->SetSizer( Help_Sizer );
	this->Layout();
	Help_Sizer->Fit( this );

	this->Centre( wxBOTH );
}

Help::~Help()
{
}
