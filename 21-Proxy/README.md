# Proxy模式

只在必要时生成实例

# Proxy模式中的角色

- Subject 主体

  Subject定义了使Proxy和RealSubject之间具有一致性的接口。程序中由`Printable`接口来实现。

- Proxy 代理人

  Proxy只有在必要时才会生成RealSubject。Proxy实现了在Subject中定义的接口。程序中由`PrinterProxy`类来实现。

- RealSubject 实际的主体

  RealSubject会在Proxy无法胜任工作时出场。与Proxy一样，实现了在Subject中定义的接口。程序中由`Printer`类来实现。