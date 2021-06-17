# Flyweight模式

共享对象，避免浪费

# Flyweight模式中的角色

- Flyweight 轻量级

  表示实例会被共享的类。程序中由`BigChar`类来实现。

- FlyweightFactory 轻量级工厂

  FlyweightFactory是生成Flyweight的工厂。在工厂中生成Flyweight可以实现共享实例。程序中由`BigCharFactory`类来实现。

- Client 请求者

  Client使用FlyweightFactory来生成Flyweight。程序中由`BigString`类来实现。