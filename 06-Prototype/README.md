# Prototype模式

通过复制生成实例

## Prototype模式中的角色

- Prototype 原型

  定义用于复制现有实例来生成新实例的方法。程序中由`Product`接口来实现。

- ConcretePrototype 具体的原型

  负责实现复制现有实例并生成新实例的方法。程序中由`MessageBox`类和`UnderlinePen`类来实现。

- Client 使用者

  负责使用复制实例的方法生成新的实例。程序中由`Manager`类来实现。