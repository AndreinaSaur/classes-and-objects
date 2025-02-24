#include <iostream>
#include <vector>
using namespace std;

class book 
{
public:
    string title;
    string author;
    int year;
    string banner = "=============================================================";

    book(string title, string author, int year)  
    {
        this->title = title;
        this->author = author;
        this->year = year;
    }

    ~book() {
        cout<< title << " has been deleted" << endl;
    }
    void display()
    {
        cout << banner << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
        cout << banner << endl;
    }
};

int main()
{
vector<book> books;
string title, author, genre, banner; 
int year, chosen;
cout<< banner << endl;
cout<<"Welcome to library";
cout<< banner << endl;

cout<<"What is your choice?: 1. Add book, 2. Display book, 3. Search book, 4. Exit  ";
cin>>chosen;

switch(chosen) {
  case 1:
  cin.ignore();
   cout << "Enter book title: ";
getline(cin, title);
cin.ignore();1
cout << "Enter book author: ";
getline(cin, author);

cout << "Enter book Year: ";
cin >> year;

cout << "Book Added Successfully";
    break;
  case 2:
    break;
}



books.push_back(book(title, author, year));
for (int i = 0; i < books.size(); i++)
{
    books[i].display();
}
return 0;
}
