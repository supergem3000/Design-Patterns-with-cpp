#pragma once
#include <vector>
class Observer;
class NumberGenerator
{
public:
    void addObserver(Observer *observer);
    void deleteObserver(Observer *observer);
    void notifyObservers();
    virtual int getNumber() = 0;
    virtual void execute() = 0;

private:
    std::vector<Observer *> observers;
};