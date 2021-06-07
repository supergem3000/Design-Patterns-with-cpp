# Strategy模式

整体地替换算法

## Strategy模式中的角色

- Strategy 策略

  负责决定实现策略所必需的接口。程序中由`Strategy`接口来实现。

- ConcreteStrategy 具体的策略

  负责实现Strategy的接口，即负责实现具体的策略。程序中由`WinningStrategy`类和`ProbStrategy`类来实现。

- Context 上下文

  负责使用Strategy。保存了ConcreteStrategy的实例，并使用ConcreteStrategy去实现需求。程序中由`Player`类来实现。