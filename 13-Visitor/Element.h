#pragma once
// #include "Visitor.h"
// 解决头文件循环引用的问题，在此声明一下Visitor类
class Visitor;
class Element
{
public:
    virtual void accept(Visitor *v) = 0;
};
