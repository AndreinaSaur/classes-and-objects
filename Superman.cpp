#include <iostream>
#include <vector>
using namespace std;

class book 
{
public:
    string title;
    string author;
    int releasedate;
    string genre;
    float rating; 
    string banner = "=============================================================";

    book(string title, string author, int releasedate, string genre, float rating)  
    {
        this->title = title;
        this->author = author;
        this->releasedate = releasedate;
        this->genre = genre;
        this->rating = rating;
    }

    ~book() {
        cout<< title << " has been deleted" << endl;
    }
    void display()
    {
        cout << banner << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Release date: " << releasedate << endl;
        cout << "Genre: " << genre << endl;
        cout << "Rating: " << rating << endl;
        cout << banner << endl;
    }
};

int main()
{
vector<book> books;
string title, author, genre; 
int releasedate;
float rating;

cout << "Enter book title: ";
getline(cin, title);

cout << "Enter book author: ";
getline(cin, author);

cout << "Enter book release date: ";
cin >> releasedate;

cin.ignore();

cout << "Enter book genre: ";
getline(cin, genre);

cout << "Enter book rating: ";
cin >> rating;

books.push_back(book(title, author, releasedate, genre, rating));
for (int i = 0; i < books.size(); i++)
{
    books[i].display();
}
return 0;
}
