# Abstract Factory模式

将关联零件组装成产品

## Abstract Factory模式中的角色

- AbstractProduct 抽象产品

  负责定义AbstractFactory所生成的抽象零件和产品的接口。程序中由`Link`类、`Tray`类和`Page`类来实现。

- AbstractFactory 抽象工厂

  负责定义用于生成抽象产品的接口。程序中由`Factory`类来实现。

- ConcreteProduct 具体产品

  负责实现AbstractProduct的接口。程序中由`ListLink`类、`ListTray`类、`ListPage`类、`TableLink`类、`TableTray`类和`TablePage`类来实现。

- ConcreteFactory 具体工厂

  负责实现AbstractFactory角色的接口。程序中由`Listfactory`类和`TableFactory`类来实现。