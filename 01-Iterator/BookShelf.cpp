#include "BookShelf.h"
#include "BookShelfIterator.h"
#include <iostream>

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

int main()
{
    BookShelf bookShelf(4);
    bookShelf.appendBook(new Book("Around the World in 80 Days"));
    bookShelf.appendBook(new Book("Bible"));
    bookShelf.appendBook(new Book("Cinderella"));
    bookShelf.appendBook(new Book("Daddy-Long-Legs"));
    Iterator<Book>* it = bookShelf.iterator();
    while (it->hasNext())
    {
        Book* book = it->next();
        std::cout << book->getName() << std::endl;
    }
    return 0;
}