# Builder模式

组装复杂的实例

## Builder模式中的角色

- Builder 建造者

  负责定义用于生成实例的接口。程序中由`Builder`接口来实现。

- ConcreteBuilder 具体的建造者

  负责实现Builder的接口的类。程序中由`TextBuilder`类和`HTMLBuilder`类来实现。

- Director 监工

  负责使用Builder的接口来生成实例。程序中由`Director`接口来实现。

## 与Template Method的区别

- Template Method模式是行为型模式，Builder模式是创建型模式。

- Template Method模式中，控制流程在父类中；Builder模式中，控制流程在Director中。