#include <Windows.h>

class AutoCenterCursor : public SINGLETON<AutoCenterCursor>, public RE::BSTEventSink<RE::MenuOpenCloseEvent> {
public:
	RE::BSEventNotifyControl ProcessEvent(const RE::MenuOpenCloseEvent* ev, RE::BSTEventSource<RE::MenuOpenCloseEvent>*) override {
		if (ev->opening) {
			SetCursorPos(RE::MenuCursor::GetSingleton()->cursorPosX, RE::MenuCursor::GetSingleton()->cursorPosY);
		}

		return RE::BSEventNotifyControl::kContinue;
	}
};