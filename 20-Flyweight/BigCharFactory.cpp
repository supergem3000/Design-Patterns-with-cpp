#include "BigCharFactory.h"
BigCharFactory::BigCharFactory() {}
BigCharFactory *BigCharFactory::singleton = new BigCharFactory();
BigCharFactory *BigCharFactory::getInstance()
{
    return BigCharFactory::singleton;
}
BigChar *BigCharFactory::getBigChar(char charname)
{
    std::map<char, BigChar *>::iterator it = this->pool.find(charname);
    if (it == this->pool.end())
    {
        BigChar *bc = new BigChar(charname);
        pool.insert(std::pair<char, BigChar *>(charname, bc));
        return bc;
    }
    else
    {
        return it->second;
    }
}