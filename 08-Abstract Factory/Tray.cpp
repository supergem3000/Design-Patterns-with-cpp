#include "Tray.h"
Tray::Tray(std::string caption) : Item(caption) {}
void Tray::add(Item* item)
{
	tray.push_back(item);
}