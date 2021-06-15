#include "LimitSupport.h"
#include "NoSupport.h"
#include "OddSupport.h"
#include "SpecialSupport.h"
#include "Support.h"
#include "Trouble.h"

int main()
{
    Support *alice = new NoSupport("Alice");
    Support *bob = new LimitSupport("Bob", 100);
    Support *charlie = new SpecialSupport("Charlie", 429);
    Support *diana = new LimitSupport("Diana", 200);
    Support *elmo = new OddSupport("Elmo");
    Support *fred = new LimitSupport("Fred", 300);
    alice->setNext(bob)->setNext(charlie)->setNext(diana)->setNext(elmo)->setNext(fred);
    for (int i = 0; i < 500; i+=33)
    {
        alice->support(new Trouble(i));
    }
    return 0;
}