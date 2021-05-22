#pragma once
#include "Book.h"
#include "BookShelf.h"
#include "Iterator.h"
class BookShelfIterator :public Iterator<Book>
{
private:
    BookShelf* bookShelf;
    int index;
public:
    BookShelfIterator(BookShelf* bookShelf);
    virtual bool hasNext();
    virtual Book* next();
};