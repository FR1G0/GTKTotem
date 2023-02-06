///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-254-gc2ef7767)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////
#include<wx-3.0/wx/wx.h>


#include "../libs/myapp.h"

///////////////////////////////////////////////////////////////////////////


Mainpage::Mainpage( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	Title = new wxStaticText( this, wxID_ANY, wxT("Totem Zoo Per Animali"), wxDefaultPosition, wxDefaultSize, 0 );
	Title->Wrap( -1 );
	bSizer1->Add( Title, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_button1 = new wxButton( this, wxID_ANY, wxT("Sfoglia Animali"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_button1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_button2 = new wxButton( this, wxID_ANY, wxT("Inserisci"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_button2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_button3 = new wxButton( this, wxID_ANY, wxT("Esci"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_button3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );
}

Mainpage::~Mainpage()
{
}

Browse::Browse( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* Browse;
	Browse = new wxBoxSizer( wxVERTICAL );

	m_treeCtrl1 = new wxTreeCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE );
	Browse->Add( m_treeCtrl1, 1, wxALL, 5 );


	this->SetSizer( Browse );
	this->Layout();

	this->Centre( wxBOTH );
}

Browse::~Browse()
{
}

Visualize::Visualize( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );


	this->Centre( wxBOTH );
}

Visualize::~Visualize()
{
}

Insert::Insert( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );


	this->Centre( wxBOTH );
}

Insert::~Insert()
{
}
