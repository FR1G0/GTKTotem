#include "wxincludes.hpp"

class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};

#include "../ui/WX_USER_INTERFACE.h"

wxIMPLEMENT_APP(MyApp);

class myForm : public AggiungiAnimale
{
	public : 
	myForm() : AggiungiAnimale::AggiungiAnimale(NULL) {};
	void NuovoAnimaleSubmitClicked( wxCommandEvent& event ) 
	{ 
		std::string 
			nome = wxConverter::wxString_to_string(this->Input_nuovoNome->GetLineText(0)),
			categoria = wxConverter::wxString_to_string(this->Input_nuovaCategoria->GetLineText(0));
		TotemApplication::AnimalData * nuovo = new TotemApplication::AnimalData(nome,categoria);
		nuovo->imageName = nome+".jpg";
		TotemApplication::insertNewAnimale(nuovo);
		this->Show(false);
	}	
};

class myHelp : public Help
{
	private : 
	void loadpage() {this->wxHtmlWindow_Help->LoadPage("data/help.html");}
	public : 
	myHelp() : Help::Help(NULL) {loadpage();}; 
};

class TotemUI : public TotemAPP
{
	private:
	myForm* aggiungiForm = new myForm();
	myHelp* HelpPage = new myHelp();
	protected:
	void setupTree() {TotemApplication::generateTree(this->wxTree_Animali,TotemApplication::TotemData);}
	void TotemSetup() 
	{
		setupTree();
		setImage("assets/githubLogo.png");
		TotemApplication::generatefolders();
		this->wxHtmlWindow_Informazioni->LoadPage("data/defaultinfo.html");
		return;
	}
	void EventDebugButton( wxCommandEvent& event ) 
	{
		setImage("data/esempio.jpg");
		this->wxHtmlWindow_Informazioni->LoadPage("data/defaultinfo.html");
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
		//get the addr of the animal
		TotemApplication::AnimalData* ref = TotemApplication::TotemData->treeMap[event.GetItem()];
		
		//change the layout
		setImage(ref->getCartella());
		this->wxText_Titolo->SetLabel( wxConverter::string_to_wxString(ref->nome) ); 
		this->wxHtmlWindow_Informazioni->LoadPage(ref->getInfo());
		this->wxHtmlWindow_Categoria->LoadPage(ref->getCategoria());
		this->wxHtmlWindow_Habitat_Naturale->LoadPage(ref->getHabitat());
	}
	
	void btn_ExpandTree_Clicked( wxCommandEvent& event ) { this->wxTree_Animali->ExpandAll(); }
	void btn_CollapseTree_Clicked( wxCommandEvent& event ) { this->wxTree_Animali->CollapseAll(); }
	
	void wxMenuItem_LoadFileEvent( wxCommandEvent& event ) { }
	void wxMenuItem_GenerateEvent( wxCommandEvent& event ) { TotemApplication::generatefolders(); }
	
	void MenuItem_Selected_Aggiungi( wxCommandEvent& event ) { aggiungiForm->Show(true); }
	void wxMenuItemAiuto_Clicked( wxCommandEvent& event )  { this->HelpPage->Show(true);return;	}
	public:
	TotemUI() : TotemAPP::TotemAPP(NULL) {TotemSetup();}; //overloaded ctor
	
	//takes a the path of an image as (std::string) and places it inside the btiMap widget
	void setImage(std::string image_path) 
	{
		this->wxBitMap_immagine->SetBitmap(wxBitmap(image_path, wxBITMAP_TYPE_ANY ));
		this->wxBitMap_immagine->Fit();
	}
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

