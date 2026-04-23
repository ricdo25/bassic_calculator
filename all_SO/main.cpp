#include <wx/wx.h>
#include "windows.h"

class App : public wxApp {
public:
    bool OnInit() override {
        Windows* windows = new Windows();
        windows->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(App);