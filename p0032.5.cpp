#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    float price;
    int publicationYear;
};

void inputBooks(Book* books, int n) 
{
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for book " << i + 1 << ":" << endl;
        cout << "Title: ";
        cin.ignore();
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Price: ";
        cin >> books[i].price;
        cout << "Publication Year: ";
        cin >> books[i].publicationYear;
    }
}

void displayBooks(const Book* books, int n) 
{
    cout << "\nBook Details:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << ":" << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Price: " << books[i].price << endl;
        cout << "Publication Year: " << books[i].publicationYear << endl;
    }
}

void findMostExpensiveBook(const Book* books, int n)
 {
    int index = 0;
    for (int i = 1; i < n; i++) 
    {
      if (books[i].price > books[index].price) 
      {
      index = i;
      }
    }
 cout << "\nMost Expensive Book:" << endl;
 cout << "Title: " << books[index].title << endl;
 cout << "Author: " << books[index].author << endl;
 cout << "Price: " << books[index].price << endl;
 cout << "Publication Year: " << books[index].publicationYear << endl;
}

void sortBooksByPublication(Book* books, int n)
 {
    for (int i = 0; i < n - 1; i++) {
       for (int j = 0; j < n - i - 1; j++) 
        {
         if (books[j].publicationYear > books[j + 1].publicationYear) 
         {
           Book temp = books[j];
           books[j] = books[j + 1];
           books[j + 1] = temp;
         }
       }
    }
    cout << "\nBooks sorted by publication year." << endl;
}

int main() 
{
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    Book* books = new Book[n];

    inputBooks(books, n);
    displayBooks(books, n);
    findMostExpensiveBook(books, n);
    sortBooksByPublication(books, n);
    displayBooks(books, n);

    delete[] books;
    return 0;
}

