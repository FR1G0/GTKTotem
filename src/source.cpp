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
	virtual void EventDebugButton( wxCommandEvent& event ) 
	{
		setImage("assets/leone.jpg");
		this->wxHtmlWindow_Informazioni->LoadPage("data/Html/tigre.htm");
		std::string content = filestream::getFileContents("assets/text/lorem.txt");
	}
	//nuovo file caricato 
	void newfileLoaded( wxFileDirPickerEvent& event ) 
	{
		this->wxTree_Animali->DeleteAllItems();
		TotemApplication::TotemData->setup(wxConverter::wxString_to_string(event.GetPath()));
		TotemApplication::generateTree(this->wxTree_Animali,TotemApplication::TotemData);
		this->wxTree_Animali->ExpandAll();
		return;
	}
	virtual void toggleAnimale( wxTreeEvent& event ) 
	{
		//changes the title of the 
		this->wxText_Titolo->SetLabel(
			wxConverter::string_to_wxString(TotemApplication::TotemData->treeMap[event.GetItem()]->nome)
		); 
		TotemApplication::TotemData->treeMap[event.GetItem()]->treeActivated();
	}
	public:
	TotemUI() : TotemAPP::TotemAPP(NULL) {TotemSetup();};
	
	//takes a the path of an image as (std::string) and places it inside the btiMap widget
	void setImage(std::string image_path) {this->wxBitMap_immagine->SetBitmap(wxBitmap(image_path, wxBITMAP_TYPE_ANY ));}
};

bool MyApp::OnInit()
{
	//declaration
    TotemUI *frame = new TotemUI();

	//setup stage
	frame->SetTitle("[TOTEMUI] Progetto \"Totem Per zoo\" Rampazzo & Frigo");
	frame->SetIcon(*(new wxIcon("ico.png")));
	frame->CenterOnScreen(wxBOTH);
	
	//display 
	frame->Show( true );
    return true;
}


#include "../ui/WX_USER_INTERFACE.cpp"

