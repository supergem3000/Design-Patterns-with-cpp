# Iterator模式

一个一个遍历

## Iterator模式中的角色

- Iterator 迭代器

  程序中由`Iterator`接口来实现，`hasNext`方法用于判断是否存在下一个元素，`next`方法用于获取该元素。

- ConcreteIterator 具体的迭代器

  程序中由`BookShelfIterator`类来实现。

- Aggregate 集合

  程序中由`Aggregate`接口来实现，定义了`iterator`方法来获取迭代器。

- ConcreteAggregate 具体的集合

  程序中由`BookShelf`类来实现。