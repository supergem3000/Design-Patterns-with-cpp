# Bridge模式

将类的功能层次结构与实现层次结构分离

## Bridge模式中的角色

- Abstraction 抽象化

  使用Implementor的方法定义了基本的功能。保存了Implementor的实例。程序中由`Display`类来实现。

- RefinedAbstraction 改善后的抽象化

  在Abstraction的基础上增加了新功能。程序中由`CountDisplay`类来实现。

- Implementor 实现者

  定义了用于实现Abstraction的接口的的方法。程序中由`DisplayImpl`类来实现。

- ConcreteImplementor 具体实现者

  负责实现在Implementor角色中定义的接口。程序中由`StringDisplayImpl`类来实现。

## 与Adapter模式的区别

- 使用Bridge模式可以达到类的功能层次结构与类的实现层次结构分离的目的，并在此基础上使这些层次结构结合起来。而使用Adapter模式则可以结合那些功能上相似但是接口不同的类。

- Bridge模式：分离抽象化和实现。Adapter模式：改变已有的两个接口，让他们相容。