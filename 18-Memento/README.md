# Memento模式

保存对象状态

## Memento模式中的角色

- Originator 生成者

  Originator会在保存自己的最新状态时生成Memento。当把以前保存的Memento传递给Originator时，他将会恢复至生成该Memento时的状态。程序中由`Gamer`类来实现。

- Memento 纪念品

  Memento会将Originator的内部信息整合在一起。在Memento中虽然保存了Originator的信息，但他不会向外部公开这些信息。

  Memento由以下两种接口。

  - wide interface——宽接口

    Memento提供的“宽接口”是指所有用户获取恢复对象状态信息的方法的集合。由于宽接口会暴露所有Memento的内部信息，因此能够使用宽接口的只有Originator角色。

  - narrow interface——窄接口

    Memento为外部的Caretaker提供了“窄接口”。可以通过窄接口获取的Memento的内部信心非常有限，因此可以有效地防止信息泄露。

  程序中由`Memento`类来实现。

- Caretaker 负责人

  当Caretaker想要保存当前的Originator的状态时，会通知Originator。Originator在接收到通知后会生成Memento的实例并将其返回给Caretaker。由于以后可能会用Memento实例来将Originator恢复至原来的状态，因此Caretaker会一直保存Memento实例。程序中由`main`函数来实现。

  Caretaker只能使用Memento中的窄接口。它只是将Originator生成的Memento当作一个黑盒子保存起来。