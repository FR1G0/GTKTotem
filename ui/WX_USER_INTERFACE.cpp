///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-254-gc2ef7767)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "WX_USER_INTERFACE.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_splitter1 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_LIVE_UPDATE );
	m_splitter1->Connect( wxEVT_IDLE, wxIdleEventHandler( MyFrame1::m_splitter1OnIdle ), NULL, this );

	m_panel1 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_searchCtrl1 = new wxSearchCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifndef __WXMAC__
	m_searchCtrl1->ShowSearchButton( true );
	#endif
	m_searchCtrl1->ShowCancelButton( false );
	bSizer2->Add( m_searchCtrl1, 0, wxALL|wxEXPAND, 5 );

	m_treeCtrl1 = new wxTreeCtrl( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE|wxTR_FULL_ROW_HIGHLIGHT );
	bSizer2->Add( m_treeCtrl1, 1, wxALL|wxEXPAND, 5 );

	m_filePicker1 = new wxFilePickerCtrl( m_panel1, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
	bSizer2->Add( m_filePicker1, 0, wxALL|wxEXPAND, 5 );


	m_panel1->SetSizer( bSizer2 );
	m_panel1->Layout();
	bSizer2->Fit( m_panel1 );
	m_panel2 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_splitter3 = new wxSplitterWindow( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_LIVE_UPDATE );
	m_splitter3->Connect( wxEVT_IDLE, wxIdleEventHandler( MyFrame1::m_splitter3OnIdle ), NULL, this );

	m_panel12 = new wxPanel( m_splitter3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	m_staticText2 = new wxStaticText( m_panel12, wxID_ANY, wxT("NOME ANIMALE"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer10->Add( m_staticText2, 0, wxALL|wxEXPAND, 5 );

	m_bitmap1 = new wxStaticBitmap( m_panel12, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_bitmap1, 1, wxALL|wxEXPAND, 5 );


	m_panel12->SetSizer( bSizer10 );
	m_panel12->Layout();
	bSizer10->Fit( m_panel12 );
	m_panel13 = new wxPanel( m_splitter3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	m_notebook6 = new wxNotebook( m_panel13, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel14 = new wxPanel( m_notebook6, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	m_staticText8 = new wxStaticText( m_panel14, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer11->Add( m_staticText8, 1, wxALL|wxEXPAND, 5 );


	m_panel14->SetSizer( bSizer11 );
	m_panel14->Layout();
	bSizer11->Fit( m_panel14 );
	m_notebook6->AddPage( m_panel14, wxT("Informazioni"), false );
	m_panel16 = new wxPanel( m_notebook6, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	m_staticText9 = new wxStaticText( m_panel16, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer13->Add( m_staticText9, 1, wxALL|wxEXPAND, 5 );


	m_panel16->SetSizer( bSizer13 );
	m_panel16->Layout();
	bSizer13->Fit( m_panel16 );
	m_notebook6->AddPage( m_panel16, wxT("Categoria"), false );
	m_panel17 = new wxPanel( m_notebook6, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_staticText10 = new wxStaticText( m_panel17, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer14->Add( m_staticText10, 1, wxALL|wxEXPAND, 5 );


	m_panel17->SetSizer( bSizer14 );
	m_panel17->Layout();
	bSizer14->Fit( m_panel17 );
	m_notebook6->AddPage( m_panel17, wxT("Habitat Naturale"), false );
	m_panel15 = new wxPanel( m_notebook6, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );


	m_panel15->SetSizer( bSizer12 );
	m_panel15->Layout();
	bSizer12->Fit( m_panel15 );
	m_notebook6->AddPage( m_panel15, wxT("File Sorgenti"), true );

	bSizer9->Add( m_notebook6, 1, wxEXPAND | wxALL, 5 );


	m_panel13->SetSizer( bSizer9 );
	m_panel13->Layout();
	bSizer9->Fit( m_panel13 );
	m_splitter3->SplitHorizontally( m_panel12, m_panel13, 0 );
	bSizer8->Add( m_splitter3, 1, wxEXPAND, 5 );


	m_panel2->SetSizer( bSizer8 );
	m_panel2->Layout();
	bSizer8->Fit( m_panel2 );
	m_splitter1->SplitVertically( m_panel1, m_panel2, 214 );
	bSizer1->Add( m_splitter1, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_searchCtrl1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::searchbartyped ), NULL, this );
	m_treeCtrl1->Connect( wxEVT_COMMAND_TREE_GET_INFO, wxTreeEventHandler( MyFrame1::toggleAnimale ), NULL, this );
	m_filePicker1->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MyFrame1::newfileLoaded ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	m_searchCtrl1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::searchbartyped ), NULL, this );
	m_treeCtrl1->Disconnect( wxEVT_COMMAND_TREE_GET_INFO, wxTreeEventHandler( MyFrame1::toggleAnimale ), NULL, this );
	m_filePicker1->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MyFrame1::newfileLoaded ), NULL, this );

}
