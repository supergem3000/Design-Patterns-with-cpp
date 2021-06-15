#pragma once
#include <random>
#include "NumberGenerator.h"
class RandomNumberGenerator : public NumberGenerator
{
public:
    int getNumber() override;
    void execute() override;

private:
    std::default_random_engine random_e;
    int number;
};