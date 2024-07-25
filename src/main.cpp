#include <Windows.h>
#include <iostream>
 
bool Active = false;

int main() {
	std::cout << "'F8' to active, 'F9' to disable";
	while (true) {
		if (GetAsyncKeyState(VK_F8)) {
			Active = true; 
		}
		else if (GetAsyncKeyState(VK_F9)) {
			Active = false;
		}

		if (Active) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(1);
		}
	}
 
	return 0;
}