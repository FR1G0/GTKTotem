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
	public:
	TotemUI(int* pointer) : TotemAPP::TotemAPP(NULL) {TotemSetup();};
};

bool MyApp::OnInit()
{
    TotemUI *frame = new TotemUI(NULL);
    frame->Show( true );
    return true;
}


#include "../ui/WX_USER_INTERFACE.cpp"

