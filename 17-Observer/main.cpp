#include "DigitObserver.h"
#include "GraphObserver.h"
#include "NumberGenerator.h"
#include "Observer.h"
#include "RandomNumberGenerator.h"

int main()
{
    NumberGenerator *generator = new RandomNumberGenerator();
    Observer *observer1 = new DigitObserver();
    Observer *observer2 = new GraphObserver();
    generator->addObserver(observer1);
    generator->addObserver(observer2);
    generator->execute();
    return 0;
}