# Adapter模式（类适配器、使用继承）

加个“适配器”以便于复用

## Adapter模式（类适配器、使用继承）中的角色

- Target 对象

  负责定义所需的方法。程序中由`Print`接口来实现。

- Client 请求者

  负责使用Target角色所定义的方法进行具体处理。程序中由`main`函数来实现。

- Adaptee 被适配

  Adaptee是一个持有既定方法的角色。程序中由`Banner`类来实现。

- Adapter 适配

  使用Adaptee角色的方法来满足Target角色的需求。Adapter角色通过继承来使用Adaptee角色。程序中由`PrintBanner`来实现。