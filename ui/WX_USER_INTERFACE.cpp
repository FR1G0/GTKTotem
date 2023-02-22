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

	wxSearch = new wxSearchCtrl( LeftPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifndef __WXMAC__
	wxSearch->ShowSearchButton( true );
	#endif
	wxSearch->ShowCancelButton( false );
	LeftPanel_Sizer->Add( wxSearch, 0, wxALL|wxEXPAND, 5 );

	wxTree_Animali = new wxTreeCtrl( LeftPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE|wxTR_FULL_ROW_HIGHLIGHT );
	wxTree_Animali->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );

	LeftPanel_Sizer->Add( wxTree_Animali, 1, wxALL|wxEXPAND, 5 );

	wxFilePicker_csv = new wxFilePickerCtrl( LeftPanel, wxID_ANY, wxEmptyString, wxT("Selezionare un file che contiene le informazioni per gli animali"), wxT("*.*"), wxDefaultPosition, wxSize( -1,-1 ), wxFLP_DEFAULT_STYLE );
	LeftPanel_Sizer->Add( wxFilePicker_csv, 0, wxALL|wxEXPAND, 5 );

	DebugButton = new wxButton( LeftPanel, wxID_ANY, wxT("DebugButton"), wxDefaultPosition, wxSize( -1,20 ), 0 );
	LeftPanel_Sizer->Add( DebugButton, 0, wxALL|wxEXPAND, 5 );


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

	wxText_Titolo = new wxStaticText( RightTopPanel, wxID_ANY, wxT("NOME ANIMALE"), wxDefaultPosition, wxDefaultSize, 0 );
	wxText_Titolo->Wrap( -1 );
	wxText_Titolo->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Sans") ) );
	wxText_Titolo->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	wxText_Titolo->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	RightTopPanel_Sizer->Add( wxText_Titolo, 0, wxALL|wxEXPAND, 5 );

	wxBitMap_immagine = new wxStaticBitmap( RightTopPanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	RightTopPanel_Sizer->Add( wxBitMap_immagine, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );


	RightTopPanel->SetSizer( RightTopPanel_Sizer );
	RightTopPanel->Layout();
	RightTopPanel_Sizer->Fit( RightTopPanel );
	RightBottomPanel = new wxPanel( RightPanel_Splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* RightBottomPanel_Sizer;
	RightBottomPanel_Sizer = new wxBoxSizer( wxVERTICAL );

	wxNoteBookPanel = new wxNotebook( RightBottomPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	wxPanel_Informazioni = new wxPanel( wxNoteBookPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	wxHtmlWindow_Informazioni = new wxHtmlWindow( wxPanel_Informazioni, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	wxHtmlWindow_Informazioni->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	wxHtmlWindow_Informazioni->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer11->Add( wxHtmlWindow_Informazioni, 1, wxALL|wxEXPAND, 5 );


	wxPanel_Informazioni->SetSizer( bSizer11 );
	wxPanel_Informazioni->Layout();
	bSizer11->Fit( wxPanel_Informazioni );
	wxNoteBookPanel->AddPage( wxPanel_Informazioni, wxT("Informazioni"), true );
	wxPanel_Categoria = new wxPanel( wxNoteBookPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	wxHtmlWindow_Categoria = new wxHtmlWindow( wxPanel_Categoria, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	bSizer13->Add( wxHtmlWindow_Categoria, 0, wxALL, 5 );


	wxPanel_Categoria->SetSizer( bSizer13 );
	wxPanel_Categoria->Layout();
	bSizer13->Fit( wxPanel_Categoria );
	wxNoteBookPanel->AddPage( wxPanel_Categoria, wxT("Categoria"), false );
	wxPanel_Habitat = new wxPanel( wxNoteBookPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	wxHtmlWindow_Habitat_Naturale = new wxHtmlWindow( wxPanel_Habitat, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	bSizer14->Add( wxHtmlWindow_Habitat_Naturale, 0, wxALL, 5 );


	wxPanel_Habitat->SetSizer( bSizer14 );
	wxPanel_Habitat->Layout();
	bSizer14->Fit( wxPanel_Habitat );
	wxNoteBookPanel->AddPage( wxPanel_Habitat, wxT("Habitat Naturale"), false );
	wxPanel_Source = new wxPanel( wxNoteBookPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );


	wxPanel_Source->SetSizer( bSizer12 );
	wxPanel_Source->Layout();
	bSizer12->Fit( wxPanel_Source );
	wxNoteBookPanel->AddPage( wxPanel_Source, wxT("File Sorgenti"), false );

	RightBottomPanel_Sizer->Add( wxNoteBookPanel, 1, wxEXPAND | wxALL, 5 );


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
	wxMenu_File = new wxMenu();
	wxMenuItem* wxMenuItem_File;
	wxMenuItem_File = new wxMenuItem( wxMenu_File, wxID_ANY, wxString( wxT("Carica File") ) , wxEmptyString, wxITEM_NORMAL );
	wxMenu_File->Append( wxMenuItem_File );

	MenuBar_TotemUI->Append( wxMenu_File, wxT("File") );

	wxMenu_Utente = new wxMenu();
	wxMenuItem* wxMenuItem_User;
	wxMenuItem_User = new wxMenuItem( wxMenu_Utente, wxID_ANY, wxString( wxT("Utente") ) , wxEmptyString, wxITEM_NORMAL );
	wxMenu_Utente->Append( wxMenuItem_User );

	wxMenuItem* wxMenuItem_Admin;
	wxMenuItem_Admin = new wxMenuItem( wxMenu_Utente, wxID_ANY, wxString( wxT("Amministratore") ) , wxEmptyString, wxITEM_NORMAL );
	wxMenu_Utente->Append( wxMenuItem_Admin );

	MenuBar_TotemUI->Append( wxMenu_Utente, wxT("Utente") );

	this->SetMenuBar( MenuBar_TotemUI );


	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_ACTIVATE, wxActivateEventHandler( TotemAPP::TotemSetup ) );
	wxSearch->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( TotemAPP::searchbartyped ), NULL, this );
	wxTree_Animali->Connect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( TotemAPP::toggleAnimale ), NULL, this );
	wxFilePicker_csv->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( TotemAPP::newfileLoaded ), NULL, this );
	DebugButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TotemAPP::EventDebugButton ), NULL, this );
	wxMenu_Utente->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( TotemAPP::MenuItem_Selected_User ), this, wxMenuItem_User->GetId());
	wxMenu_Utente->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( TotemAPP::MenuItem_Selected_Admin ), this, wxMenuItem_Admin->GetId());
}

TotemAPP::~TotemAPP()
{
	// Disconnect Events
	this->Disconnect( wxEVT_ACTIVATE, wxActivateEventHandler( TotemAPP::TotemSetup ) );
	wxSearch->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( TotemAPP::searchbartyped ), NULL, this );
	wxTree_Animali->Disconnect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( TotemAPP::toggleAnimale ), NULL, this );
	wxFilePicker_csv->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( TotemAPP::newfileLoaded ), NULL, this );
	DebugButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TotemAPP::EventDebugButton ), NULL, this );

}
