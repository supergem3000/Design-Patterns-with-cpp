#pragma once
#include "Observer.h"
class DigitObserver : public Observer
{
public:
    void update(NumberGenerator *generator) override;
};