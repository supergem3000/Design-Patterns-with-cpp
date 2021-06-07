#pragma once
#include "Tray.h"
class TableTray : public Tray
{
public:
    TableTray(std::string caption);
    std::string makeHTML();
};
