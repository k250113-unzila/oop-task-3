#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    // 1. Default constructor
    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }

    // 2. Parameterized constructor (full identity)
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

   
    

    // 4. Copy constructor
    Book(const Book &other) {
        title = other.title;
        author = other.author;
        price = other.price;
    }

    // Display book details
    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    // Default constructor
    Book b1;
    cout << "Book 1 (Default Constructor):" << endl;
    b1.display();

    // Parameterized constructor
    Book b2("2000", "isabel conklin", 15.99);
    cout << "Book 2 (Parameterized Constructor):" << endl;
    b2.display();

   

    // Copy constructor
    Book b4(b2);
    cout << "Book 4 (Copy Constructor):" << endl;
    b4.display();

    return 0;
}

