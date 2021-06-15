# Visitor模式

访问数据结构并处理数据

# Visitor模式中的角色

- Visitor 访问者

  负责对数据结构中的每个具体的元素声明一个用于访问*XXXXX*的`visit(XXXXX)`方法。`visit(XXXXX)`是用于处理*XXXXX*的方法，负责实现该方法的是ConcreteVisitor。程序中由`Visitor`类来实现。

- ConcreteVisitor 具体的访问者

  负责实现Visitor所定义的接口。要实现所有的`visit(XXXXX)`方法，即实现如何处理每个ConcreteElement角色。程序中由`ListVisitor`类来实现。

- Element 元素

  表示Visitor的访问对象。它声明了接受访问者的`accept`方法。`accept`方法接收到的参数是Visitor角色。程序中由`Element`接口来实现。

- ConcreteElement

  负责实现Element所定义的接口。程序中由`File`类和`Directory`类来实现。

- ObjectStructure 对象结构

  负责处理Element角色的集合。程序中由`Directory`类来实现（分饰两角）。