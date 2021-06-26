# Interperter模式

语法规则也是类

# Interpreter模式中的角色

- AbstractExpression 抽象表达式

  定义了语法树节点的共同接口。程序中由`Node`类来实现。程序中共同接口的名字是`parse`。

- TerminalExpression 终结符表达式

  程序中由`PrimitiveCommandNode`类来实现。

- NonterminalExpresesion 非终结符表达式

  程序中由`ProgramNode`类、`CommandNode`类、`RepeatCommandNode`类和`CommandListNode`类来实现。

- Context 上下文

  Context为解释器进行语法解析提供了必要的信息。程序中由`Context`类来实现。