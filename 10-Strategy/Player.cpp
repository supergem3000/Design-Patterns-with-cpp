#include <sstream>
#include "Player.h"
Player::Player(std::string name, Strategy *strategy)
{
    this->name = name;
    this->strategy = strategy;
}
Hand *Player::nextHand()
{
    return this->strategy->nextHand();
}
void Player::win()
{
    this->strategy->study(true);
    this->wincount++;
    this->gamecount++;
}
void Player::lose()
{
    this->strategy->study(false);
    this->losecount++;
    this->gamecount++;
}
void Player::even()
{
    this->gamecount++;
}
std::string Player::toString()
{
    std::stringstream ss;
    ss << '[' << this->name << ':' << this->gamecount << " games, " << this->wincount << " win, " << this->losecount << " lose" << ']';
    return ss.str();
}