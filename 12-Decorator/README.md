# Decorator模式

装饰边框与被装饰物的一致性

## Decorator模式中的角色

- Component

  增加功能时的核心角色。只是定义了接口。程序中由`Display`类来实现。

- ConcreteComponent

  实现了Component所定义的接口。程序中由`StringDisplay`类来实现。

- Decorator 装饰物

  具有与Component相同的接口。它内部保存了被装饰对象——Component。Decorator知道自己要装饰的对象。程序中由`Border`类来实现。

- ConcreteDecorator 具体的装饰物

  具体的Decorator。程序中由`SideBorder`类和`FullBorder`类来实现。