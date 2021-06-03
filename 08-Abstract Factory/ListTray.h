#pragma once
#include "Tray.h"
class ListTray : public Tray
{
public:
	ListTray(std::string caption);
	std::string makeHTML();
};