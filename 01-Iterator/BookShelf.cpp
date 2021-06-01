#include "BookShelf.h"
#include "BookShelfIterator.h"

BookShelf::BookShelf(int maxsize)
{
    this->books = std::vector<Book*>(maxsize);
}
Book* BookShelf::getBookAt(int index)
{
    return this->books.at(index);
}
void BookShelf::appendBook(Book* book)
{
    this->books[this->last] = book;
    this->last++;
}
int BookShelf::getLength()
{
    return this->last;
}
Iterator<Book>* BookShelf::iterator()
{
    return new BookShelfIterator(this);
}