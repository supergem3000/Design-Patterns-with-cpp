#include <iostream>
#include "BookShelf.h"

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