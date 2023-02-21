#include "wxincludes.hpp"

class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};

#include "../ui/WX_USER_INTERFACE.h"

wxIMPLEMENT_APP(MyApp);

class TotemUI : public TotemAPP
{
	private:
	void setupTree()
	{
		TotemApplication::generateTree(this->wxTree_Animali,TotemApplication::TotemData);
	}
	protected:
	void TotemSetup() 
	{
		setupTree();
		return;
	}
	virtual void EventDebugButton( wxCommandEvent& event ) { 
		std::string content = filestream::getFileContents("assets/text/lorem.txt");
		this->m_staticText8->SetLabel(wxConverter::string_to_wxString(content)); 
		
	}
	//nuovo file caricato 
	void newfileLoaded( wxFileDirPickerEvent& event ) 
	{
		setImage(wxConverter::wxString_to_string(event.GetPath()));
	}
	virtual void toggleAnimale( wxTreeEvent& event ) 
	{
		this->wxText_Titolo->SetLabel(
			wxConverter::string_to_wxString(TotemApplication::TotemData->treeMap[event.GetItem()])
		); 
	}
	public:
	TotemUI() : TotemAPP::TotemAPP(NULL) {TotemSetup();};
	
	//takes a the path of an image as (std::string) and places it inside the btiMap widget
	void setImage(std::string image_path) {this->wxBitMap_immagine->SetBitmap(wxBitmap(image_path, wxBITMAP_TYPE_ANY ));}
};

bool MyApp::OnInit()
{
    TotemUI *frame = new TotemUI();
    frame->Show( true );
    return true;
}


#include "../ui/WX_USER_INTERFACE.cpp"

