#include <iostream>
using namespace std;

class Book {
public:
    int id, price;
    string title, author;
    bool available = true;

    void add() {
        cout << "Enter ID: "; 
        cin >> id;
        cout << "Enter Title: "; 
        cin>>title;
        cout<<"\n";
        cout << "Enter Author: "; 
        cin>>author;
        cout<<"\n";
        cout << "Price: "; 
        cin >> price;
    }

    void display() {
        cout << "\nID: " << id << "\n";
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Price: " << price << "\n";
        cout << "Available: " << (available ? "Yes" : "No") << "\n";
    }

    void issue() {
        if (available) {
            available = false;
            cout << "Book issued!\n";
        } else {
            cout << "Already issued!\n";
        }
    }

    bool searchById(int searchId) {
        return id == searchId;
    }
};

int main() {
    Book books[10];
    int count = 0, choice, id;
    bool found;

    while (true) {
        cout << "\n1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Search Book by ID\n";
        cout << "5. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < 10) {
                    books[count++].add();
                } else {
                    cout << "Library is full!\n";
                }
                break;

            case 2:
                if (count == 0) {
                    cout << "No books available.\n";
                } else {
                    for (int i = 0; i < count; i++) {
                        books[i].display();
                    }
                }
                break;

            case 3:
                cout << "Enter ID: ";
                cin >> id;
                found = false;
                for (int i = 0; i < count; i++) {
                    if (books[i].searchById(id)) {
                        books[i].issue();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Book not found!\n";
                }
                break;

            case 4:
                cout << "Enter ID: ";
                cin >> id;
                found = false;
                for (int i = 0; i < count; i++) {
                    if (books[i].searchById(id)) {
                        cout << "\nBook Found:\n";
                        books[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Book not found!\n";
                }
                break;

            case 5:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;
}