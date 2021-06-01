#pragma once
class Singleton
{
public:
	static Singleton* getInstance();
private:
	static Singleton* singleton;
	Singleton();
};

