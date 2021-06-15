#include "NumberGenerator.h"
#include "Observer.h"
void NumberGenerator::addObserver(Observer *observer)
{
    this->observers.push_back(observer);
}
void NumberGenerator::deleteObserver(Observer *observer)
{
    for (std::vector<Observer *>::iterator it = this->observers.begin(); it != this->observers.end(); it++)
    {
        if ((*it) == observer)
        {
            this->observers.erase(it);
            break;
        }
    }
}
void NumberGenerator::notifyObservers()
{
    for (std::vector<Observer *>::iterator it = this->observers.begin(); it != this->observers.end(); it++)
    {
        (*it)->update(this);
    }
}