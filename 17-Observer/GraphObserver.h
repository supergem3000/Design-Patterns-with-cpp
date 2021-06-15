#include "NumberGenerator.h"
#include "Observer.h"
class GraphObserver : public Observer
{
public:
    void update(NumberGenerator *generator) override;
};