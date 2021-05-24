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
    bool hasNext();
    Book* next();
};