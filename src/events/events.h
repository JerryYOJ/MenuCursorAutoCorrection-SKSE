#include "AutoCenterCursor/AutoCenterCursor.h"

namespace Events {
    void InstallEarly() { 
        RE::UI::GetSingleton()->AddEventSink<RE::MenuOpenCloseEvent>(AutoCenterCursor::getInstance());
    }
    void InstallLate(){
    }
}