#include "BookShelfIterator.h"
BookShelfIterator::BookShelfIterator(BookShelf* bookShelf)
{
    this->bookShelf = bookShelf;
    this->index = 0;
}
bool BookShelfIterator::hasNext()
{
    if (this->index < bookShelf->getLength())
    {
        return true;
    }
    else
    {
        return false;
    }
}
Book* BookShelfIterator::next()
{
    Book* book = this->bookShelf->getBookAt(this->index);
    this->index++;
    return book;
}