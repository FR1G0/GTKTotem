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
	LeftPanel_Sizer->Add( wxTree_Animali, 1, wxALL|wxEXPAND, 5 );
	

	wxFilePicker_csv = new wxFilePickerCtrl( LeftPanel, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
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

	wxText_Titolo = new wxStaticText( RightTopPanel, wxID_ANY, wxT("NOME ANIMALE"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	wxText_Titolo->Wrap( -1 );
	wxText_Titolo->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	RightTopPanel_Sizer->Add( wxText_Titolo, 0, wxALL|wxEXPAND, 5 );

	wxBitMap_immagine = new wxStaticBitmap( RightTopPanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	RightTopPanel_Sizer->Add( wxBitMap_immagine, 1, wxALL|wxEXPAND, 5 );


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

	m_staticText8 = new wxStaticText( wxPanel_Informazioni, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer11->Add( m_staticText8, 1, wxALL|wxEXPAND, 5 );


	wxPanel_Informazioni->SetSizer( bSizer11 );
	wxPanel_Informazioni->Layout();
	bSizer11->Fit( wxPanel_Informazioni );
	wxNoteBookPanel->AddPage( wxPanel_Informazioni, wxT("Informazioni"), false );
	wxPanel_Categoria = new wxPanel( wxNoteBookPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	m_staticText9 = new wxStaticText( wxPanel_Categoria, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer13->Add( m_staticText9, 1, wxALL|wxEXPAND, 5 );


	wxPanel_Categoria->SetSizer( bSizer13 );
	wxPanel_Categoria->Layout();
	bSizer13->Fit( wxPanel_Categoria );
	wxNoteBookPanel->AddPage( wxPanel_Categoria, wxT("Categoria"), false );
	wxPanel_Habitat = new wxPanel( wxNoteBookPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_staticText10 = new wxStaticText( wxPanel_Habitat, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer14->Add( m_staticText10, 1, wxALL|wxEXPAND, 5 );


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
	wxNoteBookPanel->AddPage( wxPanel_Source, wxT("File Sorgenti"), true );

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

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_ACTIVATE, wxActivateEventHandler( TotemAPP::TotemSetup ) );
	wxSearch->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( TotemAPP::searchbartyped ), NULL, this );
	wxTree_Animali->Connect( wxEVT_COMMAND_TREE_GET_INFO, wxTreeEventHandler( TotemAPP::toggleAnimale ), NULL, this );
	wxFilePicker_csv->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( TotemAPP::newfileLoaded ), NULL, this );
}

TotemAPP::~TotemAPP()
{
	// Disconnect Events
	this->Disconnect( wxEVT_ACTIVATE, wxActivateEventHandler( TotemAPP::TotemSetup ) );
	wxSearch->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( TotemAPP::searchbartyped ), NULL, this );
	wxTree_Animali->Disconnect( wxEVT_COMMAND_TREE_GET_INFO, wxTreeEventHandler( TotemAPP::toggleAnimale ), NULL, this );
	wxFilePicker_csv->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( TotemAPP::newfileLoaded ), NULL, this );

}
