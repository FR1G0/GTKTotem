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
		TotemApplication::generateTree(this->wxTree_Animali,new TotemApplication::DataHandler);
	}
	protected:
	void TotemSetup() 
	{ 
		setupTree();
		return;
	}
	void newfileLoaded( wxFileDirPickerEvent& event ) 
	{
		setImage("assets/leone.jpg"); 
	}
	public:
	TotemUI(int* pointer) : TotemAPP::TotemAPP(NULL) {TotemSetup();};
	
	//setimage è una procedura per inserire una nuova immagine nella zona immagine
	void setImage(std::string image_path)
	{
		this->wxBitMap_immagine->SetBitmap(wxBitmap(image_path, wxBITMAP_TYPE_ANY ));
	}
};

bool MyApp::OnInit()
{
    TotemUI *frame = new TotemUI(NULL);
    frame->Show( true );
    return true;
}


#include "../ui/WX_USER_INTERFACE.cpp"

