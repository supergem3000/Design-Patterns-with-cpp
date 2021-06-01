# Factory Method模式

将实例的生成交给子类

## Factory Method模式中的角色

- Product 产品

  定义了在Factory Method模式中生成的那些示例所持有的接口。程序中由`Product`类来实现。

- Creator 创建者

  负责生成Product角色。程序中由`Creator`类来实现。

- ConcreteProduct 具体的产品

  程序中由`IDCard`类来实现。

- ConcreteCreator 具体的创建者

  程序中由`IDCardFactory`类来实现。