# Composite模式

容器与内容的一致性

## Composite模式中的角色

- Leaf 树叶

  表示内容。不能放入其他对象。程序中由`File`类来实现。

- Composite 复合物

  表示容器。可以在其中放入Leaf和Composite。程序中由`Directory`类来实现。

- Component

  使Leaf和Composite具有一致性的角色。是Leaf和Composite的父类。程序中由`Entry`类来实现。