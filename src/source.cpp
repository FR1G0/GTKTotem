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
	protected:
	void setupTree()
	{
		TotemApplication::generateTree(this->wxTree_Animali,TotemApplication::TotemData);
	}
	void TotemSetup() 
	{
		setupTree();
		setImage("assets/githubLogo.png");
		return;
	}
	void EventDebugButton( wxCommandEvent& event ) 
	{
		setImage("data/esempio.jpg");
		this->wxHtmlWindow_Informazioni->LoadPage("data/CartellaTigre/Tigre_info.html");
		std::string content = filestream::getFileContents("assets/text/lorem.txt");
	}
	void newfileLoaded( wxFileDirPickerEvent& event ) 
	{
		this->wxTree_Animali->DeleteAllItems();
		TotemApplication::TotemData->setup(wxConverter::wxString_to_string(event.GetPath()));
		TotemApplication::generateTree(this->wxTree_Animali,TotemApplication::TotemData);
		this->wxTree_Animali->ExpandAll();
		return;
	}
	void toggleAnimale( wxTreeEvent& event ) 
	{
		//changes the title of the 
		this->wxText_Titolo->SetLabel(
			wxConverter::string_to_wxString(TotemApplication::TotemData->treeMap[event.GetItem()]->nome)
		); 
		setImage(TotemApplication::TotemData->treeMap[event.GetItem()]->getCartella());
		this->wxHtmlWindow_Informazioni->LoadPage(TotemApplication::TotemData->treeMap[event.GetItem()]->getInfo());
	}
	void MenuItem_Selected_Aggiungi( wxCommandEvent& event ) { }
	
	void btn_ExpandTree_Clicked( wxCommandEvent& event ) { this->wxTree_Animali->ExpandAll(); }
	void btn_CollapseTree_Clicked( wxCommandEvent& event ) { this->wxTree_Animali->CollapseAll(); }
	public:
	TotemUI() : TotemAPP::TotemAPP(NULL) {TotemSetup();}; //overloaded ctor
	
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

