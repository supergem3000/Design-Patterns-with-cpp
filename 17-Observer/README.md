# Observer模式

发送状态变化通知

## Observer模式中的角色

- Subject 观察对象

  定义了注册观察者和删除观察者的方法。此外它还声明了“获取现在的状态”的方法。程序中由`NumberGenerator`类来实现。

- ConcreteSubject 具体的观察对象

  当自身状态发生变化后，它会通知所有已经注册的Observer角色。程序中由`RandomNumberGenerator`类来实现。

- Observer 观察者

  负责接收来自Subject的状态变化的通知。为此，它声明了`update`方法。程序中由`Observer`接口来实现。

- ConcreteObserver 具体的观察者

  表示具体的Observer。当他的`update`方法被调用后，会去获取要观察的对象的最新状态。程序中由`DigitObserver`类和`GraphObserver`类来实现。