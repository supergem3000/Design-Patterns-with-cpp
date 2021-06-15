# Facade模式

简单窗口

# Facade模式中的角色

- Facade 窗口

  代表构成系统的许多其他角色的“简单窗口”。Facade向系统外部提供高层接口。程序中由`PageMaker`类来实现。

- 构成系统的许多其他角色

  这些角色各自完成自己的工作，它们并不知道Facade。Facade调用其他角色进行工作，但是其他角色不会调用Facade。程序中由`Database`类和`HtmlWriter`类来实现。