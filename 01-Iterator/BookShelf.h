#pragma once
#include "Aggregate.h"
#include "Book.h"
#include <vector>
class BookShelf : public Aggregate<Book>
{
private:
    std::vector<Book*> books;
    int last = 0;
public:
    BookShelf(int maxsize);
    Book* getBookAt(int index);
    void appendBook(Book* book);
    int getLength();
    Iterator<Book>* iterator();
};