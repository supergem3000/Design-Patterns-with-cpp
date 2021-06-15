# Chain of Responsibility模式

推卸责任

## Chain of Responsibility模式中的角色

- Handler 处理者

  定义了处理请求的接口。Handler知道“下一个处理者”是谁，如果自己无法处理请求，它会将请求转给“下一个处理者”。“下一个处理者”也是Handler。程序中有`Support`类来实现。负责处理请求的是`support`方法。

- ConcreteHandler 具体的处理者

  处理请求的具体角色。程序中由`NoSupport`、`LimitSupport`、`OddSupport`和`SpecialSupport`来实现。