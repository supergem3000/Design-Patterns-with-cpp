# Template Method模式

将具体处理交给子类

## Template Method模式中的角色

- AbstractClass 抽象类

  不仅负责实现模板方法，还负责声明再模板方法中所使用到的抽象方法。程序中由`AbstractDisplay`类来实现。

- ConcreteClass 具体类

  负责具体实现AbstractClass中定义的抽象方法。程序中由`CharDisplay`类和`StringDisplay`类来实现。